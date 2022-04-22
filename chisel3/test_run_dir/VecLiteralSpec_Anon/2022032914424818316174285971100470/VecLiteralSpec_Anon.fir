circuit VecLiteralSpec_Anon :
  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire vec2 : UInt<8>[4] @[VecLiteralSpec.scala 177:25]
    vec2[0] <= UInt<8>("hdd") @[VecLiteralSpec.scala 177:25]
    vec2[1] <= UInt<8>("hcc") @[VecLiteralSpec.scala 177:25]
    vec2[2] <= UInt<8>("hbb") @[VecLiteralSpec.scala 177:25]
    vec2[3] <= UInt<8>("haa") @[VecLiteralSpec.scala 177:25]
    node lo = cat(UInt<16>("hcc"), UInt<16>("hdd")) @[VecLiteralSpec.scala 178:38]
    node hi = cat(UInt<16>("haa"), UInt<16>("hbb")) @[VecLiteralSpec.scala 178:38]
    node _T = cat(hi, lo) @[VecLiteralSpec.scala 178:38]
    node _T_1 = bits(reset, 0, 0) @[VecLiteralSpec.scala 178:13]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VecLiteralSpec.scala 178:13]
    when _T_2 : @[VecLiteralSpec.scala 178:13]
      printf(clock, UInt<1>("h1"), "vec1 %x\n", _T) : printf @[VecLiteralSpec.scala 178:13]
    node lo_1 = cat(vec2[1], vec2[0]) @[VecLiteralSpec.scala 179:38]
    node hi_1 = cat(vec2[3], vec2[2]) @[VecLiteralSpec.scala 179:38]
    node _T_3 = cat(hi_1, lo_1) @[VecLiteralSpec.scala 179:38]
    node _T_4 = bits(reset, 0, 0) @[VecLiteralSpec.scala 179:13]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[VecLiteralSpec.scala 179:13]
    when _T_5 : @[VecLiteralSpec.scala 179:13]
      printf(clock, UInt<1>("h1"), "vec2 %x\n", _T_3) : printf_1 @[VecLiteralSpec.scala 179:13]
    node _T_6 = bits(reset, 0, 0) @[VecLiteralSpec.scala 180:11]
    node _T_7 = eq(_T_6, UInt<1>("h0")) @[VecLiteralSpec.scala 180:11]
    when _T_7 : @[VecLiteralSpec.scala 180:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 180:11]
