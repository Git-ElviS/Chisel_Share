circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 570:26]
    base <= asInterval(UInt<4>("h6"), 6, 6, 0) @[IntervalSpec.scala 571:16]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h8"), 8, 8, 0)
    node w5 = wrap(base, disjointLeft) @[IntervalSpec.scala 573:29]
    node _T = bits(reset, 0, 0) @[IntervalSpec.scala 574:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 574:15]
    when _T_1 : @[IntervalSpec.scala 574:15]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 574:15]
