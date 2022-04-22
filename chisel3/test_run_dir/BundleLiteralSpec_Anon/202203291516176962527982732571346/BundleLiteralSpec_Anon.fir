circuit BundleLiteralSpec_Anon :
  module BundleLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _r_WIRE : { a : UInt<8>, b : UInt<1>, c : UInt<1>}
    _r_WIRE.c <= UInt<1>("h1")
    _r_WIRE.b <= UInt<1>("h1")
    _r_WIRE.a <= UInt<6>("h2a")
    reg r : { a : UInt<8>, b : UInt<1>, c : UInt<1>}, clock with :
      reset => (reset, _r_WIRE) @[BundleLiteralSpec.scala 209:24]
    node _r_T = asUInt(r.c) @[BundleLiteralSpec.scala 210:17]
    node r_hi = cat(r.a, r.b) @[BundleLiteralSpec.scala 210:17]
    node _r_T_1 = cat(r_hi, _r_T) @[BundleLiteralSpec.scala 210:17]
    node _r_T_2 = add(_r_T_1, UInt<1>("h1")) @[BundleLiteralSpec.scala 210:24]
    node _r_T_3 = tail(_r_T_2, 1) @[BundleLiteralSpec.scala 210:24]
    wire _r_WIRE_1 : { a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 210:39]
    wire _r_WIRE_2 : UInt<10>
    _r_WIRE_2 <= _r_T_3
    node _r_T_4 = bits(_r_WIRE_2, 0, 0) @[BundleLiteralSpec.scala 210:39]
    wire _r_WIRE_3 : UInt<1> @[BundleLiteralSpec.scala 210:39]
    _r_WIRE_3 <= _r_T_4 @[BundleLiteralSpec.scala 210:39]
    wire _r_WIRE_4 : UInt<1> @[BundleLiteralSpec.scala 210:39]
    _r_WIRE_4 <= _r_WIRE_3 @[BundleLiteralSpec.scala 210:39]
    _r_WIRE_1.c <= _r_WIRE_4 @[BundleLiteralSpec.scala 210:39]
    node _r_T_5 = bits(_r_WIRE_2, 1, 1) @[BundleLiteralSpec.scala 210:39]
    _r_WIRE_1.b <= _r_T_5 @[BundleLiteralSpec.scala 210:39]
    node _r_T_6 = bits(_r_WIRE_2, 9, 2) @[BundleLiteralSpec.scala 210:39]
    _r_WIRE_1.a <= _r_T_6 @[BundleLiteralSpec.scala 210:39]
    r <= _r_WIRE_1 @[BundleLiteralSpec.scala 210:11]
    node _T = eq(r.a, UInt<6>("h2a")) @[BundleLiteralSpec.scala 213:28]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 213:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleLiteralSpec.scala 213:23]
    when _T_2 : @[BundleLiteralSpec.scala 213:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleLiteralSpec.scala 213:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleLiteralSpec.scala 213:23]
      when _T_3 : @[BundleLiteralSpec.scala 213:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:213 chisel3.assert(r.a === 42.U)\n") : printf @[BundleLiteralSpec.scala 213:23]
    node _T_4 = eq(r.b, UInt<1>("h1")) @[BundleLiteralSpec.scala 214:28]
    node _T_5 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 214:23]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BundleLiteralSpec.scala 214:23]
    when _T_6 : @[BundleLiteralSpec.scala 214:23]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BundleLiteralSpec.scala 214:23]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BundleLiteralSpec.scala 214:23]
      when _T_7 : @[BundleLiteralSpec.scala 214:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:214 chisel3.assert(r.b === true.B)\n") : printf_1 @[BundleLiteralSpec.scala 214:23]
    node _T_8 = eq(r.c, UInt<1>("h1")) @[BundleLiteralSpec.scala 215:28]
    node _T_9 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 215:23]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[BundleLiteralSpec.scala 215:23]
    when _T_10 : @[BundleLiteralSpec.scala 215:23]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[BundleLiteralSpec.scala 215:23]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[BundleLiteralSpec.scala 215:23]
      when _T_11 : @[BundleLiteralSpec.scala 215:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleLiteralSpec.scala:215 chisel3.assert(r.c === MyEnum.sB)\n") : printf_2 @[BundleLiteralSpec.scala 215:23]
    node _T_12 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 216:13]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[BundleLiteralSpec.scala 216:13]
    when _T_13 : @[BundleLiteralSpec.scala 216:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleLiteralSpec.scala 216:13]
