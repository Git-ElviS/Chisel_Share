circuit IntervalRegisterTester :
  module IntervalRegisterTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg counter : Interval[-2, 5].0, clock with :
      reset => (reset, asInterval(UInt<1>("h1"), -1, -1, 0)) @[IntervalSpec.scala 261:24]
    node _counter_T = add(counter, asInterval(UInt<2>("h1"), 1, 1, 0)) @[IntervalSpec.scala 262:23]
    node _counter_T_1 = squz(_counter_T, counter) @[IntervalSpec.scala 263:13]
    counter <= _counter_T_1 @[IntervalSpec.scala 262:11]
    node _T = gt(counter, asInterval(UInt<4>("h4"), 4, 4, 0)) @[IntervalSpec.scala 264:16]
    when _T : @[IntervalSpec.scala 264:23]
      node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 265:9]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 265:9]
      when _T_2 : @[IntervalSpec.scala 265:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 265:9]
