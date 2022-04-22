circuit Top :
  module HasEither :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 206:51]
    wire y : UInt<1> @[Examples.scala 207:50]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of HasEither @[InstanceSpec.scala 351:25]
    i.clock <= clock @[InstanceSpec.scala 351:25]
    i.reset <= reset @[InstanceSpec.scala 351:25]

