circuit Top :
  module HasVec :
    input clock : Clock
    input reset : Reset

    wire x : { x : UInt<3>}[3] @[InstanceSpec.scala 510:29]

  module HasVec_1 :
    input clock : Clock
    input reset : Reset

    wire x : { x : UInt<3>}[3] @[InstanceSpec.scala 510:29]

  module InstantiatesHasVec :
    input clock : Clock
    input reset : Reset

    inst i0 of HasVec @[InstanceSpec.scala 514:34]
    i0.clock <= clock @[InstanceSpec.scala 514:34]
    i0.reset <= reset @[InstanceSpec.scala 514:34]
    inst i1 of HasVec_1 @[InstanceSpec.scala 515:32]
    i1.clock <= clock
    i1.reset <= reset

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of InstantiatesHasVec @[InstanceSpec.scala 518:25]
    i.clock <= clock @[InstanceSpec.scala 518:25]
    i.reset <= reset @[InstanceSpec.scala 518:25]

