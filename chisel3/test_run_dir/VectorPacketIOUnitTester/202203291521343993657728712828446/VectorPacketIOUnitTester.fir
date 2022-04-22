circuit VectorPacketIOUnitTester :
  module BrokenVectorPacketModule :
    input clock : Clock
    input reset : Reset
    output io : { flip ins : { flip ready : UInt<1>, valid : UInt<1>, bits : { header : UInt<1>}}[4], outs : { flip ready : UInt<1>, valid : UInt<1>, bits : { header : UInt<1>}}[4]}

    io.outs[0] <= io.ins[0] @[VectorPacketIO.scala 45:16]
    io.outs[1] <= io.ins[1] @[VectorPacketIO.scala 45:16]
    io.outs[2] <= io.ins[2] @[VectorPacketIO.scala 45:16]
    io.outs[3] <= io.ins[3] @[VectorPacketIO.scala 45:16]
    io.ins[0].ready <= UInt<1>("h0") @[Decoupled.scala 88:20]
    io.ins[1].ready <= UInt<1>("h0") @[Decoupled.scala 88:20]
    io.ins[2].ready <= UInt<1>("h0") @[Decoupled.scala 88:20]
    io.ins[3].ready <= UInt<1>("h0") @[Decoupled.scala 88:20]
    io.outs[0].valid <= UInt<1>("h0") @[Decoupled.scala 72:20]
    io.outs[0].bits.header is invalid @[Decoupled.scala 73:19]
    io.outs[1].valid <= UInt<1>("h0") @[Decoupled.scala 72:20]
    io.outs[1].bits.header is invalid @[Decoupled.scala 73:19]
    io.outs[2].valid <= UInt<1>("h0") @[Decoupled.scala 72:20]
    io.outs[2].bits.header is invalid @[Decoupled.scala 73:19]
    io.outs[3].valid <= UInt<1>("h0") @[Decoupled.scala 72:20]
    io.outs[3].bits.header is invalid @[Decoupled.scala 73:19]

  module VectorPacketIOUnitTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of BrokenVectorPacketModule @[VectorPacketIO.scala 54:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.outs[0].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[0].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[0].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[1].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[1].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[1].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[2].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[2].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[2].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[3].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[3].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[3].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[0].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[0].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[0].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[1].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[1].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[1].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[2].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[2].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[2].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[3].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[3].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[3].ready is invalid @[VectorPacketIO.scala 55:10]
    wire value : UInt
    value <= UInt<1>("h0")
    when UInt<1>("h1") : @[VectorPacketIO.scala 59:17]
      node _T = bits(reset, 0, 0) @[VectorPacketIO.scala 60:9]
      node _T_1 = eq(_T, UInt<1>("h0")) @[VectorPacketIO.scala 60:9]
      when _T_1 : @[VectorPacketIO.scala 60:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[VectorPacketIO.scala 60:9]
