circuit ResetTester :
  module ResetTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire triggerReset : UInt<1>
    triggerReset <= UInt<1>("h0")
    reg wasReset : UInt<1>, clock with :
      reset => (UInt<1>("h0"), wasReset) @[Counter.scala 34:25]
    wasReset <= triggerReset @[Counter.scala 34:25]
    reg value : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Counter.scala 62:40]
    wire value_wrap : UInt<1>
    value_wrap <= UInt<1>("h0")
    when triggerReset : @[Counter.scala 137:17]
      value <= UInt<1>("h0") @[Counter.scala 99:11]
    else :
      when UInt<1>("h1") : @[Counter.scala 139:24]
        node value_wrap_wrap = eq(value, UInt<3>("h7")) @[Counter.scala 74:24]
        node _value_wrap_value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
        node _value_wrap_value_T_1 = tail(_value_wrap_value_T, 1) @[Counter.scala 78:24]
        value <= _value_wrap_value_T_1 @[Counter.scala 78:15]
        value_wrap <= value_wrap_wrap @[Counter.scala 140:12]
    node _triggerReset_T = eq(value, UInt<2>("h2")) @[Counter.scala 37:25]
    triggerReset <= _triggerReset_T @[Counter.scala 37:16]
    when wasReset : @[Counter.scala 39:18]
      node _T = eq(value, UInt<1>("h0")) @[Counter.scala 40:18]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 40:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Counter.scala 40:11]
      when _T_2 : @[Counter.scala 40:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Counter.scala 40:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Counter.scala 40:11]
        when _T_3 : @[Counter.scala 40:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Counter.scala:40 assert(value === 0.U)\n") : printf @[Counter.scala 40:11]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 41:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Counter.scala 41:9]
      when _T_5 : @[Counter.scala 41:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Counter.scala 41:9]
