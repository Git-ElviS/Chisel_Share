circuit Top :
  module HasTypeParams :
    input clock : Clock
    input reset : Reset

    wire blah : UInt<3> @[Examples.scala 256:28]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i0 of HasTypeParams @[InstanceSpec.scala 192:26]
    i0.clock <= clock @[InstanceSpec.scala 192:26]
    i0.reset <= reset @[InstanceSpec.scala 192:26]

