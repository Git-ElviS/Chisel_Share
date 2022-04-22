circuit CompatibilityInteroperabilitySpec_Anon :
  module Chisel3ModuleChiselBundleA :
    input clock : Clock
    input reset : Reset
    output io : { a : UInt<32>, flip b : UInt<32>}

    io.a <= UInt<7>("h7b") @[CompatibilityInteroperabilitySpec.scala 58:29]
    node _T = eq(io.b, UInt<7>("h7b")) @[CompatibilityInteroperabilitySpec.scala 59:36]
    node _T_1 = asUInt(reset) @[CompatibilityInteroperabilitySpec.scala 59:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[CompatibilityInteroperabilitySpec.scala 59:11]
    when _T_2 : @[CompatibilityInteroperabilitySpec.scala 59:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[CompatibilityInteroperabilitySpec.scala 59:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[CompatibilityInteroperabilitySpec.scala 59:11]
      when _T_3 : @[CompatibilityInteroperabilitySpec.scala 59:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at CompatibilityInteroperabilitySpec.scala:59 assert(io.elements(\"b\").asUInt === 123.U)\n") : printf @[CompatibilityInteroperabilitySpec.scala 59:11]

  module Chisel3ModuleChiselBundleB :
    input clock : Clock
    input reset : Reset
    input io : { a : UInt<32>, flip b : UInt<32>}

    io.b <= io.a @[CompatibilityInteroperabilitySpec.scala 63:29]

  module CompatibilityInteroperabilitySpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst a of Chisel3ModuleChiselBundleA @[CompatibilityInteroperabilitySpec.scala 123:21]
    a.clock <= clock
    a.reset <= reset
    inst b of Chisel3ModuleChiselBundleB @[CompatibilityInteroperabilitySpec.scala 124:21]
    b.clock <= clock
    b.reset <= reset
    b.io <= a.io @[CompatibilityInteroperabilitySpec.scala 125:12]
    node _T = bits(reset, 0, 0) @[CompatibilityInteroperabilitySpec.scala 126:11]
    node _T_1 = eq(_T, UInt<1>("h0")) @[CompatibilityInteroperabilitySpec.scala 126:11]
    when _T_1 : @[CompatibilityInteroperabilitySpec.scala 126:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[CompatibilityInteroperabilitySpec.scala 126:11]
