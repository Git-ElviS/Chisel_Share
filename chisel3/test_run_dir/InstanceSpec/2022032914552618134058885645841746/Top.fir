circuit Top :
  module HasVec :
    input clock : Clock
    input reset : Reset

    wire x : UInt<2>[3] @[Examples.scala 217:28]
    x[0] <= UInt<1>("h1") @[Examples.scala 217:28]
    x[1] <= UInt<2>("h2") @[Examples.scala 217:28]
    x[2] <= UInt<2>("h3") @[Examples.scala 217:28]

  module HasVec_1 :
    input clock : Clock
    input reset : Reset

    wire x : UInt<2>[3] @[Examples.scala 217:28]
    x[0] <= UInt<1>("h1") @[Examples.scala 217:28]
    x[1] <= UInt<2>("h2") @[Examples.scala 217:28]
    x[2] <= UInt<2>("h3") @[Examples.scala 217:28]

  module InstantiatesHasVec :
    input clock : Clock
    input reset : Reset

    inst i0 of HasVec @[Examples.scala 236:30]
    i0.clock <= clock @[Examples.scala 236:30]
    i0.reset <= reset @[Examples.scala 236:30]
    inst i1 of HasVec_1 @[Examples.scala 237:28]
    i1.clock <= clock
    i1.reset <= reset

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of InstantiatesHasVec @[InstanceSpec.scala 498:25]
    i.clock <= clock @[InstanceSpec.scala 498:25]
    i.reset <= reset @[InstanceSpec.scala 498:25]

