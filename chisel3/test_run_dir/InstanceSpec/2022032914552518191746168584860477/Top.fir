circuit Top :
  module HasSubFieldAccess :
    input clock : Clock
    input reset : Reset
    input in : { valid : UInt<1>, bits : UInt<8>}

    skip

  module Top :
    input clock : Clock
    input reset : UInt<1>
    input input : { valid : UInt<1>, bits : UInt<8>}

    inst i of HasSubFieldAccess @[InstanceSpec.scala 316:25]
    i.clock <= clock @[InstanceSpec.scala 316:25]
    i.reset <= reset @[InstanceSpec.scala 316:25]
    i.in.valid <= input.valid @[InstanceSpec.scala 317:17]
    i.in.bits <= input.bits @[InstanceSpec.scala 318:16]

