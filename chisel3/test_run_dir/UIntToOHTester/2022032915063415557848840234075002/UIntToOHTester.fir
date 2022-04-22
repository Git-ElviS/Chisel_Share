circuit UIntToOHTester :
  module UIntToOHTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _out_shiftAmount_T = pad(UInt<1>("h1"), 2) @[OneHot.scala 63:31]
    node out_shiftAmount = bits(_out_shiftAmount_T, 1, 0) @[OneHot.scala 63:49]
    node _out_T = dshl(UInt<1>("h1"), out_shiftAmount) @[OneHot.scala 64:12]
    node out = bits(_out_T, 2, 0) @[OneHot.scala 64:27]
    node _T = eq(out, UInt<2>("h2")) @[OneHotMuxSpec.scala 311:14]
    node _T_1 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 311:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[OneHotMuxSpec.scala 311:9]
    when _T_2 : @[OneHotMuxSpec.scala 311:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[OneHotMuxSpec.scala 311:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[OneHotMuxSpec.scala 311:9]
      when _T_3 : @[OneHotMuxSpec.scala 311:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at OneHotMuxSpec.scala:311 assert(out === 2.U)\n") : printf @[OneHotMuxSpec.scala 311:9]
    node _T_4 = eq(UInt<1>("h1"), UInt<1>("h1")) @[OneHotMuxSpec.scala 315:15]
    node _T_5 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 315:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[OneHotMuxSpec.scala 315:9]
    when _T_6 : @[OneHotMuxSpec.scala 315:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[OneHotMuxSpec.scala 315:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[OneHotMuxSpec.scala 315:9]
      when _T_7 : @[OneHotMuxSpec.scala 315:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at OneHotMuxSpec.scala:315 assert(out2 === 1.U)\n") : printf_1 @[OneHotMuxSpec.scala 315:9]
    node _T_8 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 317:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[OneHotMuxSpec.scala 317:7]
    when _T_9 : @[OneHotMuxSpec.scala 317:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[OneHotMuxSpec.scala 317:7]
