circuit Top :
  module UsesParameters :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 188:25]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst up of UsesParameters @[InstanceSpec.scala 255:26]
    up.clock <= clock @[InstanceSpec.scala 255:26]
    up.reset <= reset @[InstanceSpec.scala 255:26]

