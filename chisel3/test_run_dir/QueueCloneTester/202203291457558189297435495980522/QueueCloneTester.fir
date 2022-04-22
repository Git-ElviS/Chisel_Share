circuit QueueCloneTester :
  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<2>}

    cmem ram : UInt<32> [2] @[Decoupled.scala 259:95]
    reg enq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    reg deq_ptr_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 262:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 263:33]
    node _empty_T = eq(maybe_full, UInt<1>("h0")) @[Decoupled.scala 264:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 264:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 265:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 50:35]
    wire do_enq : UInt<1>
    do_enq <= _do_enq_T
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 50:35]
    wire do_deq : UInt<1>
    do_deq <= _do_deq_T
    when do_enq : @[Decoupled.scala 272:16]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 273:8]
      MPORT <= io.enq.bits @[Decoupled.scala 273:24]
      node wrap = eq(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 74:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 78:15]
    when do_deq : @[Decoupled.scala 276:16]
      node wrap_1 = eq(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 74:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 78:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    when _T : @[Decoupled.scala 279:27]
      maybe_full <= do_enq @[Decoupled.scala 280:16]
    when UInt<1>("h0") : @[Decoupled.scala 282:15]
      enq_ptr_value <= UInt<1>("h0") @[Counter.scala 99:11]
      deq_ptr_value <= UInt<1>("h0") @[Counter.scala 99:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 285:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 288:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 288:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 289:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 289:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 296:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 296:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 312:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 312:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 315:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<2>("h2"), UInt<1>("h0")) @[Decoupled.scala 315:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 315:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 315:14]

  module MultiIOQueue :
    input clock : Clock
    input reset : Reset
    input clk : Clock
    input rst : Reset
    input enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}
    output deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}
    output count : UInt<2>

    inst impl of Queue @[CloneModuleSpec.scala 17:50]
    impl.clock <= clk
    impl.reset <= rst
    impl.io.enq <= enq @[CloneModuleSpec.scala 18:15]
    deq.bits <= impl.io.deq.bits @[CloneModuleSpec.scala 19:7]
    deq.valid <= impl.io.deq.valid @[CloneModuleSpec.scala 19:7]
    impl.io.deq.ready <= deq.ready @[CloneModuleSpec.scala 19:7]
    count <= impl.io.count @[CloneModuleSpec.scala 20:9]

  module QueueClone :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    inst q1 of MultiIOQueue @[CloneModuleSpec.scala 26:20]
    q1.clock <= clock
    q1.reset <= reset
    inst q2_io of MultiIOQueue @[CloneModuleSpec.scala 27:36]
    q2_io.clock <= clock @[CloneModuleSpec.scala 27:36]
    q2_io.reset <= reset @[CloneModuleSpec.scala 27:36]
    q1.clk <= clock @[CloneModuleSpec.scala 28:12]
    q1.rst <= reset @[CloneModuleSpec.scala 29:12]
    q1.enq <= io.enq @[CloneModuleSpec.scala 30:12]
    q2_io.clk <= clock @[CloneModuleSpec.scala 31:38]
    q2_io.rst <= reset @[CloneModuleSpec.scala 32:38]
    q2_io.enq <= q1.deq @[CloneModuleSpec.scala 33:44]
    io.deq.bits <= q2_io.deq.bits @[CloneModuleSpec.scala 34:12]
    io.deq.valid <= q2_io.deq.valid @[CloneModuleSpec.scala 34:12]
    q2_io.deq.ready <= io.deq.ready @[CloneModuleSpec.scala 34:12]
    node _io_count_T = add(q1.count, q2_io.count) @[CloneModuleSpec.scala 35:26]
    node _io_count_T_1 = tail(_io_count_T, 1) @[CloneModuleSpec.scala 35:26]
    io.count <= _io_count_T_1 @[CloneModuleSpec.scala 35:14]

  module QueueCloneTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of QueueClone @[CloneModuleSpec.scala 48:19]
    dut.clock <= clock
    dut.reset <= reset
    node _start_T = and(dut.io.enq.ready, dut.io.enq.valid) @[Decoupled.scala 50:35]
    reg start : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[CloneModuleSpec.scala 49:22]
    start <= _start_T @[CloneModuleSpec.scala 49:22]
    reg accept : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[CloneModuleSpec.scala 50:23]
    accept <= dut.io.deq.valid @[CloneModuleSpec.scala 50:23]
    dut.io.enq.bits <= UInt<7>("h63") @[CloneModuleSpec.scala 51:19]
    dut.io.enq.valid <= start @[CloneModuleSpec.scala 52:20]
    dut.io.deq.ready <= accept @[CloneModuleSpec.scala 53:20]
    node _T = and(dut.io.deq.ready, dut.io.deq.valid) @[Decoupled.scala 50:35]
    when _T : @[CloneModuleSpec.scala 54:25]
      node _T_1 = eq(dut.io.deq.bits, UInt<7>("h63")) @[CloneModuleSpec.scala 55:28]
      node _T_2 = bits(reset, 0, 0) @[CloneModuleSpec.scala 55:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[CloneModuleSpec.scala 55:11]
      when _T_3 : @[CloneModuleSpec.scala 55:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[CloneModuleSpec.scala 55:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[CloneModuleSpec.scala 55:11]
        when _T_4 : @[CloneModuleSpec.scala 55:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at CloneModuleSpec.scala:55 assert(dut.io.deq.bits === x.U)\n") : printf @[CloneModuleSpec.scala 55:11]
      node _T_5 = bits(reset, 0, 0) @[CloneModuleSpec.scala 56:9]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[CloneModuleSpec.scala 56:9]
      when _T_6 : @[CloneModuleSpec.scala 56:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[CloneModuleSpec.scala 56:9]
