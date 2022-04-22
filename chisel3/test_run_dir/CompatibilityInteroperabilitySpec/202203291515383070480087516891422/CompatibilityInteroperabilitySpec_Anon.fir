circuit CompatibilityInteroperabilitySpec_Anon :
  module OldMod :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<8>, out : UInt<8>}

    clock is invalid
    reset is invalid
    io is invalid
    reg io_out_REG : UInt, clock with :
      reset => (UInt<1>("h0"), io_out_REG) @[CompatibilityInteroperabilitySpec.scala 270:24]
    io_out_REG <= io.in @[CompatibilityInteroperabilitySpec.scala 270:24]
    io.out <= io_out_REG @[CompatibilityInteroperabilitySpec.scala 270:18]

  module _20_Anon :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    inst inst of OldMod @[CompatibilityInteroperabilitySpec.scala 279:28]
    inst.clock <= clock
    inst.reset <= reset
    io <- inst.io @[CompatibilityInteroperabilitySpec.scala 280:14]

  module CompatibilityInteroperabilitySpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<8>, out : UInt<8>}

    inst _20_Anon of _20_Anon @[CompatibilityInteroperabilitySpec.scala 277:21]
    _20_Anon.clock <= clock
    _20_Anon.reset <= reset
    io <- _20_Anon.io @[CompatibilityInteroperabilitySpec.scala 277:12]

