circuit InternalBoreTester :
  module InternalBore :
    input in : UInt<1>
    output out : UInt<1>

    out <= UInt<1>("h0") @[BoringUtilsSpec.scala 121:9]

  module InternalBoreTester :
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
    inst dut of InternalBore @[BoringUtilsSpec.scala 126:21]
    dut.in <= UInt<1>("h1") @[BoringUtilsSpec.scala 127:12]
    node _T_2 = eq(dut.out, UInt<1>("h1")) @[BoringUtilsSpec.scala 128:28]
    node _T_3 = bits(reset, 0, 0) @[BoringUtilsSpec.scala 128:19]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[BoringUtilsSpec.scala 128:19]
    when _T_4 : @[BoringUtilsSpec.scala 128:19]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[BoringUtilsSpec.scala 128:19]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[BoringUtilsSpec.scala 128:19]
      when _T_5 : @[BoringUtilsSpec.scala 128:19]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BoringUtilsSpec.scala:128 chisel3.assert(dut.out === true.B)\n") : printf @[BoringUtilsSpec.scala 128:19]
