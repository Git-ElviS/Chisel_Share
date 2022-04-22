circuit AddFour :
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

  module AddOne_1 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddTwoMixedModules :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    inst i0 of AddOne @[Examples.scala 74:48]
    i0.clock <= clock @[Examples.scala 74:48]
    i0.reset <= reset @[Examples.scala 74:48]
    inst i1 of AddOne_1 @[Examples.scala 75:28]
    i1.clock <= clock
    i1.reset <= reset
    i0.in <= in @[Examples.scala 76:11]
    i1.in <= i0.out @[Examples.scala 77:11]
    out <= i1.out @[Examples.scala 78:9]

  module AddFour :
    input clock : Clock
    input reset : UInt<1>
    input in : UInt<32>
    output out : UInt<32>

    inst i0 of AddTwoMixedModules @[Examples.scala 102:30]
    i0.clock <= clock @[Examples.scala 102:30]
    i0.reset <= reset @[Examples.scala 102:30]
    inst i1 of AddTwoMixedModules @[Examples.scala 103:30]
    i1.clock <= clock @[Examples.scala 103:30]
    i1.reset <= reset @[Examples.scala 103:30]
    i0.in <= in @[Examples.scala 104:11]
    i1.in <= i0.out @[Examples.scala 105:11]
    out <= i1.out @[Examples.scala 106:9]

