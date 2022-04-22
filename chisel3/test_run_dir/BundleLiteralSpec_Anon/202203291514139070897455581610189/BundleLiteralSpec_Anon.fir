circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = asUInt(UInt<1>("h1")) @[BundleLiteralSpec.scala 36:40]
    node hi = cat(UInt<6>("h2a"), UInt<1>("h0")) @[BundleLiteralSpec.scala 36:40]
    node _T_1 = cat(hi, _T) @[BundleLiteralSpec.scala 36:40]
    node _T_2 = eq(_T_1, UInt<8>("ha9")) @[BundleLiteralSpec.scala 36:43]
    node _T_3 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 36:23]
    node _T_4 = eq(_T_3, UInt<1>("h0")) @[BundleLiteralSpec.scala 36:23]
    when _T_4 : @[BundleLiteralSpec.scala 36:23]
      assert(clock, _T_2, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 36:23]
      node _T_5 = eq(_T_2, UInt<1>("h0")) @[BundleLiteralSpec.scala 36:23]
      when _T_5 : @[BundleLiteralSpec.scala 36:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:36 chisel3.assert(bundleLit.asUInt() === bundleLit.litOption.get.U) // sanity-check consistency with runtime\n") : printf @[BundleLiteralSpec.scala 36:23]
    node _T_6 = asUInt(asFixedPoint(UInt<16>("h48"), 4)) @[BundleLiteralSpec.scala 47:44]
    node _T_7 = asUInt(asSInt(UInt<32>("hf4110ff3"))) @[BundleLiteralSpec.scala 47:44]
    node hi_1 = cat(UInt<48>("hdeaddeadbeef"), _T_7) @[BundleLiteralSpec.scala 47:44]
    node _T_8 = cat(hi_1, _T_6) @[BundleLiteralSpec.scala 47:44]
    node _T_9 = eq(_T_8, UInt<96>("hdeaddeadbeeff4110ff30048")) @[BundleLiteralSpec.scala 47:47]
    node _T_10 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 47:23]
    node _T_11 = eq(_T_10, UInt<1>("h0")) @[BundleLiteralSpec.scala 47:23]
    when _T_11 : @[BundleLiteralSpec.scala 47:23]
      assert(clock, _T_9, UInt<1>("h1"), "") : assert_1 @[BundleLiteralSpec.scala 47:23]
      node _T_12 = eq(_T_9, UInt<1>("h0")) @[BundleLiteralSpec.scala 47:23]
      when _T_12 : @[BundleLiteralSpec.scala 47:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:47 chisel3.assert(longBundleLit.asUInt() === longBundleLit.litOption.get.U)\n") : printf_1 @[BundleLiteralSpec.scala 47:23]
    node _T_13 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 49:13]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[BundleLiteralSpec.scala 49:13]
    when _T_14 : @[BundleLiteralSpec.scala 49:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 49:13]
