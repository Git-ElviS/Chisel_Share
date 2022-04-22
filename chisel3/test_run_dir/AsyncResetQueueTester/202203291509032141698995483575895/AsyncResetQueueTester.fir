circuit AsyncResetQueueTester :
  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<8>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<8>}, count : UInt<3>}

    cmem ram : UInt<8> [4] @[Decoupled.scala 259:95]
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

  module AsyncResetQueueTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cDiv_value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire cDiv : UInt<1>
    cDiv <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node cDiv_wrap_wrap = eq(cDiv_value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _cDiv_wrap_value_T = add(cDiv_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _cDiv_wrap_value_T_1 = tail(_cDiv_wrap_value_T, 1) @[Counter.scala 78:24]
      cDiv_value <= _cDiv_wrap_value_T_1 @[Counter.scala 78:15]
      cDiv <= cDiv_wrap_wrap @[Counter.scala 120:23]
    node slowClk = asClock(cDiv) @[AsyncResetSpec.scala 94:22]
    reg count : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(count, UInt<4>("hf")) @[Counter.scala 74:24]
      node _wrap_value_T = add(count, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      count <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    reg asyncResetNext : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[AsyncResetSpec.scala 98:31]
    asyncResetNext <= UInt<1>("h0") @[AsyncResetSpec.scala 98:31]
    node asyncReset = asAsyncReset(asyncResetNext) @[AsyncResetSpec.scala 99:35]
    inst queue of Queue @[AsyncResetSpec.scala 102:11]
    queue.clock <= slowClk
    queue.reset <= asyncReset
    queue.io.enq.valid <= UInt<1>("h1") @[AsyncResetSpec.scala 104:22]
    queue.io.enq.bits <= count @[AsyncResetSpec.scala 105:21]
    queue.io.deq.ready <= UInt<1>("h0") @[AsyncResetSpec.scala 107:22]
    reg doCheck : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[AsyncResetSpec.scala 109:24]
    doCheck <= UInt<1>("h0") @[AsyncResetSpec.scala 109:24]
    node _T = eq(queue.io.count, UInt<2>("h3")) @[AsyncResetSpec.scala 110:23]
    when _T : @[AsyncResetSpec.scala 110:32]
      asyncResetNext <= UInt<1>("h1") @[AsyncResetSpec.scala 111:20]
      doCheck <= UInt<1>("h1") @[AsyncResetSpec.scala 112:13]
    when doCheck : @[AsyncResetSpec.scala 114:17]
      node _T_1 = eq(queue.io.count, UInt<1>("h0")) @[AsyncResetSpec.scala 115:27]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 115:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[AsyncResetSpec.scala 115:11]
      when _T_3 : @[AsyncResetSpec.scala 115:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[AsyncResetSpec.scala 115:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[AsyncResetSpec.scala 115:11]
        when _T_4 : @[AsyncResetSpec.scala 115:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:115 assert(queue.io.count === 0.U)\n") : printf @[AsyncResetSpec.scala 115:11]
    when done : @[AsyncResetSpec.scala 118:14]
      node _T_5 = bits(reset, 0, 0) @[AsyncResetSpec.scala 119:9]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[AsyncResetSpec.scala 119:9]
      when _T_6 : @[AsyncResetSpec.scala 119:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[AsyncResetSpec.scala 119:9]
