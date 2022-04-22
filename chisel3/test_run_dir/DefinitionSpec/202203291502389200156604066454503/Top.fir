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

  module AddOne_2 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOneWithNested :
    input clock : Clock
    input reset : Reset
    input in : UInt<4>
    output out : UInt<4>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 48:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 48:15]
    out <= _out_T_1 @[Examples.scala 48:9]

  module AddOne_3 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOne_4 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOne_5 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOneWithNested_1 :
    input clock : Clock
    input reset : Reset
    input in : UInt<5>
    output out : UInt<5>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 48:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 48:15]
    out <= _out_T_1 @[Examples.scala 48:9]

  module AddOne_6 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOne_7 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOne_8 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOneWithNested_2 :
    input clock : Clock
    input reset : Reset
    input in : UInt<6>
    output out : UInt<6>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 48:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 48:15]
    out <= _out_T_1 @[Examples.scala 48:9]

  module AddOne_9 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOne_10 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOne_11 :
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>

    wire innerWire : UInt<32> @[Examples.scala 16:33]
    node _innerWire_T = add(in, UInt<1>("h1")) @[Examples.scala 17:21]
    node _innerWire_T_1 = tail(_innerWire_T, 1) @[Examples.scala 17:21]
    innerWire <= _innerWire_T_1 @[Examples.scala 17:15]
    out <= innerWire @[Examples.scala 18:9]

  module AddOneWithNested_3 :
    input clock : Clock
    input reset : Reset
    input in : UInt<7>
    output out : UInt<7>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 48:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 48:15]
    out <= _out_T_1 @[Examples.scala 48:9]

  module AddTwoWithNested :
    input clock : Clock
    input reset : Reset
    input in : UInt<4>
    output out : UInt<4>

    inst addOnes_0 of AddOneWithNested @[DefinitionSpec.scala 81:38]
    addOnes_0.clock <= clock @[DefinitionSpec.scala 81:38]
    addOnes_0.reset <= reset @[DefinitionSpec.scala 81:38]
    inst addOnes_1 of AddOneWithNested_1 @[DefinitionSpec.scala 81:38]
    addOnes_1.clock <= clock @[DefinitionSpec.scala 81:38]
    addOnes_1.reset <= reset @[DefinitionSpec.scala 81:38]
    inst addOnes_2 of AddOneWithNested_2 @[DefinitionSpec.scala 81:38]
    addOnes_2.clock <= clock @[DefinitionSpec.scala 81:38]
    addOnes_2.reset <= reset @[DefinitionSpec.scala 81:38]
    inst addOnes_3 of AddOneWithNested_3 @[DefinitionSpec.scala 81:38]
    addOnes_3.clock <= clock @[DefinitionSpec.scala 81:38]
    addOnes_3.reset <= reset @[DefinitionSpec.scala 81:38]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst k of AddTwoWithNested @[DefinitionSpec.scala 75:23]
    k.clock <= clock
    k.reset <= reset

