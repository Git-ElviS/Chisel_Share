circuit Top :
  module Top :
    output port : { flip foo : { flip bar : UInt<8>}}

    wire wire : { flip foo : { flip bar : UInt<8>}} @[CompatibilityInteroperabilitySpec.scala 343:22]
    port is invalid @[CompatibilityInteroperabilitySpec.scala 344:12]
    wire is invalid @[CompatibilityInteroperabilitySpec.scala 345:12]
    port <= wire @[CompatibilityInteroperabilitySpec.scala 346:12]
    port <= wire @[CompatibilityInteroperabilitySpec.scala 347:12]
    wire.foo <= port.foo @[CompatibilityInteroperabilitySpec.scala 348:16]
    wire.foo <= port.foo @[CompatibilityInteroperabilitySpec.scala 349:16]

