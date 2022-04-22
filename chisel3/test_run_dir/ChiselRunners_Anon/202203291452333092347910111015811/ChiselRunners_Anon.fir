circuit ChiselRunners_Anon :
  module ChiselRunners_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg x_x : UInt<4>[1], clock with :
      reset => (UInt<1>("h0"), x_x) @[WidthSpec.scala 78:40]
    wire _x_0_WIRE : UInt<4> @[ChiselSpec.scala 66:24]
    _x_0_WIRE <= UInt<1>("h0") @[ChiselSpec.scala 66:24]
    x_x[0] <= _x_0_WIRE @[ChiselSpec.scala 66:9]
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
    when done : @[ChiselSpec.scala 68:18]
      node _T = not(x_x[0]) @[ChiselSpec.scala 69:24]
      node _T_1 = asUInt(asSInt(UInt<4>("hf"))) @[ChiselSpec.scala 69:57]
      node _T_2 = eq(_T, _T_1) @[ChiselSpec.scala 69:36]
      node _T_3 = bits(reset, 0, 0) @[ChiselSpec.scala 69:23]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[ChiselSpec.scala 69:23]
      when _T_4 : @[ChiselSpec.scala 69:23]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[ChiselSpec.scala 69:23]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[ChiselSpec.scala 69:23]
        when _T_5 : @[ChiselSpec.scala 69:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at ChiselSpec.scala:69 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n") : printf @[ChiselSpec.scala 69:23]
      node _T_6 = bits(reset, 0, 0) @[ChiselSpec.scala 70:13]
      node _T_7 = eq(_T_6, UInt<1>("h0")) @[ChiselSpec.scala 70:13]
      when _T_7 : @[ChiselSpec.scala 70:13]
        stop(clock, UInt<1>("h1"), 0) : stop @[ChiselSpec.scala 70:13]
