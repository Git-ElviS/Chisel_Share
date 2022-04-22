circuit MixedVecConnectWithSeqTester :
  module MixedVecIOPassthroughModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { 2 : UInt<8>, 1 : UInt<8>, 0 : UInt<8>}, out : { 2 : UInt<8>, 1 : UInt<8>, 0 : UInt<8>}}

    io.out.0 <= io.in.0 @[MixedVec.scala 117:9]
    io.out.1 <= io.in.1 @[MixedVec.scala 117:9]
    io.out.2 <= io.in.2 @[MixedVec.scala 117:9]

  module MixedVecConnectWithSeqTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst m of MixedVecIOPassthroughModule @[MixedVecSpec.scala 131:17]
    m.clock <= clock
    m.reset <= reset
    m.io.in.0 <= UInt<5>("h14") @[MixedVec.scala 117:9]
    m.io.in.1 <= UInt<6>("h28") @[MixedVec.scala 117:9]
    m.io.in.2 <= UInt<7>("h50") @[MixedVec.scala 117:9]
    node _T = eq(m.io.out.0, UInt<5>("h14")) @[MixedVecSpec.scala 135:18]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 135:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[MixedVecSpec.scala 135:9]
    when _T_2 : @[MixedVecSpec.scala 135:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MixedVecSpec.scala 135:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[MixedVecSpec.scala 135:9]
      when _T_3 : @[MixedVecSpec.scala 135:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:135 assert(wire(0) === 20.U)\n") : printf @[MixedVecSpec.scala 135:9]
    node _T_4 = eq(m.io.out.1, UInt<6>("h28")) @[MixedVecSpec.scala 136:18]
    node _T_5 = bits(reset, 0, 0) @[MixedVecSpec.scala 136:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[MixedVecSpec.scala 136:9]
    when _T_6 : @[MixedVecSpec.scala 136:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[MixedVecSpec.scala 136:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[MixedVecSpec.scala 136:9]
      when _T_7 : @[MixedVecSpec.scala 136:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:136 assert(wire(1) === 40.U)\n") : printf_1 @[MixedVecSpec.scala 136:9]
    node _T_8 = eq(m.io.out.2, UInt<7>("h50")) @[MixedVecSpec.scala 137:18]
    node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 137:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[MixedVecSpec.scala 137:9]
    when _T_10 : @[MixedVecSpec.scala 137:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[MixedVecSpec.scala 137:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[MixedVecSpec.scala 137:9]
      when _T_11 : @[MixedVecSpec.scala 137:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:137 assert(wire(2) === 80.U)\n") : printf_2 @[MixedVecSpec.scala 137:9]
    node _T_12 = bits(reset, 0, 0) @[MixedVecSpec.scala 139:7]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[MixedVecSpec.scala 139:7]
    when _T_13 : @[MixedVecSpec.scala 139:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[MixedVecSpec.scala 139:7]
