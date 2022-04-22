circuit MultiClockSpec_Anon :
  module MultiClockSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = asClock(UInt<1>("h0")) @[MultiClockSpec.scala 291:33]
    node _T_1 = eq(UInt<1>("h0"), UInt<1>("h1")) @[MultiClockSpec.scala 292:28]
    node _T_2 = bits(reset, 0, 0) @[MultiClockSpec.scala 292:23]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[MultiClockSpec.scala 292:23]
    when _T_3 : @[MultiClockSpec.scala 292:23]
      assert(_T, _T_1, UInt<1>("h1"), "") : assert @[MultiClockSpec.scala 292:23]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[MultiClockSpec.scala 292:23]
      when _T_4 : @[MultiClockSpec.scala 292:23]
        printf(_T, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:292 chisel3.assert(0.U === 1.U)\n") : printf @[MultiClockSpec.scala 292:23]
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
    when done : @[MultiClockSpec.scala 295:18]
      node _T_5 = bits(reset, 0, 0) @[MultiClockSpec.scala 295:24]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[MultiClockSpec.scala 295:24]
      when _T_6 : @[MultiClockSpec.scala 295:24]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiClockSpec.scala 295:24]
