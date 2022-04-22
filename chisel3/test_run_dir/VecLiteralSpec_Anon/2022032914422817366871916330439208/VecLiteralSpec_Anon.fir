circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire _y_WIRE : UInt<8>[4]
    _y_WIRE[0] <= UInt<8>("hab")
    _y_WIRE[1] <= UInt<8>("hcd")
    _y_WIRE[2] <= UInt<8>("hef")
    _y_WIRE[3] <= UInt<8>("hff")
    reg y : UInt<8>[4], clock with :
      reset => (reset, _y_WIRE) @[VecLiteralSpec.scala 167:22]
    node lo = cat(y[1], y[0]) @[VecLiteralSpec.scala 168:24]
    node hi = cat(y[3], y[2]) @[VecLiteralSpec.scala 168:24]
    node _T = cat(hi, lo) @[VecLiteralSpec.scala 168:24]
    node _T_1 = eq(_T, UInt<32>("hffefcdab")) @[VecLiteralSpec.scala 168:31]
    node _T_2 = bits(reset, 0, 0) @[VecLiteralSpec.scala 168:21]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[VecLiteralSpec.scala 168:21]
    when _T_3 : @[VecLiteralSpec.scala 168:21]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 168:21]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[VecLiteralSpec.scala 168:21]
      when _T_4 : @[VecLiteralSpec.scala 168:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:168 chisel3.assert(y.asUInt === BigInt(\"FFEFCDAB\", 16).U)\n") : printf @[VecLiteralSpec.scala 168:21]
    node _T_5 = bits(reset, 0, 0) @[VecLiteralSpec.scala 169:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[VecLiteralSpec.scala 169:11]
    when _T_6 : @[VecLiteralSpec.scala 169:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 169:11]
