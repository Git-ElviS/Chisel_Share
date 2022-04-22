circuit CountTester :
  module CountTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    when UInt<1>("h1") : @[Counter.scala 12:16]
      node wrap = eq(value, UInt<2>("h2")) @[Counter.scala 74:24]
      node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
      value <= _value_T_1 @[Counter.scala 78:15]
      when wrap : @[Counter.scala 88:20]
        value <= UInt<1>("h0") @[Counter.scala 88:28]
    node _T = eq(value, UInt<2>("h2")) @[Counter.scala 14:18]
    when _T : @[Counter.scala 14:32]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 15:9]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Counter.scala 15:9]
      when _T_2 : @[Counter.scala 15:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Counter.scala 15:9]
