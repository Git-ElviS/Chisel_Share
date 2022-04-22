circuit IntervalTester2 :
  module IntervalTest2 :
    input clock : Clock
    input reset : Reset
    output io : { flip p : UInt<1>, flip in1 : Interval[0, 4].0, flip in2 : Interval[0, 6].0, out : Interval.0}

    node _io_out_T = mux(io.p, io.in1, io.in2) @[IntervalSpec.scala 91:16]
    io.out <= _io_out_T @[IntervalSpec.scala 91:10]

  module IntervalTester2 :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<4>("ha")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[CookbookSpec.scala 19:14]
      node _T = bits(reset, 0, 0) @[CookbookSpec.scala 19:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[CookbookSpec.scala 19:20]
      when _T_1 : @[CookbookSpec.scala 19:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[CookbookSpec.scala 19:20]
    inst dut of IntervalTest2 @[IntervalSpec.scala 96:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.p <= UInt<1>("h1") @[IntervalSpec.scala 98:12]
    dut.io.in1 <= asInterval(UInt<4>("h4"), 4, 4, 0) @[IntervalSpec.scala 99:14]
    dut.io.in2 <= asInterval(UInt<4>("h5"), 5, 5, 0) @[IntervalSpec.scala 100:14]
    node _T_2 = eq(dut.io.out, asInterval(UInt<4>("h4"), 4, 4, 0)) @[IntervalSpec.scala 101:21]
    node _T_3 = bits(reset, 0, 0) @[IntervalSpec.scala 101:9]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[IntervalSpec.scala 101:9]
    when _T_4 : @[IntervalSpec.scala 101:9]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[IntervalSpec.scala 101:9]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[IntervalSpec.scala 101:9]
      when _T_5 : @[IntervalSpec.scala 101:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at IntervalSpec.scala:101 assert(dut.io.out === 4.I)\n") : printf @[IntervalSpec.scala 101:9]
    node _T_6 = bits(reset, 0, 0) @[IntervalSpec.scala 103:7]
    node _T_7 = eq(_T_6, UInt<1>("h0")) @[IntervalSpec.scala 103:7]
    when _T_7 : @[IntervalSpec.scala 103:7]
      stop(clock, UInt<1>("h1"), 0) : stop_1 @[IntervalSpec.scala 103:7]
