circuit Foo :
  module Foo :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire seq_0 : UInt<4> @[CompatibilitySpec.scala 505:25]
    seq_0 is invalid @[CompatibilitySpec.scala 505:25]
    wire seq_1 : UInt<4> @[CompatibilitySpec.scala 505:51]
    seq_1 is invalid @[CompatibilitySpec.scala 505:51]
    wire seq_2 : UInt<4> @[CompatibilitySpec.scala 505:77]
    seq_2 is invalid @[CompatibilitySpec.scala 505:77]
    wire vec : UInt<4>[3] @[CompatibilitySpec.scala 506:20]
    vec is invalid @[CompatibilitySpec.scala 506:20]
    vec[0] <= seq_0 @[CompatibilitySpec.scala 506:20]
    vec[1] <= seq_1 @[CompatibilitySpec.scala 506:20]
    vec[2] <= seq_2 @[CompatibilitySpec.scala 506:20]
    node _T = eq(vec[UInt<1>("h0")], UInt<1>("h0")) @[CompatibilitySpec.scala 509:40]
    node _T_1 = bits(reset, 0, 0) @[CompatibilitySpec.scala 509:21]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[CompatibilitySpec.scala 509:21]
    when _T_2 : @[CompatibilitySpec.scala 509:21]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[CompatibilitySpec.scala 509:21]
      node _T_3 = eq(_T, UInt<1>("h0")) @[CompatibilitySpec.scala 509:21]
      when _T_3 : @[CompatibilitySpec.scala 509:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at CompatibilitySpec.scala:509 chisel3.assert(vec.read(UInt(0)) === UInt(0))\n") : printf @[CompatibilitySpec.scala 509:21]
    vec[UInt<1>("h1")] <= UInt<2>("h3")
    node _T_4 = eq(vec[UInt<1>("h1")], UInt<2>("h3")) @[CompatibilitySpec.scala 513:40]
    node _T_5 = bits(reset, 0, 0) @[CompatibilitySpec.scala 513:21]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[CompatibilitySpec.scala 513:21]
    when _T_6 : @[CompatibilitySpec.scala 513:21]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[CompatibilitySpec.scala 513:21]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[CompatibilitySpec.scala 513:21]
      when _T_7 : @[CompatibilitySpec.scala 513:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at CompatibilitySpec.scala:513 chisel3.assert(vec.read(UInt(1)) === UInt(3))\n") : printf_1 @[CompatibilitySpec.scala 513:21]
    reg done_value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node done_wrap_wrap = eq(done_value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 78:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 78:15]
      done <= done_wrap_wrap @[Counter.scala 120:23]
    when done : @[CompatibilitySpec.scala 516:18]
      node _T_8 = bits(reset, 0, 0) @[CompatibilitySpec.scala 516:20]
      node _T_9 = eq(_T_8, UInt<1>("h0")) @[CompatibilitySpec.scala 516:20]
      when _T_9 : @[CompatibilitySpec.scala 516:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[CompatibilitySpec.scala 516:20]
