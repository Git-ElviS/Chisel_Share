circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg r : UInt, clock with :
      reset => (reset, UInt<6>("h2a")) @[BundleLiteralSpec.scala 235:24]
    node _r_T = add(r, UInt<1>("h1")) @[BundleLiteralSpec.scala 236:16]
    node _r_T_1 = tail(_r_T, 1) @[BundleLiteralSpec.scala 236:16]
    r <= _r_T_1 @[BundleLiteralSpec.scala 236:11]
    node _T = eq(r, UInt<6>("h2a")) @[BundleLiteralSpec.scala 237:26]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 237:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleLiteralSpec.scala 237:23]
    when _T_2 : @[BundleLiteralSpec.scala 237:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 237:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 237:23]
      when _T_3 : @[BundleLiteralSpec.scala 237:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:237 chisel3.assert(r === 42.U) // coming out of reset\n") : printf @[BundleLiteralSpec.scala 237:23]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 238:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[BundleLiteralSpec.scala 238:13]
    when _T_5 : @[BundleLiteralSpec.scala 238:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 238:13]
