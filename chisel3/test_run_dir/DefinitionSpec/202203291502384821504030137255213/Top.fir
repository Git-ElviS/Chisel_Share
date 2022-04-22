circuit Top :
  module HasUninferredReset :
    input clock : Clock
    input reset : Reset
    input in : UInt<3>
    output out : UInt<3>

    reg out_REG : UInt, clock with :
      reset => (UInt<1>("h0"), out_REG) @[Examples.scala 243:19]
    out_REG <= in @[Examples.scala 243:19]
    out <= out_REG @[Examples.scala 243:9]

  module Top :
    input clock : Clock
    input reset : AsyncReset

    inst i0 of HasUninferredReset @[DefinitionSpec.scala 37:26]
    i0.clock <= clock @[DefinitionSpec.scala 37:26]
    i0.reset <= reset @[DefinitionSpec.scala 37:26]
    i0.in <= UInt<1>("h0") @[DefinitionSpec.scala 38:15]

