circuit FinishTester :
  module FinishTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire value : UInt
    value <= UInt<1>("h0")
    when UInt<1>("h1") : @[TesterDriverSpec.scala 19:23]
      node _T = bits(reset, 0, 0) @[TesterDriverSpec.scala 20:9]
      node _T_1 = eq(_T, UInt<1>("h0")) @[TesterDriverSpec.scala 20:9]
      when _T_1 : @[TesterDriverSpec.scala 20:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[TesterDriverSpec.scala 20:9]
    wire test_wire : UInt<2>
    test_wire <= UInt<2>("h1")
    node _T_2 = eq(test_wire, UInt<2>("h3")) @[TesterDriverSpec.scala 27:20]
    node _T_3 = bits(reset, 0, 0) @[TesterDriverSpec.scala 27:9]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[TesterDriverSpec.scala 27:9]
    when _T_4 : @[TesterDriverSpec.scala 27:9]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[TesterDriverSpec.scala 27:9]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[TesterDriverSpec.scala 27:9]
      when _T_5 : @[TesterDriverSpec.scala 27:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at TesterDriverSpec.scala:27 assert(test_wire === test_wire_override_value.asUInt)\n") : printf @[TesterDriverSpec.scala 27:9]
    test_wire <= UInt<2>("h3") @[TesterDriverSpec.scala 33:15]
