circuit IntervalWrapTester :
  module IntervalWrapTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire t1 : Interval[-2, 12].0 @[IntervalSpec.scala 272:16]
    t1 <= asInterval(UInt<2>("h2"), -2, -2, 0) @[IntervalSpec.scala 273:6]
    reg r1 : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[IntervalSpec.scala 275:19]
    r1 <= UInt<3>("h0") @[IntervalSpec.scala 276:6]
    node _t2_T = asInterval(UInt<1>("h0"), 0, 7, 0) @[IntervalSpec.scala 277:19]
    node t2 = wrap(t1, _t2_T) @[IntervalSpec.scala 277:19]
    node _t3_T = asInterval(UInt<1>("h0"), 0, 7, 0) @[IntervalSpec.scala 278:19]
    node t3 = wrap(t1, _t3_T) @[IntervalSpec.scala 278:19]
    wire in1 : Interval[0, 9].6
    in1 <= asInterval(UInt<1>("h0"), 0, 0, 0)
    wire in2 : Interval[1, 6).4
    in2 <= asInterval(UInt<3>("h2"), 2, 2, 0)
    node in3 = wrap(in1, in2) @[IntervalSpec.scala 291:21]
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 307:18]
    wire enclosed : Interval[-2, 5].0
    enclosed <= asInterval(UInt<1>("h0"), 0, 0, 0)
    wire enclosing : Interval[-6, 8].0
    enclosing <= asInterval(UInt<1>("h0"), 0, 0, 0)
    wire overlapLeft : Interval[-10, -2].0
    overlapLeft <= asInterval(UInt<3>("h5"), -3, -3, 0)
    wire overlapRight : Interval[-1, 10].0
    overlapRight <= asInterval(UInt<1>("h0"), 0, 0, 0)
    node w1 = wrap(base, enclosed) @[IntervalSpec.scala 313:21]
    node w2 = wrap(base, enclosing) @[IntervalSpec.scala 314:21]
    node w3 = wrap(base, overlapLeft) @[IntervalSpec.scala 315:21]
    node w4 = wrap(base, overlapRight) @[IntervalSpec.scala 316:21]
    node _w7_T = asInterval(UInt<1>("h0"), -2, 5, 0) @[IntervalSpec.scala 317:21]
    node w7 = wrap(base, _w7_T) @[IntervalSpec.scala 317:21]
    base <= asInterval(UInt<4>("h6"), 6, 6, 0) @[IntervalSpec.scala 319:8]
    node _T = eq(w1, asInterval(UInt<2>("h2"), -2, -2, 0)) @[IntervalSpec.scala 321:13]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 321:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[IntervalSpec.scala 321:9]
    when _T_2 : @[IntervalSpec.scala 321:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 321:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[IntervalSpec.scala 321:9]
      when _T_3 : @[IntervalSpec.scala 321:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:321 assert(w1 === (-2).I)\n") : printf @[IntervalSpec.scala 321:9]
    node _T_4 = eq(w2, asInterval(UInt<4>("h6"), 6, 6, 0)) @[IntervalSpec.scala 322:13]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 322:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[IntervalSpec.scala 322:9]
    when _T_6 : @[IntervalSpec.scala 322:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[IntervalSpec.scala 322:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[IntervalSpec.scala 322:9]
      when _T_7 : @[IntervalSpec.scala 322:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:322 assert(w2 === 6.I)\n") : printf_1 @[IntervalSpec.scala 322:9]
    node _T_8 = eq(w3, asInterval(UInt<3>("h5"), -3, -3, 0)) @[IntervalSpec.scala 323:13]
    node _T_9 = bits(reset, 0, 0) @[IntervalSpec.scala 323:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[IntervalSpec.scala 323:9]
    when _T_10 : @[IntervalSpec.scala 323:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[IntervalSpec.scala 323:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[IntervalSpec.scala 323:9]
      when _T_11 : @[IntervalSpec.scala 323:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:323 assert(w3 === (-3).I)\n") : printf_2 @[IntervalSpec.scala 323:9]
    node _T_12 = eq(w4, asInterval(UInt<4>("h6"), 6, 6, 0)) @[IntervalSpec.scala 324:13]
    node _T_13 = bits(reset, 0, 0) @[IntervalSpec.scala 324:9]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[IntervalSpec.scala 324:9]
    when _T_14 : @[IntervalSpec.scala 324:9]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[IntervalSpec.scala 324:9]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[IntervalSpec.scala 324:9]
      when _T_15 : @[IntervalSpec.scala 324:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:324 assert(w4 === 6.I)\n") : printf_3 @[IntervalSpec.scala 324:9]
    node _T_16 = eq(w7, asInterval(UInt<2>("h2"), -2, -2, 0)) @[IntervalSpec.scala 325:13]
    node _T_17 = bits(reset, 0, 0) @[IntervalSpec.scala 325:9]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[IntervalSpec.scala 325:9]
    when _T_18 : @[IntervalSpec.scala 325:9]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[IntervalSpec.scala 325:9]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[IntervalSpec.scala 325:9]
      when _T_19 : @[IntervalSpec.scala 325:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:325 assert(w7 === (-2).I)\n") : printf_4 @[IntervalSpec.scala 325:9]
    node _T_20 = bits(reset, 0, 0) @[IntervalSpec.scala 327:7]
    node _T_21 = eq(_T_20, UInt<1>("h0")) @[IntervalSpec.scala 327:7]
    when _T_21 : @[IntervalSpec.scala 327:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[IntervalSpec.scala 327:7]
