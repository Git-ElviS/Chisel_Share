circuit Top :
  module HasMems :
    input clock : Clock
    input reset : Reset

    cmem mem : UInt<32> [8] @[Examples.scala 271:26]
    smem syncReadMem : UInt<32> [8] @[Examples.scala 272:42]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of HasMems @[InstanceSpec.scala 396:25]
    i.clock <= clock @[InstanceSpec.scala 396:25]
    i.reset <= reset @[InstanceSpec.scala 396:25]

