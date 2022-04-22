circuit MixedVecOneBitTester :
  module MixedVecOneBitTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg flag : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[MixedVecSpec.scala 143:21]
    reg oneBit : { 0 : UInt<1>}, clock with :
      reset => (UInt<1>("h0"), oneBit) @[MixedVecSpec.scala 145:19]
    node _T = eq(flag, UInt<1>("h0")) @[MixedVecSpec.scala 146:8]
    when _T : @[MixedVecSpec.scala 146:15]
      oneBit.0 <= UInt<1>("h1") @[MixedVecSpec.scala 147:15]
      flag <= UInt<1>("h1") @[MixedVecSpec.scala 148:10]
    else :
      node _T_1 = eq(oneBit.0, UInt<1>("h1")) @[MixedVecSpec.scala 150:22]
      node _T_2 = bits(reset, 0, 0) @[MixedVecSpec.scala 150:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[MixedVecSpec.scala 150:11]
      when _T_3 : @[MixedVecSpec.scala 150:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[MixedVecSpec.scala 150:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[MixedVecSpec.scala 150:11]
        when _T_4 : @[MixedVecSpec.scala 150:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:150 assert(oneBit(0) === 1.U)\n") : printf @[MixedVecSpec.scala 150:11]
      node _T_5 = eq(oneBit.0, UInt<1>("h1")) @[MixedVecSpec.scala 151:26]
      node _T_6 = bits(reset, 0, 0) @[MixedVecSpec.scala 151:11]
      node _T_7 = eq(_T_6, UInt<1>("h0")) @[MixedVecSpec.scala 151:11]
      when _T_7 : @[MixedVecSpec.scala 151:11]
        assert(clock, _T_5, UInt<1>("h1"), "") : assert_1 @[MixedVecSpec.scala 151:11]
        node _T_8 = eq(_T_5, UInt<1>("h0")) @[MixedVecSpec.scala 151:11]
        when _T_8 : @[MixedVecSpec.scala 151:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:151 assert(oneBit.asUInt === 1.U)\n") : printf_1 @[MixedVecSpec.scala 151:11]
      node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 152:9]
      node _T_10 = eq(_T_9, UInt<1>("h0")) @[MixedVecSpec.scala 152:9]
      when _T_10 : @[MixedVecSpec.scala 152:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[MixedVecSpec.scala 152:9]
