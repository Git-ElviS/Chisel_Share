circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _x_WIRE : UInt<1>
    _x_WIRE is invalid
    node x = or(_x_WIRE, UInt<1>("h1")) @[VecLiteralSpec.scala 417:58]
    node _T = eq(x, UInt<1>("h1")) @[VecLiteralSpec.scala 418:26]
    node _T_1 = bits(reset, 0, 0) @[VecLiteralSpec.scala 418:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VecLiteralSpec.scala 418:23]
    when _T_2 : @[VecLiteralSpec.scala 418:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 418:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[VecLiteralSpec.scala 418:23]
      when _T_3 : @[VecLiteralSpec.scala 418:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:418 chisel3.assert(x === true.B)\n") : printf @[VecLiteralSpec.scala 418:23]
    node _T_4 = bits(reset, 0, 0) @[VecLiteralSpec.scala 419:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[VecLiteralSpec.scala 419:13]
    when _T_5 : @[VecLiteralSpec.scala 419:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 419:13]
