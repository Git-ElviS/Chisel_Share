circuit Top :
  module AddOneParameterized :
    input clock : Clock
    input reset : Reset
    input in : UInt<4>
    output out : UInt<4>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 42:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 42:15]
    out <= _out_T_1 @[Examples.scala 42:9]

  module AddOneParameterized_1 :
    input clock : Clock
    input reset : Reset
    input in : UInt<5>
    output out : UInt<5>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 42:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 42:15]
    out <= _out_T_1 @[Examples.scala 42:9]

  module AddOneParameterized_2 :
    input clock : Clock
    input reset : Reset
    input in : UInt<6>
    output out : UInt<6>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 42:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 42:15]
    out <= _out_T_1 @[Examples.scala 42:9]

  module AddOneParameterized_3 :
    input clock : Clock
    input reset : Reset
    input in : UInt<7>
    output out : UInt<7>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 42:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 42:15]
    out <= _out_T_1 @[Examples.scala 42:9]

  module AddTwoParameterized :
    input clock : Clock
    input reset : Reset
    input in : UInt<4>
    output out : UInt<4>

    inst addOnes_0 of AddOneParameterized @[DefinitionSpec.scala 51:38]
    addOnes_0.clock <= clock @[DefinitionSpec.scala 51:38]
    addOnes_0.reset <= reset @[DefinitionSpec.scala 51:38]
    inst addOnes_1 of AddOneParameterized_1 @[DefinitionSpec.scala 51:38]
    addOnes_1.clock <= clock @[DefinitionSpec.scala 51:38]
    addOnes_1.reset <= reset @[DefinitionSpec.scala 51:38]
    inst addOnes_2 of AddOneParameterized_2 @[DefinitionSpec.scala 51:38]
    addOnes_2.clock <= clock @[DefinitionSpec.scala 51:38]
    addOnes_2.reset <= reset @[DefinitionSpec.scala 51:38]
    inst addOnes_3 of AddOneParameterized_3 @[DefinitionSpec.scala 51:38]
    addOnes_3.clock <= clock @[DefinitionSpec.scala 51:38]
    addOnes_3.reset <= reset @[DefinitionSpec.scala 51:38]
    addOnes_0.in <= in @[Examples.scala 86:21]
    out <= addOnes_3.out @[Examples.scala 87:9]
    addOnes_1.in <= addOnes_0.out @[Examples.scala 88:70]
    addOnes_2.in <= addOnes_1.out @[Examples.scala 88:70]
    addOnes_3.in <= addOnes_2.out @[Examples.scala 88:70]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst k of AddTwoParameterized @[DefinitionSpec.scala 45:23]
    k.clock <= clock
    k.reset <= reset

