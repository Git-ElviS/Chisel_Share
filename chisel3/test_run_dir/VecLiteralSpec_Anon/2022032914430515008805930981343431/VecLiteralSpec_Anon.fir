circuit VecLiteralSpec_Anon :
  module M1 :
    input clock : Clock
    input reset : Reset
    output out1 : UInt<64>
    output out2 : UInt<64>

    node out1_lo = cat(UInt<16>("hcc"), UInt<16>("hdd")) @[VecLiteralSpec.scala 190:18]
    node out1_hi = cat(UInt<16>("haa"), UInt<16>("hbb")) @[VecLiteralSpec.scala 190:18]
    node _out1_T = cat(out1_hi, out1_lo) @[VecLiteralSpec.scala 190:18]
    out1 <= _out1_T @[VecLiteralSpec.scala 190:12]
    wire v2 : UInt<16>[4] @[VecLiteralSpec.scala 192:23]
    v2[0] <= UInt<16>("hdd") @[VecLiteralSpec.scala 192:23]
    v2[1] <= UInt<8>("hcc") @[VecLiteralSpec.scala 192:23]
    v2[2] <= UInt<8>("hbb") @[VecLiteralSpec.scala 192:23]
    v2[3] <= UInt<8>("haa") @[VecLiteralSpec.scala 192:23]
    node out2_lo = cat(v2[1], v2[0]) @[VecLiteralSpec.scala 193:18]
    node out2_hi = cat(v2[3], v2[2]) @[VecLiteralSpec.scala 193:18]
    node _out2_T = cat(out2_hi, out2_lo) @[VecLiteralSpec.scala 193:18]
    out2 <= _out2_T @[VecLiteralSpec.scala 193:12]

  module VecLiteralSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst m of M1 @[VecLiteralSpec.scala 197:21]
    m.clock <= clock
    m.reset <= reset
    node _T = eq(m.out1, m.out2) @[VecLiteralSpec.scala 198:29]
    node _T_1 = bits(reset, 0, 0) @[VecLiteralSpec.scala 198:21]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[VecLiteralSpec.scala 198:21]
    when _T_2 : @[VecLiteralSpec.scala 198:21]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[VecLiteralSpec.scala 198:21]
      node _T_3 = eq(_T, UInt<1>("h0")) @[VecLiteralSpec.scala 198:21]
      when _T_3 : @[VecLiteralSpec.scala 198:21]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at VecLiteralSpec.scala:198 chisel3.assert(m.out1 === m.out2)\n") : printf @[VecLiteralSpec.scala 198:21]
    node _T_4 = bits(reset, 0, 0) @[VecLiteralSpec.scala 199:11]
    node _T_5 = eq(_T_4, UInt<1>("h0")) @[VecLiteralSpec.scala 199:11]
    when _T_5 : @[VecLiteralSpec.scala 199:11]
      stop(clock, UInt<1>("h1"), 0) : stop @[VecLiteralSpec.scala 199:11]
