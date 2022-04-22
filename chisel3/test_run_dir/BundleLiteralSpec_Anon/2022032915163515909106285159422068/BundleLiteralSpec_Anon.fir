circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _r_WIRE : { a : UInt<8>, b : UInt<1>, c : UInt<1>}
    _r_WIRE.c is invalid
    _r_WIRE.b is invalid
    _r_WIRE.a <= UInt<6>("h2a")
    reg r : { a : UInt<8>, b : UInt<1>, c : UInt<1>}, clock with :
      reset => (reset, _r_WIRE) @[BundleLiteralSpec.scala 224:24]
    node _r_a_T = add(r.a, UInt<1>("h1")) @[BundleLiteralSpec.scala 225:20]
    node _r_a_T_1 = tail(_r_a_T, 1) @[BundleLiteralSpec.scala 225:20]
    r.a <= _r_a_T_1 @[BundleLiteralSpec.scala 225:13]
    node _T = eq(r.a, UInt<6>("h2a")) @[BundleLiteralSpec.scala 226:28]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 226:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleLiteralSpec.scala 226:23]
    when _T_2 : @[BundleLiteralSpec.scala 226:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 226:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 226:23]
      when _T_3 : @[BundleLiteralSpec.scala 226:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:226 chisel3.assert(r.a === 42.U) // coming out of reset\n") : printf @[BundleLiteralSpec.scala 226:23]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 227:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[BundleLiteralSpec.scala 227:13]
    when _T_5 : @[BundleLiteralSpec.scala 227:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 227:13]
