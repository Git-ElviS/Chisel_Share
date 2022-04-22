circuit Top :
  module AddOne :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOneWithInstantiableInstance :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    inst i0 of AddOne @[Examples.scala 143:30]
    i0.clock <= clock @[Examples.scala 143:30]
    i0.reset <= reset @[Examples.scala 143:30]
    i0.in <= in @[Examples.scala 150:29]
    out <= i0.out @[Examples.scala 151:9]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

