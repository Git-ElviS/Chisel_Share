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

  module AddTwo :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    inst i0 of AddOne @[Examples.scala 63:48]
    i0.clock <= clock @[Examples.scala 63:48]
    i0.reset <= reset @[Examples.scala 63:48]
    inst i1 of AddOne @[Examples.scala 64:48]
    i1.clock <= clock @[Examples.scala 64:48]
    i1.reset <= reset @[Examples.scala 64:48]
    i0.in <= in @[Examples.scala 65:11]
    i1.in <= i0.out @[Examples.scala 66:11]
    out <= i1.out @[Examples.scala 67:9]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst AddTwo of AddTwo @[InstanceSpec.scala 457:55]
    AddTwo.clock <= clock
    AddTwo.reset <= reset

