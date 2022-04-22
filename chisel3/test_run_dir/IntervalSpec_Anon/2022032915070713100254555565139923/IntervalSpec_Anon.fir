circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 559:26]
    base <= asInterval(UInt<4>("h6"), 6, 6, 0) @[IntervalSpec.scala 560:16]
    wire disjointLeft : Interval[-7, -5].0
    disjointLeft <= asInterval(UInt<4>("ha"), -6, -6, 0)
    node w5 = wrap(base, disjointLeft) @[IntervalSpec.scala 562:29]
    node _T = bits(reset, 0, 0) @[IntervalSpec.scala 563:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 563:15]
    when _T_1 : @[IntervalSpec.scala 563:15]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 563:15]
