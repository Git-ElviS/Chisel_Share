circuit RecordQueueTester :
  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : { bar : UInt<32>, foo : UInt<32>}}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : { bar : UInt<32>, foo : UInt<32>}}, count : UInt<3>}

    cmem ram : { bar : UInt<32>, foo : UInt<32>} [4] @[Decoupled.scala 259:95]
    reg enq_ptr_value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    reg deq_ptr_value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
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
      node wrap = eq(enq_ptr_value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 78:15]
    when do_deq : @[Decoupled.scala 276:16]
      node wrap_1 = eq(deq_ptr_value, UInt<2>("h3")) @[Counter.scala 74:24]
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
    node _io_count_T_1 = mux(_io_count_T, UInt<3>("h4"), UInt<1>("h0")) @[Decoupled.scala 315:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 315:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 315:14]

  module RecordQueueTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst queue of Queue @[RecordSpec.scala 59:23]
    queue.clock <= clock
    queue.reset <= reset
    queue.io.count is invalid @[RecordSpec.scala 60:14]
    queue.io.deq.bits.foo is invalid @[RecordSpec.scala 60:14]
    queue.io.deq.bits.bar is invalid @[RecordSpec.scala 60:14]
    queue.io.deq.valid is invalid @[RecordSpec.scala 60:14]
    queue.io.deq.ready is invalid @[RecordSpec.scala 60:14]
    queue.io.enq.bits.foo is invalid @[RecordSpec.scala 60:14]
    queue.io.enq.bits.bar is invalid @[RecordSpec.scala 60:14]
    queue.io.enq.valid is invalid @[RecordSpec.scala 60:14]
    queue.io.enq.ready is invalid @[RecordSpec.scala 60:14]
    queue.io.enq.valid <= UInt<1>("h0") @[RecordSpec.scala 61:24]
    reg cycle : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = eq(cycle, UInt<1>("h0")) @[RecordSpec.scala 64:16]
    when _T : @[RecordSpec.scala 64:25]
      queue.io.enq.bits.foo <= UInt<11>("h4d2") @[RecordSpec.scala 65:32]
      queue.io.enq.bits.bar <= UInt<13>("h162e") @[RecordSpec.scala 66:32]
      queue.io.enq.valid <= UInt<1>("h1") @[RecordSpec.scala 67:26]
    node _T_1 = eq(cycle, UInt<1>("h1")) @[RecordSpec.scala 69:16]
    when _T_1 : @[RecordSpec.scala 69:25]
      queue.io.deq.ready <= UInt<1>("h1") @[RecordSpec.scala 70:26]
      node _T_2 = eq(queue.io.deq.valid, UInt<1>("h1")) @[RecordSpec.scala 71:33]
      node _T_3 = bits(reset, 0, 0) @[RecordSpec.scala 71:13]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[RecordSpec.scala 71:13]
      when _T_4 : @[RecordSpec.scala 71:13]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[RecordSpec.scala 71:13]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[RecordSpec.scala 71:13]
        when _T_5 : @[RecordSpec.scala 71:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:71 assert(queue.io.deq.valid === true.B)\n") : printf @[RecordSpec.scala 71:13]
      node _T_6 = eq(queue.io.deq.bits.foo, UInt<11>("h4d2")) @[RecordSpec.scala 72:46]
      node _T_7 = bits(reset, 0, 0) @[RecordSpec.scala 72:13]
      node _T_8 = eq(_T_7, UInt<1>("h0")) @[RecordSpec.scala 72:13]
      when _T_8 : @[RecordSpec.scala 72:13]
        assert(clock, _T_6, UInt<1>("h1"), "") : assert_1 @[RecordSpec.scala 72:13]
        node _T_9 = eq(_T_6, UInt<1>("h0")) @[RecordSpec.scala 72:13]
        when _T_9 : @[RecordSpec.scala 72:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:72 assert(queue.io.deq.bits(\"foo\").asUInt === 1234.U)\n") : printf_1 @[RecordSpec.scala 72:13]
      node _T_10 = eq(queue.io.deq.bits.bar, UInt<13>("h162e")) @[RecordSpec.scala 73:46]
      node _T_11 = bits(reset, 0, 0) @[RecordSpec.scala 73:13]
      node _T_12 = eq(_T_11, UInt<1>("h0")) @[RecordSpec.scala 73:13]
      when _T_12 : @[RecordSpec.scala 73:13]
        assert(clock, _T_10, UInt<1>("h1"), "") : assert_2 @[RecordSpec.scala 73:13]
        node _T_13 = eq(_T_10, UInt<1>("h0")) @[RecordSpec.scala 73:13]
        when _T_13 : @[RecordSpec.scala 73:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at RecordSpec.scala:73 assert(queue.io.deq.bits(\"bar\").asUInt === 5678.U)\n") : printf_2 @[RecordSpec.scala 73:13]
    when done : @[RecordSpec.scala 75:16]
      node _T_14 = bits(reset, 0, 0) @[RecordSpec.scala 76:11]
      node _T_15 = eq(_T_14, UInt<1>("h0")) @[RecordSpec.scala 76:11]
      when _T_15 : @[RecordSpec.scala 76:11]
        stop(clock, UInt<1>("h1"), 0) : stop @[RecordSpec.scala 76:11]
