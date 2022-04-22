circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node shifted1 = shl(asInterval(UInt<4>("h3"), 3, 3, 0), 2) @[IntervalSpec.scala 800:25]
    wire shiftUInt : UInt<8>
    shiftUInt <= UInt<8>("h1")
    node shifted2 = dshl(asInterval(UInt<4>("h3"), 3, 3, 0), shiftUInt) @[IntervalSpec.scala 802:25]
    node _T = eq(shifted1, asInterval(UInt<5>("hc"), 12, 12, 0)) @[IntervalSpec.scala 804:31]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 804:21]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 804:21]
    when _T_2 : @[IntervalSpec.scala 804:21]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 804:21]
      node _T_3 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 804:21]
      when _T_3 : @[IntervalSpec.scala 804:21]
        printf(clock, UInt<1>("h1"), "Assertion failed: shifted 1 should be 12, it wasn't\n    at IntervalSpec.scala:804 chisel3.assert(shifted1 === 12.I, \"shifted 1 should be 12, it wasn't\")\n") : printf @[IntervalSpec.scala 804:21]
    node _T_4 = eq(shifted2, asInterval(UInt<4>("h6"), 6, 6, 0)) @[IntervalSpec.scala 805:31]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 805:21]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 805:21]
    when _T_6 : @[IntervalSpec.scala 805:21]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[IntervalSpec.scala 805:21]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[IntervalSpec.scala 805:21]
      when _T_7 : @[IntervalSpec.scala 805:21]
        printf(clock, UInt<1>("h1"), "Assertion failed: shifted 2 should be 6 it wasn't\n    at IntervalSpec.scala:805 chisel3.assert(shifted2 === 6.I, \"shifted 2 should be 6 it wasn't\")\n") : printf_1 @[IntervalSpec.scala 805:21]
    node _T_8 = bits(reset, 0, 0) @[IntervalSpec.scala 806:11]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[IntervalSpec.scala 806:11]
    when _T_9 : @[IntervalSpec.scala 806:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 806:11]
