circuit MultiBlackBoxTester :
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

  module MultiBlackBoxTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst blackBoxInvPos of BlackBoxInverter @[BlackBox.scala 89:30]
    blackBoxInvPos.out is invalid
    blackBoxInvPos.in is invalid
    inst blackBoxInvNeg of BlackBoxInverter_1 @[BlackBox.scala 90:30]
    blackBoxInvNeg.out is invalid
    blackBoxInvNeg.in is invalid
    inst blackBoxPassPos of BlackBoxPassthrough @[BlackBox.scala 91:31]
    blackBoxPassPos.out is invalid
    blackBoxPassPos.in is invalid
    inst blackBoxPassNeg of BlackBoxPassthrough_1 @[BlackBox.scala 92:31]
    blackBoxPassNeg.out is invalid
    blackBoxPassNeg.in is invalid
    blackBoxInvPos.in <= UInt<1>("h1") @[BlackBox.scala 94:24]
    blackBoxInvNeg.in <= UInt<1>("h0") @[BlackBox.scala 95:24]
    blackBoxPassPos.in <= UInt<1>("h1") @[BlackBox.scala 96:25]
    blackBoxPassNeg.in <= UInt<1>("h0") @[BlackBox.scala 97:25]
    node _T = eq(blackBoxInvNeg.out, UInt<1>("h1")) @[BlackBox.scala 99:32]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 99:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BlackBox.scala 99:9]
    when _T_2 : @[BlackBox.scala 99:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BlackBox.scala 99:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BlackBox.scala 99:9]
      when _T_3 : @[BlackBox.scala 99:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:99 assert(blackBoxInvNeg.io.out === 1.U)\n") : printf @[BlackBox.scala 99:9]
    node _T_4 = eq(blackBoxInvPos.out, UInt<1>("h0")) @[BlackBox.scala 100:32]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 100:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BlackBox.scala 100:9]
    when _T_6 : @[BlackBox.scala 100:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BlackBox.scala 100:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BlackBox.scala 100:9]
      when _T_7 : @[BlackBox.scala 100:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:100 assert(blackBoxInvPos.io.out === 0.U)\n") : printf_1 @[BlackBox.scala 100:9]
    node _T_8 = eq(blackBoxPassNeg.out, UInt<1>("h0")) @[BlackBox.scala 101:33]
    node _T_9 = bits(reset, 0, 0) @[BlackBox.scala 101:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[BlackBox.scala 101:9]
    when _T_10 : @[BlackBox.scala 101:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[BlackBox.scala 101:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[BlackBox.scala 101:9]
      when _T_11 : @[BlackBox.scala 101:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:101 assert(blackBoxPassNeg.io.out === 0.U)\n") : printf_2 @[BlackBox.scala 101:9]
    node _T_12 = eq(blackBoxPassPos.out, UInt<1>("h1")) @[BlackBox.scala 102:33]
    node _T_13 = bits(reset, 0, 0) @[BlackBox.scala 102:9]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[BlackBox.scala 102:9]
    when _T_14 : @[BlackBox.scala 102:9]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[BlackBox.scala 102:9]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[BlackBox.scala 102:9]
      when _T_15 : @[BlackBox.scala 102:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:102 assert(blackBoxPassPos.io.out === 1.U)\n") : printf_3 @[BlackBox.scala 102:9]
    node _T_16 = bits(reset, 0, 0) @[BlackBox.scala 103:7]
    node _T_17 = eq(_T_16, UInt<1>("h0")) @[BlackBox.scala 103:7]
    when _T_17 : @[BlackBox.scala 103:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[BlackBox.scala 103:7]
