circuit AsTypeOfTruncationTester :
  module AsTypeOfTruncationTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire truncate : UInt<3> @[AsTypeOfTester.scala 57:37]
    truncate <= UInt<7>("h43") @[AsTypeOfTester.scala 57:37]
    wire expand : UInt<3> @[AsTypeOfTester.scala 58:28]
    expand <= UInt<1>("h1") @[AsTypeOfTester.scala 58:28]
    node _T = eq(truncate, UInt<2>("h3")) @[AsTypeOfTester.scala 61:19]
    node _T_1 = bits(reset, 0, 0) @[AsTypeOfTester.scala 61:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[AsTypeOfTester.scala 61:9]
    when _T_2 : @[AsTypeOfTester.scala 61:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[AsTypeOfTester.scala 61:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[AsTypeOfTester.scala 61:9]
      when _T_3 : @[AsTypeOfTester.scala 61:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsTypeOfTester.scala:61 assert(truncate === 3.U)\n") : printf @[AsTypeOfTester.scala 61:9]
    node _T_4 = eq(expand, UInt<1>("h1")) @[AsTypeOfTester.scala 63:17]
    node _T_5 = bits(reset, 0, 0) @[AsTypeOfTester.scala 63:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[AsTypeOfTester.scala 63:9]
    when _T_6 : @[AsTypeOfTester.scala 63:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[AsTypeOfTester.scala 63:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[AsTypeOfTester.scala 63:9]
      when _T_7 : @[AsTypeOfTester.scala 63:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsTypeOfTester.scala:63 assert(expand === 1.U)\n") : printf_1 @[AsTypeOfTester.scala 63:9]
    node _T_8 = bits(reset, 0, 0) @[AsTypeOfTester.scala 65:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[AsTypeOfTester.scala 65:7]
    when _T_9 : @[AsTypeOfTester.scala 65:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[AsTypeOfTester.scala 65:7]
