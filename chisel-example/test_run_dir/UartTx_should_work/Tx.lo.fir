circuit Tx :
  module Tx :
    input clock : Clock
    input reset : UInt<1>
    output io_txd : UInt<1>
    output io_channel_ready : UInt<1>
    input io_channel_valid : UInt<1>
    input io_channel_bits : UInt<8>

    reg shiftReg : UInt<11>, clock with :
      reset => (UInt<1>("h0"), shiftReg) @[Uart.scala 29:25]
    reg cntReg : UInt<20>, clock with :
      reset => (UInt<1>("h0"), cntReg) @[Uart.scala 30:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (UInt<1>("h0"), bitsReg) @[Uart.scala 31:24]
    node _io_channel_ready_T = eq(cntReg, UInt<1>("h0")) @[Uart.scala 33:31]
    node _io_channel_ready_T_1 = eq(bitsReg, UInt<1>("h0")) @[Uart.scala 33:52]
    node _io_channel_ready_T_2 = and(_io_channel_ready_T, _io_channel_ready_T_1) @[Uart.scala 33:40]
    node _io_txd_T = bits(shiftReg, 0, 0) @[Uart.scala 34:21]
    node _T = eq(cntReg, UInt<1>("h0")) @[Uart.scala 36:15]
    node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Uart.scala 39:18]
    node shift = shr(shiftReg, 1) @[Uart.scala 40:28]
    node _shiftReg_T = bits(shift, 9, 0) @[Uart.scala 41:33]
    node _shiftReg_T_1 = cat(UInt<1>("h1"), _shiftReg_T) @[Cat.scala 31:58]
    node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Uart.scala 42:26]
    node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Uart.scala 42:26]
    node _shiftReg_T_2 = cat(UInt<2>("h3"), io_channel_bits) @[Cat.scala 31:58]
    node _shiftReg_T_3 = cat(_shiftReg_T_2, UInt<1>("h0")) @[Cat.scala 31:58]
    node _GEN_0 = mux(io_channel_valid, _shiftReg_T_3, UInt<11>("h7ff")) @[Uart.scala 44:30 45:18 48:18]
    node _GEN_1 = mux(io_channel_valid, UInt<4>("hb"), bitsReg) @[Uart.scala 44:30 46:17 31:24]
    node _GEN_2 = mux(_T_1, _shiftReg_T_1, _GEN_0) @[Uart.scala 39:27 41:16]
    node _GEN_3 = mux(_T_1, _bitsReg_T_1, _GEN_1) @[Uart.scala 39:27 42:15]
    node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Uart.scala 53:22]
    node _cntReg_T_1 = tail(_cntReg_T, 1) @[Uart.scala 53:22]
    node _GEN_4 = mux(_T, UInt<2>("h2"), _cntReg_T_1) @[Uart.scala 36:24 38:12 53:12]
    node _GEN_5 = mux(_T, _GEN_2, shiftReg) @[Uart.scala 36:24 29:25]
    node _GEN_6 = mux(_T, _GEN_3, bitsReg) @[Uart.scala 31:24 36:24]
    io_txd <= _io_txd_T @[Uart.scala 34:10]
    io_channel_ready <= _io_channel_ready_T_2 @[Uart.scala 33:20]
    shiftReg <= mux(reset, UInt<11>("h7ff"), _GEN_5) @[Uart.scala 29:{25,25}]
    cntReg <= mux(reset, UInt<20>("h0"), _GEN_4) @[Uart.scala 30:{23,23}]
    bitsReg <= mux(reset, UInt<4>("h0"), _GEN_6) @[Uart.scala 31:{24,24}]
