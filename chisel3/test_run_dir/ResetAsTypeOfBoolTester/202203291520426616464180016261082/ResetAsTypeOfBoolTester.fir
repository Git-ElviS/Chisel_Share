circuit ResetAsTypeOfBoolTester :
  module ResetAsTypeOfBoolTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _WIRE : UInt<1> @[AsTypeOfTester.scala 69:24]
    _WIRE <= reset @[AsTypeOfTester.scala 69:24]
    node _T = bits(reset, 0, 0) @[AsTypeOfTester.scala 69:43]
    node _T_1 = eq(_WIRE, _T) @[AsTypeOfTester.scala 69:33]
    node _T_2 = bits(reset, 0, 0) @[AsTypeOfTester.scala 69:9]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[AsTypeOfTester.scala 69:9]
    when _T_3 : @[AsTypeOfTester.scala 69:9]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[AsTypeOfTester.scala 69:9]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[AsTypeOfTester.scala 69:9]
      when _T_4 : @[AsTypeOfTester.scala 69:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsTypeOfTester.scala:69 assert(reset.asTypeOf(Bool()) === reset.asBool)\n") : printf @[AsTypeOfTester.scala 69:9]
    node _T_5 = bits(reset, 0, 0) @[AsTypeOfTester.scala 70:7]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[AsTypeOfTester.scala 70:7]
    when _T_6 : @[AsTypeOfTester.scala 70:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[AsTypeOfTester.scala 70:7]
