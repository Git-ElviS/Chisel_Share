circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _x_WIRE : UInt<1>
    _x_WIRE is invalid
    node x = or(_x_WIRE, UInt<1>("h1")) @[BundleLiteralSpec.scala 257:51]
    node _T = eq(x, UInt<1>("h1")) @[BundleLiteralSpec.scala 258:26]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 258:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleLiteralSpec.scala 258:23]
    when _T_2 : @[BundleLiteralSpec.scala 258:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 258:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 258:23]
      when _T_3 : @[BundleLiteralSpec.scala 258:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:258 chisel3.assert(x === true.B)\n") : printf @[BundleLiteralSpec.scala 258:23]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 259:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[BundleLiteralSpec.scala 259:13]
    when _T_5 : @[BundleLiteralSpec.scala 259:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 259:13]
