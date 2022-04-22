circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 601:26]
    base <= asInterval(UInt<4>("h6"), 6, 6, 0) @[IntervalSpec.scala 602:16]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h8"), 8, 8, 0)
    node w5 = squz(base, disjointLeft) @[IntervalSpec.scala 604:32]
    node _T = asSInt(w5) @[IntervalSpec.scala 605:29]
    node _T_1 = eq(_T, asSInt(UInt<4>("h6"))) @[IntervalSpec.scala 605:36]
    node _T_2 = bits(reset, 0, 0) @[IntervalSpec.scala 605:25]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[IntervalSpec.scala 605:25]
    when _T_3 : @[IntervalSpec.scala 605:25]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 605:25]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 605:25]
      when _T_4 : @[IntervalSpec.scala 605:25]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:605 chisel3.assert(w5.asSInt === 6.S)\n") : printf @[IntervalSpec.scala 605:25]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 606:15]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 606:15]
    when _T_6 : @[IntervalSpec.scala 606:15]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 606:15]
