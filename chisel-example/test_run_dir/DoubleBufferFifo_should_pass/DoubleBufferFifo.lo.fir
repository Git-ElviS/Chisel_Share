circuit DoubleBufferFifo :
  module DoubleBuffer :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<16>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<16>

    reg stateReg : UInt<2>, clock with :
      reset => (UInt<1>("h0"), stateReg) @[DoubleBufferFifo.scala 17:27]
    reg dataReg : UInt<16>, clock with :
      reset => (UInt<1>("h0"), dataReg) @[DoubleBufferFifo.scala 18:22]
    reg shadowReg : UInt<16>, clock with :
      reset => (UInt<1>("h0"), shadowReg) @[DoubleBufferFifo.scala 19:24]
    node _T = eq(UInt<2>("h0"), stateReg) @[DoubleBufferFifo.scala 21:22]
    node _GEN_0 = mux(io_enq_valid, UInt<2>("h1"), stateReg) @[DoubleBufferFifo.scala 23:29 24:20 17:27]
    node _GEN_1 = mux(io_enq_valid, io_enq_bits, dataReg) @[DoubleBufferFifo.scala 23:29 25:19 18:22]
    node _T_1 = eq(UInt<2>("h1"), stateReg) @[DoubleBufferFifo.scala 21:22]
    node _T_2 = eq(io_enq_valid, UInt<1>("h0")) @[DoubleBufferFifo.scala 29:31]
    node _T_3 = and(io_deq_ready, _T_2) @[DoubleBufferFifo.scala 29:28]
    node _GEN_2 = mux(_T_3, UInt<2>("h0"), stateReg) @[DoubleBufferFifo.scala 29:46 30:20 17:27]
    node _T_4 = and(io_deq_ready, io_enq_valid) @[DoubleBufferFifo.scala 32:28]
    node _GEN_3 = mux(_T_4, UInt<2>("h1"), _GEN_2) @[DoubleBufferFifo.scala 32:45 33:20]
    node _GEN_4 = mux(_T_4, io_enq_bits, dataReg) @[DoubleBufferFifo.scala 32:45 34:19 18:22]
    node _T_5 = eq(io_deq_ready, UInt<1>("h0")) @[DoubleBufferFifo.scala 36:15]
    node _T_6 = and(_T_5, io_enq_valid) @[DoubleBufferFifo.scala 36:29]
    node _GEN_5 = mux(_T_6, UInt<2>("h2"), _GEN_3) @[DoubleBufferFifo.scala 36:46 37:20]
    node _GEN_6 = mux(_T_6, io_enq_bits, shadowReg) @[DoubleBufferFifo.scala 36:46 38:21 19:24]
    node _T_7 = eq(UInt<2>("h2"), stateReg) @[DoubleBufferFifo.scala 21:22]
    node _GEN_7 = mux(io_deq_ready, shadowReg, dataReg) @[DoubleBufferFifo.scala 42:29 43:19 18:22]
    node _GEN_8 = mux(io_deq_ready, UInt<2>("h1"), stateReg) @[DoubleBufferFifo.scala 42:29 44:20 17:27]
    node _GEN_9 = mux(_T_7, _GEN_7, dataReg) @[DoubleBufferFifo.scala 18:22 21:22]
    node _GEN_10 = mux(_T_7, _GEN_8, stateReg) @[DoubleBufferFifo.scala 21:22 17:27]
    node _GEN_11 = mux(_T_1, _GEN_5, _GEN_10) @[DoubleBufferFifo.scala 21:22]
    node _GEN_12 = mux(_T_1, _GEN_4, _GEN_9) @[DoubleBufferFifo.scala 21:22]
    node _GEN_13 = mux(_T_1, _GEN_6, shadowReg) @[DoubleBufferFifo.scala 21:22 19:24]
    node _GEN_14 = mux(_T, _GEN_0, _GEN_11) @[DoubleBufferFifo.scala 21:22]
    node _GEN_15 = mux(_T, _GEN_1, _GEN_12) @[DoubleBufferFifo.scala 21:22]
    node _GEN_16 = mux(_T, shadowReg, _GEN_13) @[DoubleBufferFifo.scala 21:22 19:24]
    node _io_enq_ready_T = eq(stateReg, UInt<2>("h0")) @[DoubleBufferFifo.scala 50:31]
    node _io_enq_ready_T_1 = eq(stateReg, UInt<2>("h1")) @[DoubleBufferFifo.scala 50:53]
    node _io_enq_ready_T_2 = or(_io_enq_ready_T, _io_enq_ready_T_1) @[DoubleBufferFifo.scala 50:41]
    node _io_deq_valid_T = eq(stateReg, UInt<2>("h1")) @[DoubleBufferFifo.scala 51:31]
    node _io_deq_valid_T_1 = eq(stateReg, UInt<2>("h2")) @[DoubleBufferFifo.scala 51:51]
    node _io_deq_valid_T_2 = or(_io_deq_valid_T, _io_deq_valid_T_1) @[DoubleBufferFifo.scala 51:39]
    io_enq_ready <= _io_enq_ready_T_2 @[DoubleBufferFifo.scala 50:18]
    io_deq_valid <= _io_deq_valid_T_2 @[DoubleBufferFifo.scala 51:18]
    io_deq_bits <= dataReg @[DoubleBufferFifo.scala 52:17]
    stateReg <= mux(reset, UInt<2>("h0"), _GEN_14) @[DoubleBufferFifo.scala 17:{27,27}]
    dataReg <= _GEN_15
    shadowReg <= _GEN_16

  module DoubleBufferFifo :
    input clock : Clock
    input reset : UInt<1>
    output io_enq_ready : UInt<1>
    input io_enq_valid : UInt<1>
    input io_enq_bits : UInt<16>
    input io_deq_ready : UInt<1>
    output io_deq_valid : UInt<1>
    output io_deq_bits : UInt<16>

    inst DoubleBuffer of DoubleBuffer @[DoubleBufferFifo.scala 55:57]
    inst DoubleBuffer_1 of DoubleBuffer @[DoubleBufferFifo.scala 55:57]
    io_enq_ready <= DoubleBuffer.io_enq_ready @[DoubleBufferFifo.scala 60:10]
    io_deq_valid <= DoubleBuffer_1.io_deq_valid @[DoubleBufferFifo.scala 61:10]
    io_deq_bits <= DoubleBuffer_1.io_deq_bits @[DoubleBufferFifo.scala 61:10]
    DoubleBuffer.clock <= clock
    DoubleBuffer.reset <= reset
    DoubleBuffer.io_enq_valid <= io_enq_valid @[DoubleBufferFifo.scala 60:10]
    DoubleBuffer.io_enq_bits <= io_enq_bits @[DoubleBufferFifo.scala 60:10]
    DoubleBuffer.io_deq_ready <= DoubleBuffer_1.io_enq_ready @[DoubleBufferFifo.scala 58:27]
    DoubleBuffer_1.clock <= clock
    DoubleBuffer_1.reset <= reset
    DoubleBuffer_1.io_enq_valid <= DoubleBuffer.io_deq_valid @[DoubleBufferFifo.scala 58:27]
    DoubleBuffer_1.io_enq_bits <= DoubleBuffer.io_deq_bits @[DoubleBufferFifo.scala 58:27]
    DoubleBuffer_1.io_deq_ready <= io_deq_ready @[DoubleBufferFifo.scala 61:10]
