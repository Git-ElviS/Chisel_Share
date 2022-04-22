circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 580:24]
    base <= asInterval(UInt<4>("h6"), 6, 6, 0) @[IntervalSpec.scala 581:14]
    wire disjointLeft : Interval[-7, -5].0
    disjointLeft <= asInterval(UInt<4>("ha"), -6, -6, 0)
    node w5 = clip(base, disjointLeft) @[IntervalSpec.scala 583:27]
    node _T = eq(w5, asInterval(UInt<4>("hb"), -5, -5, 0)) @[IntervalSpec.scala 584:27]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 584:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 584:23]
    when _T_2 : @[IntervalSpec.scala 584:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 584:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 584:23]
      when _T_3 : @[IntervalSpec.scala 584:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:584 chisel3.assert(w5 === (-5).I)\n") : printf @[IntervalSpec.scala 584:23]
    node _T_4 = bits(reset, 0, 0) @[IntervalSpec.scala 585:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[IntervalSpec.scala 585:13]
    when _T_5 : @[IntervalSpec.scala 585:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 585:13]
