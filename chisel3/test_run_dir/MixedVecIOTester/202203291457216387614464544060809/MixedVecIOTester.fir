circuit MixedVecIOTester :
  module MixedVecIOPassthroughModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { 3 : SInt<3>, 2 : UInt<10>, 1 : UInt<8>, 0 : UInt<1>}, out : { 3 : SInt<3>, 2 : UInt<10>, 1 : UInt<8>, 0 : UInt<1>}}

    io.out.0 <= io.in.0 @[MixedVec.scala 117:9]
    io.out.1 <= io.in.1 @[MixedVec.scala 117:9]
    io.out.2 <= io.in.2 @[MixedVec.scala 117:9]
    io.out.3 <= io.in.3 @[MixedVec.scala 117:9]

  module MixedVecIOTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire v : { 3 : SInt<3>, 2 : UInt<10>, 1 : UInt<8>, 0 : UInt<1>} @[MixedVec.scala 28:26]
    v.0 <= UInt<1>("h1") @[MixedVec.scala 31:9]
    v.1 <= UInt<8>("ha8") @[MixedVec.scala 31:9]
    v.2 <= UInt<10>("h378") @[MixedVec.scala 31:9]
    v.3 <= asSInt(UInt<3>("h5")) @[MixedVec.scala 31:9]
    inst dut of MixedVecIOPassthroughModule @[MixedVecSpec.scala 48:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.0 <= v.0 @[MixedVec.scala 117:9]
    dut.io.in.1 <= v.1 @[MixedVec.scala 117:9]
    dut.io.in.2 <= v.2 @[MixedVec.scala 117:9]
    dut.io.in.3 <= v.3 @[MixedVec.scala 117:9]
    node _T = eq(dut.io.out.0, UInt<1>("h1")) @[MixedVecSpec.scala 51:21]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
    when _T_2 : @[MixedVecSpec.scala 51:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MixedVecSpec.scala 51:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
      when _T_3 : @[MixedVecSpec.scala 51:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") : printf @[MixedVecSpec.scala 51:11]
    node _T_4 = eq(dut.io.out.1, UInt<8>("ha8")) @[MixedVecSpec.scala 51:21]
    node _T_5 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
    when _T_6 : @[MixedVecSpec.scala 51:11]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[MixedVecSpec.scala 51:11]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
      when _T_7 : @[MixedVecSpec.scala 51:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") : printf_1 @[MixedVecSpec.scala 51:11]
    node _T_8 = eq(dut.io.out.2, UInt<10>("h378")) @[MixedVecSpec.scala 51:21]
    node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
    when _T_10 : @[MixedVecSpec.scala 51:11]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[MixedVecSpec.scala 51:11]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
      when _T_11 : @[MixedVecSpec.scala 51:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") : printf_2 @[MixedVecSpec.scala 51:11]
    node _T_12 = asUInt(dut.io.out.3) @[MixedVecSpec.scala 51:14]
    node _T_13 = asUInt(asSInt(UInt<3>("h5"))) @[MixedVecSpec.scala 51:27]
    node _T_14 = eq(_T_12, _T_13) @[MixedVecSpec.scala 51:21]
    node _T_15 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_16 = eq(_T_15, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
    when _T_16 : @[MixedVecSpec.scala 51:11]
      assert(clock, _T_14, UInt<1>("h1"), "") : assert_3 @[MixedVecSpec.scala 51:11]
      node _T_17 = eq(_T_14, UInt<1>("h0")) @[MixedVecSpec.scala 51:11]
      when _T_17 : @[MixedVecSpec.scala 51:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") : printf_3 @[MixedVecSpec.scala 51:11]
    node _T_18 = bits(reset, 0, 0) @[MixedVecSpec.scala 53:7]
    node _T_19 = eq(_T_18, UInt<1>("h0")) @[MixedVecSpec.scala 53:7]
    when _T_19 : @[MixedVecSpec.scala 53:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[MixedVecSpec.scala 53:7]
