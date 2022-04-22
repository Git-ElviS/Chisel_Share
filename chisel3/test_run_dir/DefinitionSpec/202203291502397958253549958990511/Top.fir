circuit Top :
  module ModuleWithCommonIntfX :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _sum_T = add(io.in, UInt<1>("h1")) @[DefinitionSpec.scala 441:31]
    node sum = tail(_sum_T, 1) @[DefinitionSpec.scala 441:31]
    io.out <= sum @[DefinitionSpec.scala 443:14]

  module ModuleWithCommonIntfY :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _sum_T = add(io.in, UInt<1>("h1")) @[DefinitionSpec.scala 441:31]
    node sum = tail(_sum_T, 1) @[DefinitionSpec.scala 441:31]
    io.out <= sum @[DefinitionSpec.scala 443:14]

  extmodule BlackBoxWithCommonIntf :
    input in : UInt<8>
    output out : UInt<8>
    defname = BlackBoxWithCommonIntf

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst ModuleWithCommonIntfY of ModuleWithCommonIntfY @[DefinitionSpec.scala 501:17]
    ModuleWithCommonIntfY.clock <= clock
    ModuleWithCommonIntfY.reset <= reset
    inst BlackBoxWithCommonIntf of BlackBoxWithCommonIntf @[DefinitionSpec.scala 502:17]
    BlackBoxWithCommonIntf.out is invalid
    BlackBoxWithCommonIntf.in is invalid

