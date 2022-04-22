circuit ChiselRunners_Anon :
  module ChiselRunners_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire x : UInt
    x <= UInt<2>("h0")
    x <= UInt<4>("h0") @[WidthSpec.scala 163:11]
    wire _x_WIRE : UInt @[ChiselSpec.scala 79:24]
    _x_WIRE <= UInt<1>("h0") @[ChiselSpec.scala 79:24]
    x <= _x_WIRE @[ChiselSpec.scala 79:9]
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
    when done : @[ChiselSpec.scala 81:18]
      node _T = not(x) @[ChiselSpec.scala 82:24]
      node _T_1 = asUInt(asSInt(UInt<4>("hf"))) @[ChiselSpec.scala 82:57]
      node _T_2 = eq(_T, _T_1) @[ChiselSpec.scala 82:36]
      node _T_3 = bits(reset, 0, 0) @[ChiselSpec.scala 82:23]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[ChiselSpec.scala 82:23]
      when _T_4 : @[ChiselSpec.scala 82:23]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[ChiselSpec.scala 82:23]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[ChiselSpec.scala 82:23]
        when _T_5 : @[ChiselSpec.scala 82:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at ChiselSpec.scala:82 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n") : printf @[ChiselSpec.scala 82:23]
      node _T_6 = bits(reset, 0, 0) @[ChiselSpec.scala 83:13]
      node _T_7 = eq(_T_6, UInt<1>("h0")) @[ChiselSpec.scala 83:13]
      when _T_7 : @[ChiselSpec.scala 83:13]
        stop(clock, UInt<1>("h1"), 0) : stop @[ChiselSpec.scala 83:13]
