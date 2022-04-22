circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = eq(UInt<6>("h2a"), UInt<6>("h2a")) @[BundleLiteralSpec.scala 107:36]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 107:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleLiteralSpec.scala 107:23]
    when _T_2 : @[BundleLiteralSpec.scala 107:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 107:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 107:23]
      when _T_3 : @[BundleLiteralSpec.scala 107:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:107 chisel3.assert(bundleLit.a === 42.U)\n") : printf @[BundleLiteralSpec.scala 107:23]
    wire bundleWire : { a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 109:30]
    bundleWire.c is invalid @[BundleLiteralSpec.scala 110:20]
    bundleWire.b is invalid @[BundleLiteralSpec.scala 110:20]
    bundleWire.a <= UInt<6>("h2a") @[BundleLiteralSpec.scala 110:20]
    node _T_4 = eq(bundleWire.a, UInt<6>("h2a")) @[BundleLiteralSpec.scala 112:37]
    node _T_5 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 112:23]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BundleLiteralSpec.scala 112:23]
    when _T_6 : @[BundleLiteralSpec.scala 112:23]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BundleLiteralSpec.scala 112:23]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BundleLiteralSpec.scala 112:23]
      when _T_7 : @[BundleLiteralSpec.scala 112:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:112 chisel3.assert(bundleWire.a === 42.U)\n") : printf_1 @[BundleLiteralSpec.scala 112:23]
    node _T_8 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 114:13]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[BundleLiteralSpec.scala 114:13]
    when _T_9 : @[BundleLiteralSpec.scala 114:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 114:13]
