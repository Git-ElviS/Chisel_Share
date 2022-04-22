circuit NestedDedup :
  module Queue :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    cmem ram : UInt<32> [4] @[Decoupled.scala 259:95]
    reg value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    reg value_1 : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
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
      infer mport MPORT = ram[value], clock @[Decoupled.scala 273:8]
      MPORT <= io.enq.bits @[Decoupled.scala 273:24]
      node wrap = eq(value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      value <= _value_T_1 @[Counter.scala 78:15]
    when do_deq : @[Decoupled.scala 276:16]
      node wrap_1 = eq(value_1, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T_2 = add(value_1, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
      value_1 <= _value_T_3 @[Counter.scala 78:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    when _T : @[Decoupled.scala 279:27]
      maybe_full <= do_enq @[Decoupled.scala 280:16]
    when UInt<1>("h0") : @[Decoupled.scala 282:15]
      value <= UInt<1>("h0") @[Counter.scala 99:11]
      value_1 <= UInt<1>("h0") @[Counter.scala 99:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 285:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 288:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 288:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 289:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 289:16]
    infer mport io_deq_bits_MPORT = ram[value_1], clock @[Decoupled.scala 296:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 296:17]
    node _ptr_diff_T = sub(value, value_1) @[Decoupled.scala 312:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 312:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 315:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<3>("h4"), UInt<1>("h0")) @[Decoupled.scala 315:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 315:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 315:14]

  module DedupSubModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, out : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}}

    inst io_out_q of Queue @[Decoupled.scala 361:21]
    io_out_q.clock <= clock
    io_out_q.reset <= reset
    io_out_q.io.enq.valid <= io.in.valid @[Decoupled.scala 363:22]
    io_out_q.io.enq.bits <= io.in.bits @[Decoupled.scala 364:21]
    io.in.ready <= io_out_q.io.enq.ready @[Decoupled.scala 365:17]
    io.out.bits <= io_out_q.io.deq.bits @[DedupSpec.scala 32:10]
    io.out.valid <= io_out_q.io.deq.valid @[DedupSpec.scala 32:10]
    io_out_q.io.deq.ready <= io.out.ready @[DedupSpec.scala 32:10]

  module Queue_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip enq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, deq : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, count : UInt<3>}

    cmem ram : UInt<32> [4] @[Decoupled.scala 259:95]
    reg value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    reg value_1 : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    reg maybe_full : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Decoupled.scala 262:27]
    node ptr_match = eq(value, value_1) @[Decoupled.scala 263:33]
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
      infer mport MPORT = ram[value], clock @[Decoupled.scala 273:8]
      MPORT <= io.enq.bits @[Decoupled.scala 273:24]
      node wrap = eq(value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      value <= _value_T_1 @[Counter.scala 78:15]
    when do_deq : @[Decoupled.scala 276:16]
      node wrap_1 = eq(value_1, UInt<2>("h3")) @[Counter.scala 74:24]
      node _value_T_2 = add(value_1, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 78:24]
      value_1 <= _value_T_3 @[Counter.scala 78:15]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 279:15]
    when _T : @[Decoupled.scala 279:27]
      maybe_full <= do_enq @[Decoupled.scala 280:16]
    when UInt<1>("h0") : @[Decoupled.scala 282:15]
      value <= UInt<1>("h0") @[Counter.scala 99:11]
      value_1 <= UInt<1>("h0") @[Counter.scala 99:11]
      maybe_full <= UInt<1>("h0") @[Decoupled.scala 285:16]
    node _io_deq_valid_T = eq(empty, UInt<1>("h0")) @[Decoupled.scala 288:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 288:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h0")) @[Decoupled.scala 289:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 289:16]
    infer mport io_deq_bits_MPORT = ram[value_1], clock @[Decoupled.scala 296:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 296:17]
    node _ptr_diff_T = sub(value, value_1) @[Decoupled.scala 312:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 312:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 315:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<3>("h4"), UInt<1>("h0")) @[Decoupled.scala 315:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 315:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 315:14]

  module DedupSubModule_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, out : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}}

    inst io_out_q of Queue_1 @[Decoupled.scala 361:21]
    io_out_q.clock <= clock
    io_out_q.reset <= reset
    io_out_q.io.enq.valid <= io.in.valid @[Decoupled.scala 363:22]
    io_out_q.io.enq.bits <= io.in.bits @[Decoupled.scala 364:21]
    io.in.ready <= io_out_q.io.enq.ready @[Decoupled.scala 365:17]
    io.out.bits <= io_out_q.io.deq.bits @[DedupSpec.scala 32:10]
    io.out.valid <= io_out_q.io.deq.valid @[DedupSpec.scala 32:10]
    io_out_q.io.deq.ready <= io.out.ready @[DedupSpec.scala 32:10]

  module NestedDedup :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}, out : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<32>}}

    inst inst0 of DedupSubModule @[DedupSpec.scala 37:21]
    inst0.clock <= clock
    inst0.reset <= reset
    inst inst1 of DedupSubModule_1 @[DedupSpec.scala 38:21]
    inst1.clock <= clock
    inst1.reset <= reset
    inst0.io.in <= io.in @[DedupSpec.scala 39:15]
    inst1.io.in <= inst0.io.out @[DedupSpec.scala 40:15]
    io.out.bits <= inst1.io.out.bits @[DedupSpec.scala 41:10]
    io.out.valid <= inst1.io.out.valid @[DedupSpec.scala 41:10]
    inst1.io.out.ready <= io.out.ready @[DedupSpec.scala 41:10]

