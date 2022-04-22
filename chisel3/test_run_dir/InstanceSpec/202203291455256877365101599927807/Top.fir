circuit Top :
  module MultiVal :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 177:31]
    wire y : UInt<3> @[Examples.scala 177:48]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst mv of MultiVal @[InstanceSpec.scala 238:26]
    mv.clock <= clock @[InstanceSpec.scala 238:26]
    mv.reset <= reset @[InstanceSpec.scala 238:26]

