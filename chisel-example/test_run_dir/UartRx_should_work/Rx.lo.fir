circuit Rx :
  module Rx :
    input clock : Clock
    input reset : UInt<1>
    input io_rxd : UInt<1>
    input io_channel_ready : UInt<1>
    output io_channel_valid : UInt<1>
    output io_channel_bits : UInt<8>

    reg rxReg_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), rxReg_REG) @[Uart.scala 75:30]
    reg rxReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), rxReg) @[Uart.scala 75:22]
    reg shiftReg : UInt<8>, clock with :
      reset => (UInt<1>("h0"), shiftReg) @[Uart.scala 77:25]
    reg cntReg : UInt<20>, clock with :
      reset => (UInt<1>("h0"), cntReg) @[Uart.scala 78:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (UInt<1>("h0"), bitsReg) @[Uart.scala 79:24]
    reg valReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), valReg) @[Uart.scala 80:23]
    node _T = neq(cntReg, UInt<1>("h0")) @[Uart.scala 82:15]
    node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Uart.scala 83:22]
    node _cntReg_T_1 = tail(_cntReg_T, 1) @[Uart.scala 83:22]
    node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Uart.scala 84:22]
    node _shiftReg_T = shr(shiftReg, 1) @[Uart.scala 86:37]
    node _shiftReg_T_1 = cat(rxReg, _shiftReg_T) @[Cat.scala 31:58]
    node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Uart.scala 87:24]
    node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Uart.scala 87:24]
    node _T_2 = eq(bitsReg, UInt<1>("h1")) @[Uart.scala 89:18]
    node _GEN_0 = mux(_T_2, UInt<1>("h1"), valReg) @[Uart.scala 89:27 90:14 80:23]
    node _T_3 = eq(rxReg, UInt<1>("h0")) @[Uart.scala 92:20]
    node _GEN_1 = mux(_T_3, UInt<3>("h4"), cntReg) @[Uart.scala 92:29 93:12 78:23]
    node _GEN_2 = mux(_T_3, UInt<4>("h8"), bitsReg) @[Uart.scala 92:29 94:13 79:24]
    node _GEN_3 = mux(_T_1, UInt<2>("h2"), _GEN_1) @[Uart.scala 84:31 85:12]
    node _GEN_4 = mux(_T_1, _shiftReg_T_1, shiftReg) @[Uart.scala 84:31 86:14 77:25]
    node _GEN_5 = mux(_T_1, _bitsReg_T_1, _GEN_2) @[Uart.scala 84:31 87:13]
    node _GEN_6 = mux(_T_1, _GEN_0, valReg) @[Uart.scala 80:23 84:31]
    node _GEN_7 = mux(_T, _cntReg_T_1, _GEN_3) @[Uart.scala 82:24 83:12]
    node _GEN_8 = mux(_T, shiftReg, _GEN_4) @[Uart.scala 82:24 77:25]
    node _GEN_9 = mux(_T, bitsReg, _GEN_5) @[Uart.scala 79:24 82:24]
    node _GEN_10 = mux(_T, valReg, _GEN_6) @[Uart.scala 80:23 82:24]
    node _T_4 = and(valReg, io_channel_ready) @[Uart.scala 97:15]
    node _GEN_11 = mux(_T_4, UInt<1>("h0"), _GEN_10) @[Uart.scala 97:36 98:12]
    io_channel_valid <= valReg @[Uart.scala 102:20]
    io_channel_bits <= shiftReg @[Uart.scala 101:19]
    rxReg_REG <= mux(reset, UInt<1>("h1"), io_rxd) @[Uart.scala 75:{30,30,30}]
    rxReg <= mux(reset, UInt<1>("h1"), rxReg_REG) @[Uart.scala 75:{22,22,22}]
    shiftReg <= mux(reset, UInt<8>("h0"), _GEN_8) @[Uart.scala 77:{25,25}]
    cntReg <= mux(reset, UInt<20>("h0"), _GEN_7) @[Uart.scala 78:{23,23}]
    bitsReg <= mux(reset, UInt<4>("h0"), _GEN_9) @[Uart.scala 79:{24,24}]
    valReg <= mux(reset, UInt<1>("h0"), _GEN_11) @[Uart.scala 80:{23,23}]
