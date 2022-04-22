circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _r_WIRE : UInt<1>
    _r_WIRE is invalid
    reg r : UInt<1>, clock with :
      reset => (reset, _r_WIRE) @[VecLiteralSpec.scala 406:24]
    node _r_T = bits(reset, 0, 0) @[VecLiteralSpec.scala 407:20]
    r <= _r_T @[VecLiteralSpec.scala 407:11]
    node _T = bits(reset, 0, 0) @[VecLiteralSpec.scala 408:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[VecLiteralSpec.scala 408:15]
    when _T_1 : @[VecLiteralSpec.scala 408:15]
      printf(clock, UInt<1>("h1"), "r = %d\n", r) : printf @[VecLiteralSpec.scala 408:15]
    node _T_2 = bits(reset, 0, 0) @[VecLiteralSpec.scala 409:13]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[VecLiteralSpec.scala 409:13]
    when _T_3 : @[VecLiteralSpec.scala 409:13]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 409:13]
