circuit CompatibilityInteroperabilitySpec_Anon :
  module Child :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<1>, flip en : UInt<1>, out : UInt<1>}

    clock is invalid
    reset is invalid
    io is invalid
    node _T = mux(io.en, io.in, reset) @[CompatibilityInteroperabilitySpec.scala 250:22]
    io.out <= _T @[CompatibilityInteroperabilitySpec.scala 250:16]

  module CompatibilityInteroperabilitySpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<1>, flip en : UInt<1>, out : UInt<1>}

    clock is invalid
    reset is invalid
    io is invalid
    inst child of Child @[CompatibilityInteroperabilitySpec.scala 254:27]
    child.clock is invalid
    child.reset is invalid
    child.io is invalid
    child.clock <= clock
    child.reset <= reset
    io <- child.io @[CompatibilityInteroperabilitySpec.scala 255:12]

