circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 590:24]
    base <= asInterval(UInt<4>("h6"), 6, 6, 0) @[IntervalSpec.scala 591:14]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h8"), 8, 8, 0)
    node w5 = clip(base, disjointLeft) @[IntervalSpec.scala 593:27]
    node _T = asSInt(w5) @[IntervalSpec.scala 594:27]
    node _T_1 = eq(_T, asSInt(UInt<4>("h7"))) @[IntervalSpec.scala 594:34]
    node _T_2 = bits(reset, 0, 0) @[IntervalSpec.scala 594:23]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[IntervalSpec.scala 594:23]
    when _T_3 : @[IntervalSpec.scala 594:23]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 594:23]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 594:23]
      when _T_4 : @[IntervalSpec.scala 594:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:594 chisel3.assert(w5.asSInt === 7.S)\n") : printf @[IntervalSpec.scala 594:23]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 595:13]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 595:13]
    when _T_6 : @[IntervalSpec.scala 595:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 595:13]
