circuit BoringUtilsSpec_Anon :
  module BoringInverter :
    input clock : Clock
    input reset : Reset
    output io : { }

    wire a : UInt<1> @[BoringUtilsSpec.scala 38:17]
    wire notA : UInt<1> @[BoringUtilsSpec.scala 39:20]
    wire b : UInt<1> @[BoringUtilsSpec.scala 40:17]
    a <= UInt<1>("h0") @[BoringUtilsSpec.scala 41:7]
    node _notA_T = not(a) @[BoringUtilsSpec.scala 42:13]
    notA <= _notA_T @[BoringUtilsSpec.scala 42:10]
    b <= a @[BoringUtilsSpec.scala 43:7]
    node _T = eq(b, UInt<1>("h1")) @[BoringUtilsSpec.scala 44:22]
    node _T_1 = asUInt(reset) @[BoringUtilsSpec.scala 44:19]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BoringUtilsSpec.scala 44:19]
    when _T_2 : @[BoringUtilsSpec.scala 44:19]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BoringUtilsSpec.scala 44:19]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BoringUtilsSpec.scala 44:19]
      when _T_3 : @[BoringUtilsSpec.scala 44:19]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:44 chisel3.assert(b === 1.U)\n") : printf @[BoringUtilsSpec.scala 44:19]

  module BoringUtilsSpec_Anon :
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
    inst dut of BoringInverter @[BoringUtilsSpec.scala 53:50]
    dut.clock <= clock
    dut.reset <= reset
