circuit MultiClockSpec_Anon :
  module MultiClockSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg reg : UInt, clock with :
      reset => (UInt<1>("h1"), UInt<3>("h6")) @[MultiClockSpec.scala 256:16]
    node _reg_T = sub(reg, UInt<1>("h1")) @[MultiClockSpec.scala 258:18]
    node _reg_T_1 = tail(_reg_T, 1) @[MultiClockSpec.scala 258:18]
    reg <= _reg_T_1 @[MultiClockSpec.scala 258:11]
    node _T = eq(reg, UInt<3>("h6")) @[MultiClockSpec.scala 260:26]
    node _T_1 = bits(reset, 0, 0) @[MultiClockSpec.scala 260:21]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[MultiClockSpec.scala 260:21]
    when _T_2 : @[MultiClockSpec.scala 260:21]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MultiClockSpec.scala 260:21]
      node _T_3 = eq(_T, UInt<1>("h0")) @[MultiClockSpec.scala 260:21]
      when _T_3 : @[MultiClockSpec.scala 260:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:260 chisel3.assert(reg === 6.U)\n") : printf @[MultiClockSpec.scala 260:21]
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
    when done : @[MultiClockSpec.scala 262:18]
      node _T_4 = bits(reset, 0, 0) @[MultiClockSpec.scala 262:24]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[MultiClockSpec.scala 262:24]
      when _T_5 : @[MultiClockSpec.scala 262:24]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiClockSpec.scala 262:24]
