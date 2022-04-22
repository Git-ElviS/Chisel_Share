circuit Top :
  module ModuleWithCommonIntf :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _sum_T = add(io.in, UInt<1>("h1")) @[DefinitionSpec.scala 441:31]
    node sum = tail(_sum_T, 1) @[DefinitionSpec.scala 441:31]
    io.out <= sum @[DefinitionSpec.scala 443:14]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

