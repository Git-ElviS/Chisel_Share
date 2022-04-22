circuit DedupQueues :
  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    cmem ram : UInt<32> [4] @[Decoupled.scala 259:95]
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

  module Queue_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    cmem ram : UInt<32> [4] @[Decoupled.scala 259:95]
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

  module Queue_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    cmem ram : UInt<32> [4] @[Decoupled.scala 259:95]
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

  module Queue_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    cmem ram : UInt<32> [4] @[Decoupled.scala 259:95]
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

  module DedupQueues :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, out : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}}

    inst queues_0 of Queue @[DedupSpec.scala 16:34]
    queues_0.clock <= clock
    queues_0.reset <= reset
    inst queues_1 of Queue_1 @[DedupSpec.scala 16:34]
    queues_1.clock <= clock
    queues_1.reset <= reset
    inst queues_2 of Queue_2 @[DedupSpec.scala 16:34]
    queues_2.clock <= clock
    queues_2.reset <= reset
    inst queues_3 of Queue_3 @[DedupSpec.scala 16:34]
    queues_3.clock <= clock
    queues_3.reset <= reset
    queues_0.io.enq <= io.in @[DedupSpec.scala 19:14]
    queues_1.io.enq <= queues_0.io.deq @[DedupSpec.scala 19:14]
    queues_2.io.enq <= queues_1.io.deq @[DedupSpec.scala 19:14]
    queues_3.io.enq <= queues_2.io.deq @[DedupSpec.scala 19:14]
    io.out.bits <= queues_3.io.deq.bits @[DedupSpec.scala 22:10]
    io.out.valid <= queues_3.io.deq.valid @[DedupSpec.scala 22:10]
    queues_3.io.deq.ready <= io.out.ready @[DedupSpec.scala 22:10]

