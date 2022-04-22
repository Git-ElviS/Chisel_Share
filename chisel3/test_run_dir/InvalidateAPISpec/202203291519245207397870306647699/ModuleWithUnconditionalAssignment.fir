circuit ModuleWithUnconditionalAssignment :
  module ModuleWithUnconditionalAssignment :
    input clock : Clock
    input reset : UInt<1>
    output io : { out : UInt<1>}

    reg value : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Counter.scala 62:40]
    io.out <= UInt<1>("h0") @[InvalidateAPISpec.scala 153:14]
    node wrap = eq(value, UInt<3>("h7")) @[Counter.scala 74:24]
    node _value_T = add(value, UInt<1>("h1")) @[Counter.scala 78:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 78:24]
    value <= _value_T_1 @[Counter.scala 78:15]
    when wrap : @[InvalidateAPISpec.scala 154:27]
      io.out <= UInt<1>("h1") @[InvalidateAPISpec.scala 155:16]

