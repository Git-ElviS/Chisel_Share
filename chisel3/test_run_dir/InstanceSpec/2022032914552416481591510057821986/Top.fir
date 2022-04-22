circuit Top :
  module ViewerParent :
    input clock : Clock
    input reset : Reset

    skip

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst parent of ViewerParent @[InstanceSpec.scala 215:30]
    parent.clock <= clock @[InstanceSpec.scala 215:30]
    parent.reset <= reset @[InstanceSpec.scala 215:30]

