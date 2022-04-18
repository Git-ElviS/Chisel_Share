circuit Sender :
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

  module Buffer :
    input clock : Clock
    input reset : UInt<1>
    output io_in_ready : UInt<1>
    input io_in_valid : UInt<1>
    input io_in_bits : UInt<8>
    input io_out_ready : UInt<1>
    output io_out_valid : UInt<1>
    output io_out_bits : UInt<8>

    reg stateReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), stateReg) @[Uart.scala 115:25]
    reg dataReg : UInt<8>, clock with :
      reset => (UInt<1>("h0"), dataReg) @[Uart.scala 116:24]
    node _io_in_ready_T = eq(stateReg, UInt<1>("h0")) @[Uart.scala 118:27]
    node _io_out_valid_T = eq(stateReg, UInt<1>("h1")) @[Uart.scala 119:28]
    node _T = eq(stateReg, UInt<1>("h0")) @[Uart.scala 121:17]
    node _GEN_0 = mux(io_in_valid, io_in_bits, dataReg) @[Uart.scala 122:23 123:15 116:24]
    node _GEN_1 = mux(io_in_valid, UInt<1>("h1"), stateReg) @[Uart.scala 122:23 124:16 115:25]
    node _GEN_2 = mux(io_out_ready, UInt<1>("h0"), stateReg) @[Uart.scala 127:24 128:16 115:25]
    node _GEN_3 = mux(_T, _GEN_0, dataReg) @[Uart.scala 116:24 121:28]
    node _GEN_4 = mux(_T, _GEN_1, _GEN_2) @[Uart.scala 121:28]
    io_in_ready <= _io_in_ready_T @[Uart.scala 118:15]
    io_out_valid <= _io_out_valid_T @[Uart.scala 119:16]
    io_out_bits <= dataReg @[Uart.scala 131:15]
    stateReg <= mux(reset, UInt<1>("h0"), _GEN_4) @[Uart.scala 115:{25,25}]
    dataReg <= mux(reset, UInt<8>("h0"), _GEN_3) @[Uart.scala 116:{24,24}]

  module BufferedTx :
    input clock : Clock
    input reset : UInt<1>
    output io_txd : UInt<1>
    output io_channel_ready : UInt<1>
    input io_channel_valid : UInt<1>
    input io_channel_bits : UInt<8>

    inst tx of Tx @[Uart.scala 142:18]
    inst buf of Buffer @[Uart.scala 143:19]
    io_txd <= tx.io_txd @[Uart.scala 147:10]
    io_channel_ready <= buf.io_in_ready @[Uart.scala 145:13]
    tx.clock <= clock
    tx.reset <= reset
    tx.io_channel_valid <= buf.io_out_valid @[Uart.scala 146:17]
    tx.io_channel_bits <= buf.io_out_bits @[Uart.scala 146:17]
    buf.clock <= clock
    buf.reset <= reset
    buf.io_in_valid <= io_channel_valid @[Uart.scala 145:13]
    buf.io_in_bits <= io_channel_bits @[Uart.scala 145:13]
    buf.io_out_ready <= tx.io_channel_ready @[Uart.scala 146:17]

  module Sender :
    input clock : Clock
    input reset : UInt<1>
    output io_txd : UInt<1>

    inst tx of BufferedTx @[Uart.scala 158:18]
    reg cntReg : UInt<8>, clock with :
      reset => (UInt<1>("h0"), cntReg) @[Uart.scala 166:23]
    node _tx_io_channel_bits_T = bits(cntReg, 3, 0)
    node text_0 = UInt<7>("h48") @[Uart.scala 163:{21,21}]
    node _GEN_0 = validif(eq(UInt<1>("h0"), _tx_io_channel_bits_T), text_0) @[Uart.scala 168:{22,22}]
    node text_1 = UInt<7>("h65") @[Uart.scala 163:{21,21}]
    node _GEN_1 = mux(eq(UInt<1>("h1"), _tx_io_channel_bits_T), text_1, _GEN_0) @[Uart.scala 168:{22,22}]
    node text_2 = UInt<7>("h6c") @[Uart.scala 163:{21,21}]
    node _GEN_2 = mux(eq(UInt<2>("h2"), _tx_io_channel_bits_T), text_2, _GEN_1) @[Uart.scala 168:{22,22}]
    node text_3 = UInt<7>("h6c") @[Uart.scala 163:{21,21}]
    node _GEN_3 = mux(eq(UInt<2>("h3"), _tx_io_channel_bits_T), text_3, _GEN_2) @[Uart.scala 168:{22,22}]
    node text_4 = UInt<7>("h6f") @[Uart.scala 163:{21,21}]
    node _GEN_4 = mux(eq(UInt<3>("h4"), _tx_io_channel_bits_T), text_4, _GEN_3) @[Uart.scala 168:{22,22}]
    node text_5 = UInt<7>("h20") @[Uart.scala 163:{21,21}]
    node _GEN_5 = mux(eq(UInt<3>("h5"), _tx_io_channel_bits_T), text_5, _GEN_4) @[Uart.scala 168:{22,22}]
    node text_6 = UInt<7>("h57") @[Uart.scala 163:{21,21}]
    node _GEN_6 = mux(eq(UInt<3>("h6"), _tx_io_channel_bits_T), text_6, _GEN_5) @[Uart.scala 168:{22,22}]
    node text_7 = UInt<7>("h6f") @[Uart.scala 163:{21,21}]
    node _GEN_7 = mux(eq(UInt<3>("h7"), _tx_io_channel_bits_T), text_7, _GEN_6) @[Uart.scala 168:{22,22}]
    node text_8 = UInt<7>("h72") @[Uart.scala 163:{21,21}]
    node _GEN_8 = mux(eq(UInt<4>("h8"), _tx_io_channel_bits_T), text_8, _GEN_7) @[Uart.scala 168:{22,22}]
    node text_9 = UInt<7>("h6c") @[Uart.scala 163:{21,21}]
    node _GEN_9 = mux(eq(UInt<4>("h9"), _tx_io_channel_bits_T), text_9, _GEN_8) @[Uart.scala 168:{22,22}]
    node text_10 = UInt<7>("h64") @[Uart.scala 163:{21,21}]
    node _GEN_10 = mux(eq(UInt<4>("ha"), _tx_io_channel_bits_T), text_10, _GEN_9) @[Uart.scala 168:{22,22}]
    node text_11 = UInt<7>("h21") @[Uart.scala 163:{21,21}]
    node _GEN_11 = mux(eq(UInt<4>("hb"), _tx_io_channel_bits_T), text_11, _GEN_10) @[Uart.scala 168:{22,22}]
    node _tx_io_channel_valid_T = neq(cntReg, UInt<4>("hc")) @[Uart.scala 169:33]
    node _T = neq(cntReg, UInt<4>("hc")) @[Uart.scala 171:38]
    node _T_1 = and(tx.io_channel_ready, _T) @[Uart.scala 171:28]
    node _cntReg_T = add(cntReg, UInt<1>("h1")) @[Uart.scala 172:22]
    node _cntReg_T_1 = tail(_cntReg_T, 1) @[Uart.scala 172:22]
    node _GEN_12 = mux(_T_1, _cntReg_T_1, cntReg) @[Uart.scala 171:47 172:12 166:23]
    node _text_tx_io_channel_bits_T = _GEN_11 @[Uart.scala 168:22]
    io_txd <= tx.io_txd @[Uart.scala 160:10]
    tx.clock <= clock
    tx.reset <= reset
    tx.io_channel_valid <= _tx_io_channel_valid_T @[Uart.scala 169:23]
    tx.io_channel_bits <= pad(_text_tx_io_channel_bits_T, 8) @[Uart.scala 168:22]
    cntReg <= mux(reset, UInt<8>("h0"), _GEN_12) @[Uart.scala 166:{23,23}]
