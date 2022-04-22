circuit Top :
  module HasSeq :
    input clock : Clock
    input reset : Reset

    wire x_0 : UInt<3> @[Examples.scala 198:37]
    wire x_1 : UInt<3> @[Examples.scala 198:37]
    wire x_2 : UInt<3> @[Examples.scala 198:37]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of HasSeq @[InstanceSpec.scala 273:25]
    i.clock <= clock @[InstanceSpec.scala 273:25]
    i.reset <= reset @[InstanceSpec.scala 273:25]

