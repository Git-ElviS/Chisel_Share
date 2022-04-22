circuit DecoderTester :
  module Decoder :
    input clock : Clock
    input reset : Reset
    output io : { flip inst : UInt<32>, matched : UInt<1>}

    node _io_matched_T = and(io.inst, UInt<31>("h485203da")) @[Decoder.scala 16:47]
    node _io_matched_T_1 = eq(UInt<31>("h40520190"), _io_matched_T) @[Decoder.scala 16:47]
    node _io_matched_T_2 = and(io.inst, UInt<32>("hbd864aff")) @[Decoder.scala 16:47]
    node _io_matched_T_3 = eq(UInt<32>("h91044a69"), _io_matched_T_2) @[Decoder.scala 16:47]
    node _io_matched_T_4 = and(io.inst, UInt<30>("h3867dea2")) @[Decoder.scala 16:47]
    node _io_matched_T_5 = eq(UInt<30>("h3064c200"), _io_matched_T_4) @[Decoder.scala 16:47]
    node _io_matched_T_6 = and(io.inst, UInt<29>("h1675aefa")) @[Decoder.scala 16:47]
    node _io_matched_T_7 = eq(UInt<29>("h1271ac70"), _io_matched_T_6) @[Decoder.scala 16:47]
    wire _io_matched_WIRE : UInt<1>[4] @[Decoder.scala 16:24]
    _io_matched_WIRE[0] <= _io_matched_T_1 @[Decoder.scala 16:24]
    _io_matched_WIRE[1] <= _io_matched_T_3 @[Decoder.scala 16:24]
    _io_matched_WIRE[2] <= _io_matched_T_5 @[Decoder.scala 16:24]
    _io_matched_WIRE[3] <= _io_matched_T_7 @[Decoder.scala 16:24]
    node _io_matched_T_8 = or(_io_matched_WIRE[0], _io_matched_WIRE[1]) @[Decoder.scala 16:70]
    node _io_matched_T_9 = or(_io_matched_T_8, _io_matched_WIRE[2]) @[Decoder.scala 16:70]
    node _io_matched_T_10 = or(_io_matched_T_9, _io_matched_WIRE[3]) @[Decoder.scala 16:70]
    io.matched <= _io_matched_T_10 @[Decoder.scala 16:14]

  module DecoderTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cnt, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _wrap_value_T_1 @[Counter.scala 78:15]
      wrap <= wrap_wrap @[Counter.scala 120:23]
    inst dut of Decoder @[Decoder.scala 22:19]
    dut.clock <= clock
    dut.reset <= reset
    wire _dut_io_inst_WIRE : UInt<32>[4] @[Decoder.scala 23:25]
    _dut_io_inst_WIRE[0] <= UInt<31>("h65539db4") @[Decoder.scala 23:25]
    _dut_io_inst_WIRE[1] <= UInt<32>("h936d7f69") @[Decoder.scala 23:25]
    _dut_io_inst_WIRE[2] <= UInt<31>("h746ce244") @[Decoder.scala 23:25]
    _dut_io_inst_WIRE[3] <= UInt<29>("h13fbac71") @[Decoder.scala 23:25]
    dut.io.inst <= _dut_io_inst_WIRE[cnt] @[Decoder.scala 23:15]
    node _T = eq(dut.io.matched, UInt<1>("h0")) @[Decoder.scala 24:8]
    when _T : @[Decoder.scala 24:25]
      node _T_1 = eq(cnt, UInt<1>("h0")) @[Decoder.scala 25:16]
      node _T_2 = bits(reset, 0, 0) @[Decoder.scala 25:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[Decoder.scala 25:11]
      when _T_3 : @[Decoder.scala 25:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[Decoder.scala 25:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[Decoder.scala 25:11]
        when _T_4 : @[Decoder.scala 25:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n") : printf @[Decoder.scala 25:11]
      node _T_5 = bits(reset, 0, 0) @[Decoder.scala 26:9]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[Decoder.scala 26:9]
      when _T_6 : @[Decoder.scala 26:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Decoder.scala 26:9]
    when wrap : @[Decoder.scala 28:14]
      node _T_7 = bits(reset, 0, 0) @[Decoder.scala 29:9]
      node _T_8 = eq(_T_7, UInt<1>("h0")) @[Decoder.scala 29:9]
      when _T_8 : @[Decoder.scala 29:9]
        stop(clock, UInt<1>("h1"), 0) : stop_1 @[Decoder.scala 29:9]
