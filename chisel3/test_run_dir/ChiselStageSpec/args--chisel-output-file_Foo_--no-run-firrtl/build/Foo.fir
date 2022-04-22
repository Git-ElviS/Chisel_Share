circuit SameTypesModule :
  module SameTypesModule :
    input clock : Clock
    input reset : UInt<1>
    input in : UInt<1>
    output out : UInt<1>

    out <= in @[ChiselMainSpec.scala 32:9]

