circuit Top :
  module AddOneWithInstantiableWire :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 118:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 125:35]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 125:35]
    innerWire <= _innerWire_T_1 @[Examples.scala 125:29]
    out <= innerWire @[Examples.scala 126:9]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

