circuit BubbleFifo :
  module Buffer :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<16>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<16>

    reg fullReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), fullReg) @[BubbleFifo.scala 14:26]
    reg dataReg : UInt<16>, clock with :
      reset => (UInt<1>("h0"), dataReg) @[BubbleFifo.scala 15:22]
    node _GEN_0 = mux(io_deq_ready, UInt<1>("h0"), fullReg) @[BubbleFifo.scala 18:27 19:17 14:26]
    node _GEN_1 = mux(io_enq_valid, UInt<1>("h1"), fullReg) @[BubbleFifo.scala 22:27 23:17 14:26]
    node _GEN_2 = mux(io_enq_valid, io_enq_bits, dataReg) @[BubbleFifo.scala 22:27 24:17 15:22]
    node _GEN_3 = mux(fullReg, _GEN_0, _GEN_1) @[BubbleFifo.scala 17:20]
    node _GEN_4 = mux(fullReg, dataReg, _GEN_2) @[BubbleFifo.scala 17:20 15:22]
    node _io_enq_ready_T = eq(fullReg, UInt<1>("h0")) @[BubbleFifo.scala 28:21]
    io_enq_ready <= _io_enq_ready_T @[BubbleFifo.scala 28:18]
    io_deq_valid <= fullReg @[BubbleFifo.scala 29:18]
    io_deq_bits <= dataReg @[BubbleFifo.scala 30:17]
    fullReg <= mux(reset, UInt<1>("h0"), _GEN_3) @[BubbleFifo.scala 14:{26,26}]
    dataReg <= _GEN_4

  module BubbleFifo :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<16>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<16>

    inst Buffer of Buffer @[BubbleFifo.scala 33:51]
    inst Buffer_1 of Buffer @[BubbleFifo.scala 33:51]
    inst Buffer_2 of Buffer @[BubbleFifo.scala 33:51]
    inst Buffer_3 of Buffer @[BubbleFifo.scala 33:51]
    io_enq_ready <= Buffer.io_enq_ready @[BubbleFifo.scala 38:10]
    io_deq_valid <= Buffer_3.io_deq_valid @[BubbleFifo.scala 39:10]
    io_deq_bits <= Buffer_3.io_deq_bits @[BubbleFifo.scala 39:10]
    Buffer.clock <= clock
    Buffer.reset <= reset
    Buffer.io_enq_valid <= io_enq_valid @[BubbleFifo.scala 38:10]
    Buffer.io_enq_bits <= io_enq_bits @[BubbleFifo.scala 38:10]
    Buffer.io_deq_ready <= Buffer_1.io_enq_ready @[BubbleFifo.scala 35:27]
    Buffer_1.clock <= clock
    Buffer_1.reset <= reset
    Buffer_1.io_enq_valid <= Buffer.io_deq_valid @[BubbleFifo.scala 35:27]
    Buffer_1.io_enq_bits <= Buffer.io_deq_bits @[BubbleFifo.scala 35:27]
    Buffer_1.io_deq_ready <= Buffer_2.io_enq_ready @[BubbleFifo.scala 35:27]
    Buffer_2.clock <= clock
    Buffer_2.reset <= reset
    Buffer_2.io_enq_valid <= Buffer_1.io_deq_valid @[BubbleFifo.scala 35:27]
    Buffer_2.io_enq_bits <= Buffer_1.io_deq_bits @[BubbleFifo.scala 35:27]
    Buffer_2.io_deq_ready <= Buffer_3.io_enq_ready @[BubbleFifo.scala 35:27]
    Buffer_3.clock <= clock
    Buffer_3.reset <= reset
    Buffer_3.io_enq_valid <= Buffer_2.io_deq_valid @[BubbleFifo.scala 35:27]
    Buffer_3.io_enq_bits <= Buffer_2.io_deq_bits @[BubbleFifo.scala 35:27]
    Buffer_3.io_deq_ready <= io_deq_ready @[BubbleFifo.scala 39:10]
