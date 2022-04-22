circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire bundleWire : { a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 196:30]
    bundleWire.c is invalid @[BundleLiteralSpec.scala 198:20]
    bundleWire.b is invalid @[BundleLiteralSpec.scala 198:20]
    bundleWire.a <= UInt<6>("h2a") @[BundleLiteralSpec.scala 198:20]
    node _T = eq(bundleWire.a, UInt<6>("h2a")) @[BundleLiteralSpec.scala 200:37]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 200:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleLiteralSpec.scala 200:23]
    when _T_2 : @[BundleLiteralSpec.scala 200:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 200:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 200:23]
      when _T_3 : @[BundleLiteralSpec.scala 200:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:200 chisel3.assert(bundleWire.a === 42.U)\n") : printf @[BundleLiteralSpec.scala 200:23]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 201:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[BundleLiteralSpec.scala 201:13]
    when _T_5 : @[BundleLiteralSpec.scala 201:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 201:13]
