circuit ComposedMultiIOTester :
  module ComposedMultiIOModule :
    input clock : Clock
    input reset : Reset
    output myLiteralIO : UInt<32>
    output myTraitIO : UInt<32>
    input topModuleIO : UInt<32>

    myLiteralIO <= UInt<2>("h2") @[MultiIOModule.scala 25:15]
    myTraitIO <= topModuleIO @[MultiIOModule.scala 38:13]

  module ComposedMultiIOTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst composedModule of ComposedMultiIOModule @[MultiIOModule.scala 42:30]
    composedModule.clock <= clock
    composedModule.reset <= reset
    composedModule.topModuleIO <= UInt<6>("h2a") @[MultiIOModule.scala 43:30]
    node _T = eq(composedModule.myTraitIO, UInt<6>("h2a")) @[MultiIOModule.scala 44:35]
    node _T_1 = bits(reset, 0, 0) @[MultiIOModule.scala 44:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[MultiIOModule.scala 44:9]
    when _T_2 : @[MultiIOModule.scala 44:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MultiIOModule.scala 44:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[MultiIOModule.scala 44:9]
      when _T_3 : @[MultiIOModule.scala 44:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiIOModule.scala:44 assert(composedModule.myTraitIO === 42.U)\n") : printf @[MultiIOModule.scala 44:9]
    node _T_4 = eq(composedModule.myLiteralIO, UInt<2>("h2")) @[MultiIOModule.scala 45:37]
    node _T_5 = bits(reset, 0, 0) @[MultiIOModule.scala 45:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[MultiIOModule.scala 45:9]
    when _T_6 : @[MultiIOModule.scala 45:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[MultiIOModule.scala 45:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[MultiIOModule.scala 45:9]
      when _T_7 : @[MultiIOModule.scala 45:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiIOModule.scala:45 assert(composedModule.myLiteralIO === 2.U)\n") : printf_1 @[MultiIOModule.scala 45:9]
    node _T_8 = bits(reset, 0, 0) @[MultiIOModule.scala 46:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[MultiIOModule.scala 46:7]
    when _T_9 : @[MultiIOModule.scala 46:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[MultiIOModule.scala 46:7]
