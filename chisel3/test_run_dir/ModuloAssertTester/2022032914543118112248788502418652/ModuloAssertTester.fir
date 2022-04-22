circuit ModuloAssertTester :
  module ModuloAssertTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = rem(UInt<3>("h4"), UInt<2>("h2")) @[Assert.scala 48:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Assert.scala 48:22]
    node _T_2 = bits(reset, 0, 0) @[Assert.scala 48:9]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[Assert.scala 48:9]
    when _T_3 : @[Assert.scala 48:9]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[Assert.scala 48:9]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[Assert.scala 48:9]
      when _T_4 : @[Assert.scala 48:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Assert.scala:48 assert((4.U %% 2.U) === 0.U)\n") : printf @[Assert.scala 48:9]
    node _T_5 = bits(reset, 0, 0) @[Assert.scala 49:7]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[Assert.scala 49:7]
    when _T_6 : @[Assert.scala 49:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Assert.scala 49:7]
