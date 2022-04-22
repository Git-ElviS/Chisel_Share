circuit MultiClockSpec_Anon :
  module MultiClockSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = eq(UInt<1>("h0"), UInt<1>("h1")) @[MultiClockSpec.scala 284:28]
    node _T_1 = eq(UInt<1>("h1"), UInt<1>("h0")) @[MultiClockSpec.scala 284:23]
    when _T_1 : @[MultiClockSpec.scala 284:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MultiClockSpec.scala 284:23]
      node _T_2 = eq(_T, UInt<1>("h0")) @[MultiClockSpec.scala 284:23]
      when _T_2 : @[MultiClockSpec.scala 284:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:284 chisel3.assert(0.U === 1.U)\n") : printf @[MultiClockSpec.scala 284:23]
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
    when done : @[MultiClockSpec.scala 287:18]
      node _T_3 = bits(reset, 0, 0) @[MultiClockSpec.scala 287:24]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[MultiClockSpec.scala 287:24]
      when _T_4 : @[MultiClockSpec.scala 287:24]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiClockSpec.scala 287:24]
