circuit RegTester :
  module RegTesterMod :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt[8], out : UInt[8]}

    wire _vecReg_WIRE : UInt<1>[8] @[Vec.scala 26:38]
    _vecReg_WIRE[0] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[1] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[2] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[3] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[4] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[5] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[6] <= UInt<1>("h0") @[Vec.scala 26:38]
    _vecReg_WIRE[7] <= UInt<1>("h0") @[Vec.scala 26:38]
    reg vecReg : UInt[8], clock with :
      reset => (reset, _vecReg_WIRE) @[Vec.scala 26:23]
    vecReg[0] <= io.in[0] @[Vec.scala 26:23]
    vecReg[1] <= io.in[1] @[Vec.scala 26:23]
    vecReg[2] <= io.in[2] @[Vec.scala 26:23]
    vecReg[3] <= io.in[3] @[Vec.scala 26:23]
    vecReg[4] <= io.in[4] @[Vec.scala 26:23]
    vecReg[5] <= io.in[5] @[Vec.scala 26:23]
    vecReg[6] <= io.in[6] @[Vec.scala 26:23]
    vecReg[7] <= io.in[7] @[Vec.scala 26:23]
    io.out <= vecReg @[Vec.scala 27:10]

  module RegTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire v : UInt<2>[8] @[Vec.scala 55:18]
    v[0] <= UInt<2>("h0") @[Vec.scala 55:18]
    v[1] <= UInt<2>("h3") @[Vec.scala 55:18]
    v[2] <= UInt<2>("h1") @[Vec.scala 55:18]
    v[3] <= UInt<2>("h3") @[Vec.scala 55:18]
    v[4] <= UInt<2>("h2") @[Vec.scala 55:18]
    v[5] <= UInt<2>("h1") @[Vec.scala 55:18]
    v[6] <= UInt<2>("h2") @[Vec.scala 55:18]
    v[7] <= UInt<2>("h2") @[Vec.scala 55:18]
    inst dut of RegTesterMod @[Vec.scala 56:19]
    dut.clock <= clock
    dut.reset <= reset
    reg doneReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Vec.scala 57:24]
    dut.io.in[0] <= v[0] @[Vec.scala 58:13]
    dut.io.in[1] <= v[1] @[Vec.scala 58:13]
    dut.io.in[2] <= v[2] @[Vec.scala 58:13]
    dut.io.in[3] <= v[3] @[Vec.scala 58:13]
    dut.io.in[4] <= v[4] @[Vec.scala 58:13]
    dut.io.in[5] <= v[5] @[Vec.scala 58:13]
    dut.io.in[6] <= v[6] @[Vec.scala 58:13]
    dut.io.in[7] <= v[7] @[Vec.scala 58:13]
    when doneReg : @[Vec.scala 59:17]
      node _T = eq(dut.io.out[0], UInt<1>("h0")) @[Vec.scala 61:16]
      node _T_1 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_2 : @[Vec.scala 61:13]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 61:13]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_3 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf @[Vec.scala 61:13]
      node _T_4 = eq(dut.io.out[1], UInt<2>("h3")) @[Vec.scala 61:16]
      node _T_5 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_6 : @[Vec.scala 61:13]
        assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[Vec.scala 61:13]
        node _T_7 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_7 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_1 @[Vec.scala 61:13]
      node _T_8 = eq(dut.io.out[2], UInt<1>("h1")) @[Vec.scala 61:16]
      node _T_9 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_10 = eq(_T_9, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_10 : @[Vec.scala 61:13]
        assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[Vec.scala 61:13]
        node _T_11 = eq(_T_8, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_11 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_2 @[Vec.scala 61:13]
      node _T_12 = eq(dut.io.out[3], UInt<2>("h3")) @[Vec.scala 61:16]
      node _T_13 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_14 = eq(_T_13, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_14 : @[Vec.scala 61:13]
        assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[Vec.scala 61:13]
        node _T_15 = eq(_T_12, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_15 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_3 @[Vec.scala 61:13]
      node _T_16 = eq(dut.io.out[4], UInt<2>("h2")) @[Vec.scala 61:16]
      node _T_17 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_18 = eq(_T_17, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_18 : @[Vec.scala 61:13]
        assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[Vec.scala 61:13]
        node _T_19 = eq(_T_16, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_19 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_4 @[Vec.scala 61:13]
      node _T_20 = eq(dut.io.out[5], UInt<1>("h1")) @[Vec.scala 61:16]
      node _T_21 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_22 = eq(_T_21, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_22 : @[Vec.scala 61:13]
        assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[Vec.scala 61:13]
        node _T_23 = eq(_T_20, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_23 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_5 @[Vec.scala 61:13]
      node _T_24 = eq(dut.io.out[6], UInt<2>("h2")) @[Vec.scala 61:16]
      node _T_25 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_26 = eq(_T_25, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_26 : @[Vec.scala 61:13]
        assert(clock, _T_24, UInt<1>("h1"), "") : assert_6 @[Vec.scala 61:13]
        node _T_27 = eq(_T_24, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_27 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_6 @[Vec.scala 61:13]
      node _T_28 = eq(dut.io.out[7], UInt<2>("h2")) @[Vec.scala 61:16]
      node _T_29 = bits(reset, 0, 0) @[Vec.scala 61:13]
      node _T_30 = eq(_T_29, UInt<1>("h0")) @[Vec.scala 61:13]
      when _T_30 : @[Vec.scala 61:13]
        assert(clock, _T_28, UInt<1>("h1"), "") : assert_7 @[Vec.scala 61:13]
        node _T_31 = eq(_T_28, UInt<1>("h0")) @[Vec.scala 61:13]
        when _T_31 : @[Vec.scala 61:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:61 assert(a === b.U)\n") : printf_7 @[Vec.scala 61:13]
      node _T_32 = bits(reset, 0, 0) @[Vec.scala 62:9]
      node _T_33 = eq(_T_32, UInt<1>("h0")) @[Vec.scala 62:9]
      when _T_33 : @[Vec.scala 62:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 62:9]
    else :
      doneReg <= UInt<1>("h1") @[Vec.scala 64:13]
      node _T_34 = eq(dut.io.out[0], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_35 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_36 = eq(_T_35, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_36 : @[Vec.scala 66:13]
        assert(clock, _T_34, UInt<1>("h1"), "") : assert_8 @[Vec.scala 66:13]
        node _T_37 = eq(_T_34, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_37 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_8 @[Vec.scala 66:13]
      node _T_38 = eq(dut.io.out[1], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_39 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_40 = eq(_T_39, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_40 : @[Vec.scala 66:13]
        assert(clock, _T_38, UInt<1>("h1"), "") : assert_9 @[Vec.scala 66:13]
        node _T_41 = eq(_T_38, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_41 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_9 @[Vec.scala 66:13]
      node _T_42 = eq(dut.io.out[2], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_43 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_44 = eq(_T_43, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_44 : @[Vec.scala 66:13]
        assert(clock, _T_42, UInt<1>("h1"), "") : assert_10 @[Vec.scala 66:13]
        node _T_45 = eq(_T_42, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_45 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_10 @[Vec.scala 66:13]
      node _T_46 = eq(dut.io.out[3], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_47 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_48 = eq(_T_47, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_48 : @[Vec.scala 66:13]
        assert(clock, _T_46, UInt<1>("h1"), "") : assert_11 @[Vec.scala 66:13]
        node _T_49 = eq(_T_46, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_49 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_11 @[Vec.scala 66:13]
      node _T_50 = eq(dut.io.out[4], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_51 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_52 = eq(_T_51, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_52 : @[Vec.scala 66:13]
        assert(clock, _T_50, UInt<1>("h1"), "") : assert_12 @[Vec.scala 66:13]
        node _T_53 = eq(_T_50, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_53 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_12 @[Vec.scala 66:13]
      node _T_54 = eq(dut.io.out[5], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_55 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_56 = eq(_T_55, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_56 : @[Vec.scala 66:13]
        assert(clock, _T_54, UInt<1>("h1"), "") : assert_13 @[Vec.scala 66:13]
        node _T_57 = eq(_T_54, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_57 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_13 @[Vec.scala 66:13]
      node _T_58 = eq(dut.io.out[6], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_59 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_60 = eq(_T_59, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_60 : @[Vec.scala 66:13]
        assert(clock, _T_58, UInt<1>("h1"), "") : assert_14 @[Vec.scala 66:13]
        node _T_61 = eq(_T_58, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_61 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_14 @[Vec.scala 66:13]
      node _T_62 = eq(dut.io.out[7], UInt<1>("h0")) @[Vec.scala 66:16]
      node _T_63 = bits(reset, 0, 0) @[Vec.scala 66:13]
      node _T_64 = eq(_T_63, UInt<1>("h0")) @[Vec.scala 66:13]
      when _T_64 : @[Vec.scala 66:13]
        assert(clock, _T_62, UInt<1>("h1"), "") : assert_15 @[Vec.scala 66:13]
        node _T_65 = eq(_T_62, UInt<1>("h0")) @[Vec.scala 66:13]
        when _T_65 : @[Vec.scala 66:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:66 assert(a === 0.U)\n") : printf_15 @[Vec.scala 66:13]
