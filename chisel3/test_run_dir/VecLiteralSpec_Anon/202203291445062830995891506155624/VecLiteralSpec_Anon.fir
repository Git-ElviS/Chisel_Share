circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _r_WIRE : UInt<11>[3]
    _r_WIRE[0] <= UInt<11>("ha")
    _r_WIRE[1] is invalid
    _r_WIRE[2] <= UInt<11>("hc")
    reg r : UInt<11>[3], clock with :
      reset => (reset, _r_WIRE) @[VecLiteralSpec.scala 382:24]
    node hi = cat(r[2], r[1]) @[VecLiteralSpec.scala 383:17]
    node _T = cat(hi, r[0]) @[VecLiteralSpec.scala 383:17]
    node _T_1 = add(_T, UInt<1>("h1")) @[VecLiteralSpec.scala 383:24]
    node _T_2 = tail(_T_1, 1) @[VecLiteralSpec.scala 383:24]
    wire _WIRE : UInt<11>[3] @[VecLiteralSpec.scala 383:39]
    wire _WIRE_1 : UInt<33>
    _WIRE_1 <= _T_2
    node _T_3 = bits(_WIRE_1, 10, 0) @[VecLiteralSpec.scala 383:39]
    _WIRE[0] <= _T_3 @[VecLiteralSpec.scala 383:39]
    node _T_4 = bits(_WIRE_1, 21, 11) @[VecLiteralSpec.scala 383:39]
    _WIRE[1] <= _T_4 @[VecLiteralSpec.scala 383:39]
    node _T_5 = bits(_WIRE_1, 32, 22) @[VecLiteralSpec.scala 383:39]
    _WIRE[2] <= _T_5 @[VecLiteralSpec.scala 383:39]
    r <= _WIRE @[VecLiteralSpec.scala 383:11]
    node _T_6 = eq(r[0], UInt<4>("ha")) @[VecLiteralSpec.scala 385:29]
    node _T_7 = bits(reset, 0, 0) @[VecLiteralSpec.scala 385:23]
    node _T_8 = eq(_T_7, UInt<1>("h0")) @[VecLiteralSpec.scala 385:23]
    when _T_8 : @[VecLiteralSpec.scala 385:23]
      assert(clock, _T_6, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 385:23]
      node _T_9 = eq(_T_6, UInt<1>("h0")) @[VecLiteralSpec.scala 385:23]
      when _T_9 : @[VecLiteralSpec.scala 385:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:385 chisel3.assert(r(0) === 0xa.U)\n") : printf @[VecLiteralSpec.scala 385:23]
    node _T_10 = eq(r[2], UInt<4>("hc")) @[VecLiteralSpec.scala 386:29]
    node _T_11 = bits(reset, 0, 0) @[VecLiteralSpec.scala 386:23]
    node _T_12 = eq(_T_11, UInt<1>("h0")) @[VecLiteralSpec.scala 386:23]
    when _T_12 : @[VecLiteralSpec.scala 386:23]
      assert(clock, _T_10, UInt<1>("h1"), "") : assert_1 @[VecLiteralSpec.scala 386:23]
      node _T_13 = eq(_T_10, UInt<1>("h0")) @[VecLiteralSpec.scala 386:23]
      when _T_13 : @[VecLiteralSpec.scala 386:23]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:386 chisel3.assert(r(2) === 0xc.U)\n") : printf_1 @[VecLiteralSpec.scala 386:23]
    node _T_14 = bits(reset, 0, 0) @[VecLiteralSpec.scala 387:13]
    node _T_15 = eq(_T_14, UInt<1>("h0")) @[VecLiteralSpec.scala 387:13]
    when _T_15 : @[VecLiteralSpec.scala 387:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 387:13]
