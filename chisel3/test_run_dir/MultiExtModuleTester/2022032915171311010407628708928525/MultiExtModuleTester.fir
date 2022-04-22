circuit MultiExtModuleTester :
  extmodule BlackBoxInverter :
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxInverter

  extmodule BlackBoxInverter_1 :
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxInverter

  extmodule BlackBoxPassthrough :
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxPassthrough

  extmodule BlackBoxPassthrough_1 :
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxPassthrough

  module MultiExtModuleTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst blackBoxInvPos of BlackBoxInverter @[ExtModule.scala 45:30]
    blackBoxInvPos.in is invalid
    blackBoxInvPos.out is invalid
    inst blackBoxInvNeg of BlackBoxInverter_1 @[ExtModule.scala 46:30]
    blackBoxInvNeg.in is invalid
    blackBoxInvNeg.out is invalid
    inst blackBoxPassPos of BlackBoxPassthrough @[ExtModule.scala 47:31]
    blackBoxPassPos.in is invalid
    blackBoxPassPos.out is invalid
    inst blackBoxPassNeg of BlackBoxPassthrough_1 @[ExtModule.scala 48:31]
    blackBoxPassNeg.in is invalid
    blackBoxPassNeg.out is invalid
    blackBoxInvPos.in <= UInt<1>("h1") @[ExtModule.scala 50:21]
    blackBoxInvNeg.in <= UInt<1>("h0") @[ExtModule.scala 51:21]
    blackBoxPassPos.in <= UInt<1>("h1") @[ExtModule.scala 52:22]
    blackBoxPassNeg.in <= UInt<1>("h0") @[ExtModule.scala 53:22]
    node _T = eq(blackBoxInvNeg.out, UInt<1>("h1")) @[ExtModule.scala 55:29]
    node _T_1 = bits(reset, 0, 0) @[ExtModule.scala 55:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[ExtModule.scala 55:9]
    when _T_2 : @[ExtModule.scala 55:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[ExtModule.scala 55:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[ExtModule.scala 55:9]
      when _T_3 : @[ExtModule.scala 55:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ExtModule.scala:55 assert(blackBoxInvNeg.out === 1.U)\n") : printf @[ExtModule.scala 55:9]
    node _T_4 = eq(blackBoxInvPos.out, UInt<1>("h0")) @[ExtModule.scala 56:29]
    node _T_5 = bits(reset, 0, 0) @[ExtModule.scala 56:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[ExtModule.scala 56:9]
    when _T_6 : @[ExtModule.scala 56:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[ExtModule.scala 56:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[ExtModule.scala 56:9]
      when _T_7 : @[ExtModule.scala 56:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ExtModule.scala:56 assert(blackBoxInvPos.out === 0.U)\n") : printf_1 @[ExtModule.scala 56:9]
    node _T_8 = eq(blackBoxPassNeg.out, UInt<1>("h0")) @[ExtModule.scala 57:30]
    node _T_9 = bits(reset, 0, 0) @[ExtModule.scala 57:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[ExtModule.scala 57:9]
    when _T_10 : @[ExtModule.scala 57:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[ExtModule.scala 57:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[ExtModule.scala 57:9]
      when _T_11 : @[ExtModule.scala 57:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ExtModule.scala:57 assert(blackBoxPassNeg.out === 0.U)\n") : printf_2 @[ExtModule.scala 57:9]
    node _T_12 = eq(blackBoxPassPos.out, UInt<1>("h1")) @[ExtModule.scala 58:30]
    node _T_13 = bits(reset, 0, 0) @[ExtModule.scala 58:9]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[ExtModule.scala 58:9]
    when _T_14 : @[ExtModule.scala 58:9]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[ExtModule.scala 58:9]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[ExtModule.scala 58:9]
      when _T_15 : @[ExtModule.scala 58:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ExtModule.scala:58 assert(blackBoxPassPos.out === 1.U)\n") : printf_3 @[ExtModule.scala 58:9]
    node _T_16 = bits(reset, 0, 0) @[ExtModule.scala 59:7]
    node _T_17 = eq(_T_16, UInt<1>("h0")) @[ExtModule.scala 59:7]
    when _T_17 : @[ExtModule.scala 59:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[ExtModule.scala 59:7]
