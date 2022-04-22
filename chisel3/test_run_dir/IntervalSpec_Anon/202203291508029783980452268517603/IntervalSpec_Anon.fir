circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node shifted1 = shr(asInterval(UInt<5>("hc"), 12, 12, 0), 2) @[IntervalSpec.scala 813:25]
    node shifted2 = dshr(asInterval(UInt<5>("hc"), 12, 12, 0), UInt<1>("h1")) @[IntervalSpec.scala 815:25]
    node _T = eq(shifted1, asInterval(UInt<3>("h3"), 3, 3, 0)) @[IntervalSpec.scala 817:31]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 817:21]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 817:21]
    when _T_2 : @[IntervalSpec.scala 817:21]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 817:21]
      node _T_3 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 817:21]
      when _T_3 : @[IntervalSpec.scala 817:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:817 chisel3.assert(shifted1 === 3.I)\n") : printf @[IntervalSpec.scala 817:21]
    node _T_4 = eq(shifted2, asInterval(UInt<4>("h6"), 6, 6, 0)) @[IntervalSpec.scala 818:31]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 818:21]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 818:21]
    when _T_6 : @[IntervalSpec.scala 818:21]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[IntervalSpec.scala 818:21]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[IntervalSpec.scala 818:21]
      when _T_7 : @[IntervalSpec.scala 818:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:818 chisel3.assert(shifted2 === 6.I)\n") : printf_1 @[IntervalSpec.scala 818:21]
    node _T_8 = bits(reset, 0, 0) @[IntervalSpec.scala 819:11]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[IntervalSpec.scala 819:11]
    when _T_9 : @[IntervalSpec.scala 819:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 819:11]
