circuit BlackBoxTester :
  extmodule BlackBoxInverter :
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxInverter

  extmodule BlackBoxInverter_1 :
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxInverter

  module BlackBoxTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst blackBoxPos of BlackBoxInverter @[BlackBox.scala 52:27]
    blackBoxPos.out is invalid
    blackBoxPos.in is invalid
    inst blackBoxNeg of BlackBoxInverter_1 @[BlackBox.scala 53:27]
    blackBoxNeg.out is invalid
    blackBoxNeg.in is invalid
    blackBoxPos.in <= UInt<1>("h1") @[BlackBox.scala 55:21]
    blackBoxNeg.in <= UInt<1>("h0") @[BlackBox.scala 56:21]
    node _T = eq(blackBoxNeg.out, UInt<1>("h1")) @[BlackBox.scala 58:29]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 58:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BlackBox.scala 58:9]
    when _T_2 : @[BlackBox.scala 58:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BlackBox.scala 58:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BlackBox.scala 58:9]
      when _T_3 : @[BlackBox.scala 58:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:58 assert(blackBoxNeg.io.out === 1.U)\n") : printf @[BlackBox.scala 58:9]
    node _T_4 = eq(blackBoxPos.out, UInt<1>("h0")) @[BlackBox.scala 59:29]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 59:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BlackBox.scala 59:9]
    when _T_6 : @[BlackBox.scala 59:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BlackBox.scala 59:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BlackBox.scala 59:9]
      when _T_7 : @[BlackBox.scala 59:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:59 assert(blackBoxPos.io.out === 0.U)\n") : printf_1 @[BlackBox.scala 59:9]
    node _T_8 = bits(reset, 0, 0) @[BlackBox.scala 60:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[BlackBox.scala 60:7]
    when _T_9 : @[BlackBox.scala 60:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[BlackBox.scala 60:7]
