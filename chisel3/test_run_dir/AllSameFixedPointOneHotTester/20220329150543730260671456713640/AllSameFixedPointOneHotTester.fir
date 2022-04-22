circuit AllSameFixedPointOneHotTester :
  module AllSameFixedPointOneHotTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire out : Fixed<12><<3>> @[OneHotMuxSpec.scala 106:17]
    node _out_T = asUInt(asFixedPoint(UInt<12>("hff4"), 3)) @[Mux.scala 27:73]
    node _out_T_1 = mux(UInt<1>("h0"), _out_T, UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_2 = asUInt(asFixedPoint(UInt<12>("hfee"), 3)) @[Mux.scala 27:73]
    node _out_T_3 = mux(UInt<1>("h1"), _out_T_2, UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_4 = asUInt(asFixedPoint(UInt<12>("hfdf"), 3)) @[Mux.scala 27:73]
    node _out_T_5 = mux(UInt<1>("h0"), _out_T_4, UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_6 = asUInt(asFixedPoint(UInt<12>("hfa3"), 3)) @[Mux.scala 27:73]
    node _out_T_7 = mux(UInt<1>("h0"), _out_T_6, UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_8 = or(_out_T_1, _out_T_3) @[Mux.scala 27:73]
    node _out_T_9 = or(_out_T_8, _out_T_5) @[Mux.scala 27:73]
    node _out_T_10 = or(_out_T_9, _out_T_7) @[Mux.scala 27:73]
    wire _out_WIRE : Fixed<12><<3>> @[Mux.scala 27:73]
    node _out_T_11 = asFixedPoint(_out_T_10, 3) @[Mux.scala 27:73]
    _out_WIRE <= _out_T_11 @[Mux.scala 27:73]
    out <= _out_WIRE @[OneHotMuxSpec.scala 108:7]
    node _T = eq(out, asFixedPoint(UInt<14>("h3fdc"), 4)) @[OneHotMuxSpec.scala 117:14]
    node _T_1 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 117:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[OneHotMuxSpec.scala 117:9]
    when _T_2 : @[OneHotMuxSpec.scala 117:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[OneHotMuxSpec.scala 117:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[OneHotMuxSpec.scala 117:9]
      when _T_3 : @[OneHotMuxSpec.scala 117:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at OneHotMuxSpec.scala:117 assert(out === (-2.25).F(14.W, 4.BP))\n") : printf @[OneHotMuxSpec.scala 117:9]
    node _T_4 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 119:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[OneHotMuxSpec.scala 119:7]
    when _T_5 : @[OneHotMuxSpec.scala 119:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[OneHotMuxSpec.scala 119:7]
