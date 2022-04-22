circuit TopTester :
  module Source :
    input in : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= in @[BoringUtilsSpec.scala 67:7]

  module Source_1 :
    input in : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= in @[BoringUtilsSpec.scala 67:7]

  module Source_2 :
    input in : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= in @[BoringUtilsSpec.scala 67:7]

  module Sink :
    output out : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= UInt<1>("h0") @[BoringUtilsSpec.scala 72:7]
    out <= x @[BoringUtilsSpec.scala 73:9]

  module Sink_1 :
    output out : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= UInt<1>("h0") @[BoringUtilsSpec.scala 72:7]
    out <= x @[BoringUtilsSpec.scala 73:9]

  module Sink_2 :
    output out : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= UInt<1>("h0") @[BoringUtilsSpec.scala 72:7]
    out <= x @[BoringUtilsSpec.scala 73:9]

  module Sink_3 :
    output out : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= UInt<1>("h0") @[BoringUtilsSpec.scala 72:7]
    out <= x @[BoringUtilsSpec.scala 73:9]

  module Sink_4 :
    output out : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= UInt<1>("h0") @[BoringUtilsSpec.scala 72:7]
    out <= x @[BoringUtilsSpec.scala 73:9]

  module Sink_5 :
    output out : UInt

    wire x : UInt<4> @[BoringUtilsSpec.scala 59:17]
    x <= UInt<1>("h0") @[BoringUtilsSpec.scala 72:7]
    out <= x @[BoringUtilsSpec.scala 73:9]

  module Top :
    input clock : Clock
    input reset : Reset

    inst sources_0 of Source @[BoringUtilsSpec.scala 78:37]
    inst sources_1 of Source_1 @[BoringUtilsSpec.scala 78:37]
    inst sources_2 of Source_2 @[BoringUtilsSpec.scala 78:37]
    inst sinks_0 of Sink @[BoringUtilsSpec.scala 79:35]
    inst sinks_1 of Sink_1 @[BoringUtilsSpec.scala 79:35]
    inst sinks_2 of Sink_2 @[BoringUtilsSpec.scala 79:35]
    inst sinks_3 of Sink_3 @[BoringUtilsSpec.scala 79:35]
    inst sinks_4 of Sink_4 @[BoringUtilsSpec.scala 79:35]
    inst sinks_5 of Sink_5 @[BoringUtilsSpec.scala 79:35]
    sources_0.in <= UInt<1>("h0") @[BoringUtilsSpec.scala 82:57]
    sources_1.in <= UInt<1>("h1") @[BoringUtilsSpec.scala 82:57]
    sources_2.in <= UInt<2>("h2") @[BoringUtilsSpec.scala 82:57]
    node _T = eq(sinks_0.out, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:80]
    node _T_1 = asUInt(reset) @[BoringUtilsSpec.scala 85:73]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
    when _T_2 : @[BoringUtilsSpec.scala 85:73]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BoringUtilsSpec.scala 85:73]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
      when _T_3 : @[BoringUtilsSpec.scala 85:73]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:85 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map { case (a, b) => chisel3.assert(a.out === b.U) }\n") : printf @[BoringUtilsSpec.scala 85:73]
    node _T_4 = eq(sinks_1.out, UInt<1>("h1")) @[BoringUtilsSpec.scala 85:80]
    node _T_5 = asUInt(reset) @[BoringUtilsSpec.scala 85:73]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
    when _T_6 : @[BoringUtilsSpec.scala 85:73]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BoringUtilsSpec.scala 85:73]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
      when _T_7 : @[BoringUtilsSpec.scala 85:73]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:85 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map { case (a, b) => chisel3.assert(a.out === b.U) }\n") : printf_1 @[BoringUtilsSpec.scala 85:73]
    node _T_8 = eq(sinks_2.out, UInt<1>("h1")) @[BoringUtilsSpec.scala 85:80]
    node _T_9 = asUInt(reset) @[BoringUtilsSpec.scala 85:73]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
    when _T_10 : @[BoringUtilsSpec.scala 85:73]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[BoringUtilsSpec.scala 85:73]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
      when _T_11 : @[BoringUtilsSpec.scala 85:73]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:85 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map { case (a, b) => chisel3.assert(a.out === b.U) }\n") : printf_2 @[BoringUtilsSpec.scala 85:73]
    node _T_12 = eq(sinks_3.out, UInt<2>("h2")) @[BoringUtilsSpec.scala 85:80]
    node _T_13 = asUInt(reset) @[BoringUtilsSpec.scala 85:73]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
    when _T_14 : @[BoringUtilsSpec.scala 85:73]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[BoringUtilsSpec.scala 85:73]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
      when _T_15 : @[BoringUtilsSpec.scala 85:73]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:85 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map { case (a, b) => chisel3.assert(a.out === b.U) }\n") : printf_3 @[BoringUtilsSpec.scala 85:73]
    node _T_16 = eq(sinks_4.out, UInt<2>("h2")) @[BoringUtilsSpec.scala 85:80]
    node _T_17 = asUInt(reset) @[BoringUtilsSpec.scala 85:73]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
    when _T_18 : @[BoringUtilsSpec.scala 85:73]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[BoringUtilsSpec.scala 85:73]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
      when _T_19 : @[BoringUtilsSpec.scala 85:73]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:85 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map { case (a, b) => chisel3.assert(a.out === b.U) }\n") : printf_4 @[BoringUtilsSpec.scala 85:73]
    node _T_20 = eq(sinks_5.out, UInt<2>("h2")) @[BoringUtilsSpec.scala 85:80]
    node _T_21 = asUInt(reset) @[BoringUtilsSpec.scala 85:73]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
    when _T_22 : @[BoringUtilsSpec.scala 85:73]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[BoringUtilsSpec.scala 85:73]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[BoringUtilsSpec.scala 85:73]
      when _T_23 : @[BoringUtilsSpec.scala 85:73]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:85 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map { case (a, b) => chisel3.assert(a.out === b.U) }\n") : printf_5 @[BoringUtilsSpec.scala 85:73]

  module TopTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg done_value : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node done_wrap_wrap = eq(done_value, UInt<1>("h1")) @[Counter.scala 74:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 78:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 78:15]
      done <= done_wrap_wrap @[Counter.scala 120:23]
    when done : @[BoringUtilsSpec.scala 21:14]
      node _T = bits(reset, 0, 0) @[BoringUtilsSpec.scala 21:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[BoringUtilsSpec.scala 21:20]
      when _T_1 : @[BoringUtilsSpec.scala 21:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[BoringUtilsSpec.scala 21:20]
    inst dut of Top @[BoringUtilsSpec.scala 93:21]
    dut.clock <= clock
    dut.reset <= reset
