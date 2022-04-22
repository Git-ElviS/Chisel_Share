circuit Top :
  module ModuleWithCommonIntf :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _sum_T = add(io.in, UInt<1>("h1")) @[InstanceSpec.scala 559:31]
    node sum = tail(_sum_T, 1) @[InstanceSpec.scala 559:31]
    io.out <= sum @[InstanceSpec.scala 561:14]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of ModuleWithCommonIntf @[InstanceSpec.scala 584:57]
    i.clock <= clock @[InstanceSpec.scala 584:57]
    i.reset <= reset @[InstanceSpec.scala 584:57]

