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
    input in : UInt<4>
    output out : UInt<4>

    node _out_T = add(in, UInt<1>("h1")) @[Examples.scala 42:15]
    node _out_T_1 = tail(_out_T, 1) @[Examples.scala 42:15]
    out <= _out_T_1 @[Examples.scala 42:9]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst addOne of AddOneParameterized @[DefinitionSpec.scala 66:30]
    addOne.clock <= clock @[DefinitionSpec.scala 66:30]
    addOne.reset <= reset @[DefinitionSpec.scala 66:30]
    inst otherAddOne of AddOneParameterized_1 @[DefinitionSpec.scala 67:33]
    otherAddOne.clock <= clock
    otherAddOne.reset <= reset

