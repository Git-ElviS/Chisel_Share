circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg r : UInt<11>, clock with :
      reset => (reset, UInt<11>("ha")) @[VecLiteralSpec.scala 395:24]
    node _r_T = add(r, UInt<1>("h1")) @[VecLiteralSpec.scala 396:16]
    node _r_T_1 = tail(_r_T, 1) @[VecLiteralSpec.scala 396:16]
    r <= _r_T_1 @[VecLiteralSpec.scala 396:11]
    node _T = eq(r, UInt<4>("ha")) @[VecLiteralSpec.scala 397:26]
    node _T_1 = bits(reset, 0, 0) @[VecLiteralSpec.scala 397:23]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VecLiteralSpec.scala 397:23]
    when _T_2 : @[VecLiteralSpec.scala 397:23]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 397:23]
      node _T_3 = eq(_T, UInt<1>("h0")) @[VecLiteralSpec.scala 397:23]
      when _T_3 : @[VecLiteralSpec.scala 397:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:397 chisel3.assert(r === 0xa.U) // coming out of reset\n") : printf @[VecLiteralSpec.scala 397:23]
    node _T_4 = bits(reset, 0, 0) @[VecLiteralSpec.scala 398:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[VecLiteralSpec.scala 398:13]
    when _T_5 : @[VecLiteralSpec.scala 398:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 398:13]
