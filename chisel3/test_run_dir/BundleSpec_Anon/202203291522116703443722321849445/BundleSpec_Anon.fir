circuit BundleSpec_Anon :
  module _7_Anon :
    input clock : Clock
    input reset : Reset
    output io : { f : UInt<8>}

    io.f <= UInt<1>("h0") @[BundleSpec.scala 112:16]

  module BundleSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst m of _7_Anon @[BundleSpec.scala 106:23]
    m.clock <= clock
    m.reset <= reset
    node _T = bits(reset, 0, 0) @[BundleSpec.scala 114:13]
    node _T_1 = eq(_T, UInt<1>("h0")) @[BundleSpec.scala 114:13]
    when _T_1 : @[BundleSpec.scala 114:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleSpec.scala 114:13]
