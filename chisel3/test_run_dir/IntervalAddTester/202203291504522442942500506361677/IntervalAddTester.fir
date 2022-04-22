circuit IntervalAddTester :
  module IntervalAddTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire in1 : Interval[0, 4].0 @[IntervalSpec.scala 108:17]
    wire in2 : Interval[0, 4].0 @[IntervalSpec.scala 109:17]
    in1 <= asInterval(UInt<3>("h2"), 2, 2, 0) @[IntervalSpec.scala 111:7]
    in2 <= asInterval(UInt<3>("h2"), 2, 2, 0) @[IntervalSpec.scala 112:7]
    node result = add(in1, in2) @[IntervalSpec.scala 116:20]
    node _T = eq(result, asInterval(UInt<4>("h4"), 4, 4, 0)) @[IntervalSpec.scala 118:17]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 118:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 118:9]
    when _T_2 : @[IntervalSpec.scala 118:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 118:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 118:9]
      when _T_3 : @[IntervalSpec.scala 118:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:118 assert(result === 4.I)\n") : printf @[IntervalSpec.scala 118:9]
    node _T_4 = bits(reset, 0, 0) @[IntervalSpec.scala 120:7]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[IntervalSpec.scala 120:7]
    when _T_5 : @[IntervalSpec.scala 120:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 120:7]
