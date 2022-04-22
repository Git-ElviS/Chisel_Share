circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = eq(UInt<16>("hdd"), UInt<8>("hdd")) @[VecLiteralSpec.scala 208:41]
    node _T_1 = bits(reset, 0, 0) @[VecLiteralSpec.scala 208:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VecLiteralSpec.scala 208:23]
    when _T_2 : @[VecLiteralSpec.scala 208:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 208:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[VecLiteralSpec.scala 208:23]
      when _T_3 : @[VecLiteralSpec.scala 208:23]
        printf(clock, UInt<1>("h1"), "Assertion failed: v(0)\n    at VecLiteralSpec.scala:208 chisel3.assert(outsideVecLit(0) === 0xdd.U, s\"v(0)\")\n") : printf @[VecLiteralSpec.scala 208:23]
    node _T_4 = bits(reset, 0, 0) @[VecLiteralSpec.scala 209:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[VecLiteralSpec.scala 209:13]
    when _T_5 : @[VecLiteralSpec.scala 209:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 209:13]
