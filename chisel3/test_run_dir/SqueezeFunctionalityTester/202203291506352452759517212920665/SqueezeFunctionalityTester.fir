circuit SqueezeFunctionalityTester :
  module SqueezeFunctionalityTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg counter : UInt<10>, clock with :
      reset => (reset, UInt<10>("h0")) @[IntervalSpec.scala 230:24]
    node _counter_T = add(counter, UInt<1>("h1")) @[IntervalSpec.scala 231:22]
    node _counter_T_1 = tail(_counter_T, 1) @[IntervalSpec.scala 231:22]
    counter <= _counter_T_1 @[IntervalSpec.scala 231:11]
    node _T = gt(counter, UInt<4>("ha")) @[IntervalSpec.scala 232:16]
    when _T : @[IntervalSpec.scala 232:24]
      node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 233:9]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 233:9]
      when _T_2 : @[IntervalSpec.scala 233:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 233:9]
    wire squeezeInterval : Interval[-2, 5].0 @[IntervalSpec.scala 236:29]
    squeezeInterval <= asInterval(UInt<1>("h0"), 0, 0, 0) @[IntervalSpec.scala 237:19]
    wire squeezeTemplate : Interval[-2, 5].0 @[IntervalSpec.scala 239:29]
    node _ss_T = asInterval(asSInt(UInt<5>("h16")), -2, 5, 0) @[IntervalSpec.scala 241:56]
    wire ss : Interval[-2, 5].0
    ss <= _ss_T
    node _toSqueeze_T = asInterval(counter, -2, 5, 0) @[IntervalSpec.scala 243:37]
    node toSqueeze = sub(_toSqueeze_T, ss) @[IntervalSpec.scala 243:45]
    node _squeezeTemplate_T = squz(toSqueeze, squeezeInterval) @[IntervalSpec.scala 245:39]
    squeezeTemplate <= _squeezeTemplate_T @[IntervalSpec.scala 245:19]
    node _T_3 = asSInt(toSqueeze) @[IntervalSpec.scala 250:21]
    node _T_4 = asSInt(squeezeTemplate) @[IntervalSpec.scala 251:27]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 247:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 247:9]
    when _T_6 : @[IntervalSpec.scala 247:9]
      printf(clock, UInt<1>("h1"), "SqueezeTest %d    %d.squeeze(range\"[-2,5].0\") => %d\n", counter, _T_3, _T_4) : printf @[IntervalSpec.scala 247:9]
