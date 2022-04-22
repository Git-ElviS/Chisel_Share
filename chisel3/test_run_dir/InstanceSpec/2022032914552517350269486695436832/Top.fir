circuit Top :
  module HasList :
    input clock : Clock
    input reset : Reset

    wire x_0 : UInt<3> @[Examples.scala 193:38]
    wire x_1 : UInt<3> @[Examples.scala 193:38]
    wire x_2 : UInt<3> @[Examples.scala 193:38]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of HasList @[InstanceSpec.scala 265:25]
    i.clock <= clock @[InstanceSpec.scala 265:25]
    i.reset <= reset @[InstanceSpec.scala 265:25]

