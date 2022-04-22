circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _r_WIRE : UInt<1>
    _r_WIRE is invalid
    reg r : UInt<1>, clock with :
      reset => (reset, _r_WIRE) @[BundleLiteralSpec.scala 246:24]
    node _r_T = bits(reset, 0, 0) @[BundleLiteralSpec.scala 247:20]
    r <= _r_T @[BundleLiteralSpec.scala 247:11]
    node _T = bits(reset, 0, 0) @[BundleLiteralSpec.scala 248:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 248:15]
    when _T_1 : @[BundleLiteralSpec.scala 248:15]
      printf(clock, UInt<1>("h1"), "r = %d\n", r) : printf @[BundleLiteralSpec.scala 248:15]
    node _T_2 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 249:13]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[BundleLiteralSpec.scala 249:13]
    when _T_3 : @[BundleLiteralSpec.scala 249:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 249:13]
