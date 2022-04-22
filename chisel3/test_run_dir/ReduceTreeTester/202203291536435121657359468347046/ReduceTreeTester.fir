circuit ReduceTreeTester :
  module Foo :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<5>}[5], out : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<5>}}

    io.in[0].ready <= UInt<1>("h1") @[Vec.scala 329:15]
    io.in[1].ready <= UInt<1>("h1") @[Vec.scala 330:15]
    wire io_out_out : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<5>} @[Vec.scala 331:21]
    io_out_out.valid <= UInt<1>("h1") @[Vec.scala 333:17]
    reg io_out_regSel : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Vec.scala 335:27]
    node _io_out_out_bits_T = mux(io_out_regSel, io.in[0].bits, io.in[1].bits) @[Vec.scala 336:22]
    io_out_out.bits <= _io_out_out_bits_T @[Vec.scala 336:16]
    io_out_out.ready <= io.in[0].ready @[Vec.scala 337:17]
    io.in[2].ready <= UInt<1>("h1") @[Vec.scala 329:15]
    io.in[3].ready <= UInt<1>("h1") @[Vec.scala 330:15]
    wire io_out_out_1 : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<5>} @[Vec.scala 331:21]
    io_out_out_1.valid <= UInt<1>("h1") @[Vec.scala 333:17]
    reg io_out_regSel_1 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Vec.scala 335:27]
    node _io_out_out_bits_T_1 = mux(io_out_regSel_1, io.in[2].bits, io.in[3].bits) @[Vec.scala 336:22]
    io_out_out_1.bits <= _io_out_out_bits_T_1 @[Vec.scala 336:16]
    io_out_out_1.ready <= io.in[2].ready @[Vec.scala 337:17]
    io_out_out.ready <= UInt<1>("h1") @[Vec.scala 329:15]
    io_out_out_1.ready <= UInt<1>("h1") @[Vec.scala 330:15]
    wire io_out_out_2 : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<5>} @[Vec.scala 331:21]
    io_out_out_2.valid <= UInt<1>("h1") @[Vec.scala 333:17]
    reg io_out_regSel_2 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Vec.scala 335:27]
    node _io_out_out_bits_T_2 = mux(io_out_regSel_2, io_out_out.bits, io_out_out_1.bits) @[Vec.scala 336:22]
    io_out_out_2.bits <= _io_out_out_bits_T_2 @[Vec.scala 336:16]
    io_out_out_2.ready <= io_out_out.ready @[Vec.scala 337:17]
    io_out_out_2.ready <= UInt<1>("h1") @[Vec.scala 329:15]
    io.in[4].ready <= UInt<1>("h1") @[Vec.scala 330:15]
    wire io_out_out_3 : { flip ready : UInt<1>, valid : UInt<1>, bits : UInt<5>} @[Vec.scala 331:21]
    io_out_out_3.valid <= UInt<1>("h1") @[Vec.scala 333:17]
    reg io_out_regSel_3 : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Vec.scala 335:27]
    node _io_out_out_bits_T_3 = mux(io_out_regSel_3, io_out_out_2.bits, io.in[4].bits) @[Vec.scala 336:22]
    io_out_out_3.bits <= _io_out_out_bits_T_3 @[Vec.scala 336:16]
    io_out_out_3.ready <= io_out_out_2.ready @[Vec.scala 337:17]
    io.out <= io_out_out_3 @[Vec.scala 341:12]

  module ReduceTreeTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of Foo @[Vec.scala 344:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.out.bits is invalid @[Vec.scala 345:10]
    dut.io.out.valid is invalid @[Vec.scala 345:10]
    dut.io.out.ready is invalid @[Vec.scala 345:10]
    dut.io.in[0].bits is invalid @[Vec.scala 345:10]
    dut.io.in[0].valid is invalid @[Vec.scala 345:10]
    dut.io.in[0].ready is invalid @[Vec.scala 345:10]
    dut.io.in[1].bits is invalid @[Vec.scala 345:10]
    dut.io.in[1].valid is invalid @[Vec.scala 345:10]
    dut.io.in[1].ready is invalid @[Vec.scala 345:10]
    dut.io.in[2].bits is invalid @[Vec.scala 345:10]
    dut.io.in[2].valid is invalid @[Vec.scala 345:10]
    dut.io.in[2].ready is invalid @[Vec.scala 345:10]
    dut.io.in[3].bits is invalid @[Vec.scala 345:10]
    dut.io.in[3].valid is invalid @[Vec.scala 345:10]
    dut.io.in[3].ready is invalid @[Vec.scala 345:10]
    dut.io.in[4].bits is invalid @[Vec.scala 345:10]
    dut.io.in[4].valid is invalid @[Vec.scala 345:10]
    dut.io.in[4].ready is invalid @[Vec.scala 345:10]
    node _T = bits(reset, 0, 0) @[Vec.scala 346:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Vec.scala 346:7]
    when _T_1 : @[Vec.scala 346:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 346:7]
