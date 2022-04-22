circuit Top :
  module AggregatePortModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Examples.scala 114:12]

  module HasCMAR :
    input clock : Clock
    input reset : Reset
    input in : UInt<8>
    output out : UInt<8>

    inst m of AggregatePortModule @[InstanceSpec.scala 879:31]
    m.clock <= clock
    m.reset <= reset
    inst c of AggregatePortModule @[InstanceSpec.scala 880:57]
    c.clock <= clock @[InstanceSpec.scala 880:57]
    c.reset <= reset @[InstanceSpec.scala 880:57]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst i of HasCMAR @[InstanceSpec.scala 883:25]
    i.clock <= clock @[InstanceSpec.scala 883:25]
    i.reset <= reset @[InstanceSpec.scala 883:25]

