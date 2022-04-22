circuit Top :
  module LazyVal :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 181:25]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst lv of LazyVal @[InstanceSpec.scala 246:26]
    lv.clock <= clock @[InstanceSpec.scala 246:26]
    lv.reset <= reset @[InstanceSpec.scala 246:26]

