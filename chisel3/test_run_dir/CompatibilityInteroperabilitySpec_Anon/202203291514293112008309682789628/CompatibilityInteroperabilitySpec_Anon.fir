circuit CompatibilityInteroperabilitySpec_Anon :
  module ChiselBundleModuleA :
    input clock : Clock
    input reset : UInt<1>
    output io : { a : UInt<32>, flip b : UInt<32>}

    clock is invalid
    reset is invalid
    io is invalid
    io.a <= UInt<7>("h7b") @[CompatibilityInteroperabilitySpec.scala 23:29]
    node _T = eq(io.b, UInt<7>("h7b")) @[CompatibilityInteroperabilitySpec.scala 24:36]
    node _T_1 = bits(reset, 0, 0) @[CompatibilityInteroperabilitySpec.scala 24:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[CompatibilityInteroperabilitySpec.scala 24:11]
    when _T_2 : @[CompatibilityInteroperabilitySpec.scala 24:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[CompatibilityInteroperabilitySpec.scala 24:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[CompatibilityInteroperabilitySpec.scala 24:11]
      when _T_3 : @[CompatibilityInteroperabilitySpec.scala 24:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at CompatibilityInteroperabilitySpec.scala:24 assert(io.elements(\"b\").asUInt === UInt(123))\n") : printf @[CompatibilityInteroperabilitySpec.scala 24:11]

  module Chisel3BundleModuleB :
    input clock : Clock
    input reset : Reset
    input io : { a : UInt<32>, flip b : UInt<32>}

    io.b <= io.a @[CompatibilityInteroperabilitySpec.scala 63:29]

  module CompatibilityInteroperabilitySpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst a of ChiselBundleModuleA @[CompatibilityInteroperabilitySpec.scala 194:21]
    a.clock is invalid
    a.reset is invalid
    a.io is invalid
    a.clock <= clock
    a.reset <= reset
    inst b of Chisel3BundleModuleB @[CompatibilityInteroperabilitySpec.scala 195:21]
    b.clock is invalid
    b.reset is invalid
    b.io is invalid
    b.clock <= clock
    b.reset <= reset
    b.io <- a.io @[CompatibilityInteroperabilitySpec.scala 196:12]
    node _T = bits(reset, 0, 0) @[CompatibilityInteroperabilitySpec.scala 197:11]
    node _T_1 = eq(_T, UInt<1>("h0")) @[CompatibilityInteroperabilitySpec.scala 197:11]
    when _T_1 : @[CompatibilityInteroperabilitySpec.scala 197:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[CompatibilityInteroperabilitySpec.scala 197:11]
