circuit ClockAsUIntTester :
  module ClockAsUIntTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = asClock(UInt<1>("h1")) @[Clock.scala 10:17]
    node _T_1 = asUInt(_T) @[Clock.scala 10:25]
    node _T_2 = eq(_T_1, UInt<1>("h1")) @[Clock.scala 10:32]
    node _T_3 = bits(reset, 0, 0) @[Clock.scala 10:9]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[Clock.scala 10:9]
    when _T_4 : @[Clock.scala 10:9]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[Clock.scala 10:9]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[Clock.scala 10:9]
      when _T_5 : @[Clock.scala 10:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Clock.scala:10 assert(true.B.asClock.asUInt === 1.U)\n") : printf @[Clock.scala 10:9]
    node _T_6 = asClock(UInt<1>("h1")) @[Clock.scala 11:17]
    node _T_7 = asUInt(_T_6) @[Clock.scala 11:25]
    node _T_8 = bits(_T_7, 0, 0) @[Clock.scala 11:25]
    node _T_9 = eq(_T_8, UInt<1>("h1")) @[Clock.scala 11:32]
    node _T_10 = bits(reset, 0, 0) @[Clock.scala 11:9]
    node _T_11 = eq(_T_10, UInt<1>("h0")) @[Clock.scala 11:9]
    when _T_11 : @[Clock.scala 11:9]
      assert(clock, _T_9, UInt<1>("h1"), "") : assert_1 @[Clock.scala 11:9]
      node _T_12 = eq(_T_9, UInt<1>("h0")) @[Clock.scala 11:9]
      when _T_12 : @[Clock.scala 11:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Clock.scala:11 assert(true.B.asClock.asBool === true.B)\n") : printf_1 @[Clock.scala 11:9]
    node _T_13 = bits(reset, 0, 0) @[Clock.scala 12:7]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[Clock.scala 12:7]
    when _T_14 : @[Clock.scala 12:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Clock.scala 12:7]
