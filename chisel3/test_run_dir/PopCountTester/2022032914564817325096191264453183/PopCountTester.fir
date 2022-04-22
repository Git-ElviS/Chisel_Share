circuit PopCountTester :
  module PopCountTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg x : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[PopCount.scala 10:18]
    node _x_T = add(x, UInt<1>("h1")) @[PopCount.scala 11:10]
    node _x_T_1 = tail(_x_T, 1) @[PopCount.scala 11:10]
    x <= _x_T_1 @[PopCount.scala 11:5]
    node _T = not(UInt<1>("h0")) @[PopCount.scala 12:22]
    node _T_1 = eq(x, _T) @[PopCount.scala 12:18]
    reg REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), REG) @[PopCount.scala 12:15]
    REG <= _T_1 @[PopCount.scala 12:15]
    when REG : @[PopCount.scala 12:34]
      node _T_2 = bits(reset, 0, 0) @[PopCount.scala 12:40]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[PopCount.scala 12:40]
      when _T_3 : @[PopCount.scala 12:40]
        stop(clock, UInt<1>("h1"), 0) : stop @[PopCount.scala 12:40]
    node result = bits(x, 0, 0) @[PopCount.scala 14:27]
    node _expected_T = bits(x, 0, 0) @[PopCount.scala 15:20]
    node expected = add(UInt<1>("h0"), _expected_T) @[PopCount.scala 15:44]
    node _T_4 = eq(result, expected) @[PopCount.scala 16:17]
    node _T_5 = bits(reset, 0, 0) @[PopCount.scala 16:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[PopCount.scala 16:9]
    when _T_6 : @[PopCount.scala 16:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert @[PopCount.scala 16:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[PopCount.scala 16:9]
      when _T_7 : @[PopCount.scala 16:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n") : printf @[PopCount.scala 16:9]
