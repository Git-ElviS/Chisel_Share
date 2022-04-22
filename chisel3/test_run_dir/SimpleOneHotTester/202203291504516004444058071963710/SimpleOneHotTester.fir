circuit SimpleOneHotTester :
  module SimpleOneHotTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire out : UInt @[OneHotMuxSpec.scala 57:17]
    node _out_T = mux(UInt<1>("h0"), UInt<2>("h2"), UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_1 = mux(UInt<1>("h0"), UInt<3>("h4"), UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_2 = mux(UInt<1>("h1"), UInt<4>("h8"), UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_3 = mux(UInt<1>("h0"), UInt<4>("hb"), UInt<1>("h0")) @[Mux.scala 27:73]
    node _out_T_4 = or(_out_T, _out_T_1) @[Mux.scala 27:73]
    node _out_T_5 = or(_out_T_4, _out_T_2) @[Mux.scala 27:73]
    node _out_T_6 = or(_out_T_5, _out_T_3) @[Mux.scala 27:73]
    wire _out_WIRE : UInt<4> @[Mux.scala 27:73]
    _out_WIRE <= _out_T_6 @[Mux.scala 27:73]
    out <= _out_WIRE @[OneHotMuxSpec.scala 58:7]
    node _T = eq(out, UInt<4>("h8")) @[OneHotMuxSpec.scala 67:14]
    node _T_1 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 67:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[OneHotMuxSpec.scala 67:9]
    when _T_2 : @[OneHotMuxSpec.scala 67:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[OneHotMuxSpec.scala 67:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[OneHotMuxSpec.scala 67:9]
      when _T_3 : @[OneHotMuxSpec.scala 67:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at OneHotMuxSpec.scala:67 assert(out === 8.U)\n") : printf @[OneHotMuxSpec.scala 67:9]
    node _T_4 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 69:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[OneHotMuxSpec.scala 69:7]
    when _T_5 : @[OneHotMuxSpec.scala 69:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[OneHotMuxSpec.scala 69:7]
