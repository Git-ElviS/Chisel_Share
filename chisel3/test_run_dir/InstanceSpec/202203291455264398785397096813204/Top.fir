circuit Top :
  module ModuleWithCommonIntfX :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _sum_T = add(io.in, UInt<1>("h1")) @[InstanceSpec.scala 559:31]
    node sum = tail(_sum_T, 1) @[InstanceSpec.scala 559:31]
    io.out <= sum @[InstanceSpec.scala 561:14]

  module ModuleWithCommonIntfY :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _sum_T = add(io.in, UInt<1>("h1")) @[InstanceSpec.scala 559:31]
    node sum = tail(_sum_T, 1) @[InstanceSpec.scala 559:31]
    io.out <= sum @[InstanceSpec.scala 561:14]

  extmodule BlackBoxWithCommonIntf :
    input in : UInt<8>
    output out : UInt<8>
    defname = BlackBoxWithCommonIntf

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst ModuleWithCommonIntfY of ModuleWithCommonIntfY @[InstanceSpec.scala 618:17]
    ModuleWithCommonIntfY.clock <= clock
    ModuleWithCommonIntfY.reset <= reset
    inst BlackBoxWithCommonIntf of BlackBoxWithCommonIntf @[InstanceSpec.scala 619:17]
    BlackBoxWithCommonIntf.out is invalid
    BlackBoxWithCommonIntf.in is invalid
    inst insts_2 of ModuleWithCommonIntfX @[InstanceSpec.scala 620:19]
    insts_2.clock <= clock @[InstanceSpec.scala 620:19]
    insts_2.reset <= reset @[InstanceSpec.scala 620:19]

