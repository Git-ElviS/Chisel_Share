circuit FixedPointLitExtractTester :
  module FixedPointLitExtractTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = eq(UInt<1>("h0"), UInt<1>("h0")) @[FixedPointSpec.scala 139:27]
    node _T_1 = bits(reset, 0, 0) @[FixedPointSpec.scala 139:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[FixedPointSpec.scala 139:9]
    when _T_2 : @[FixedPointSpec.scala 139:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[FixedPointSpec.scala 139:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[FixedPointSpec.scala 139:9]
      when _T_3 : @[FixedPointSpec.scala 139:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:139 assert(-4.75.F(2.BP)(1) === false.B)\n") : printf @[FixedPointSpec.scala 139:9]
    node _T_4 = eq(UInt<1>("h1"), UInt<1>("h1")) @[FixedPointSpec.scala 140:27]
    node _T_5 = bits(reset, 0, 0) @[FixedPointSpec.scala 140:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[FixedPointSpec.scala 140:9]
    when _T_6 : @[FixedPointSpec.scala 140:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[FixedPointSpec.scala 140:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[FixedPointSpec.scala 140:9]
      when _T_7 : @[FixedPointSpec.scala 140:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:140 assert(-4.75.F(2.BP)(2) === true.B)\n") : printf_1 @[FixedPointSpec.scala 140:9]
    node _T_8 = eq(UInt<1>("h1"), UInt<1>("h1")) @[FixedPointSpec.scala 141:29]
    node _T_9 = bits(reset, 0, 0) @[FixedPointSpec.scala 141:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[FixedPointSpec.scala 141:9]
    when _T_10 : @[FixedPointSpec.scala 141:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[FixedPointSpec.scala 141:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[FixedPointSpec.scala 141:9]
      when _T_11 : @[FixedPointSpec.scala 141:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:141 assert(-4.75.F(2.BP)(100) === true.B)\n") : printf_2 @[FixedPointSpec.scala 141:9]
    node _T_12 = eq(UInt<4>("hd"), UInt<4>("hd")) @[FixedPointSpec.scala 142:30]
    node _T_13 = bits(reset, 0, 0) @[FixedPointSpec.scala 142:9]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[FixedPointSpec.scala 142:9]
    when _T_14 : @[FixedPointSpec.scala 142:9]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[FixedPointSpec.scala 142:9]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[FixedPointSpec.scala 142:9]
      when _T_15 : @[FixedPointSpec.scala 142:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:142 assert(-4.75.F(2.BP)(3, 0) === \"b1101\".U)\n") : printf_3 @[FixedPointSpec.scala 142:9]
    node _T_16 = eq(UInt<10>("h3ed"), UInt<10>("h3ed")) @[FixedPointSpec.scala 143:30]
    node _T_17 = bits(reset, 0, 0) @[FixedPointSpec.scala 143:9]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[FixedPointSpec.scala 143:9]
    when _T_18 : @[FixedPointSpec.scala 143:9]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[FixedPointSpec.scala 143:9]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[FixedPointSpec.scala 143:9]
      when _T_19 : @[FixedPointSpec.scala 143:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:143 assert(-4.75.F(2.BP)(9, 0) === \"b1111101101\".U)\n") : printf_4 @[FixedPointSpec.scala 143:9]
    node _T_20 = eq(UInt<1>("h0"), UInt<1>("h0")) @[FixedPointSpec.scala 145:32]
    node _T_21 = bits(reset, 0, 0) @[FixedPointSpec.scala 145:9]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[FixedPointSpec.scala 145:9]
    when _T_22 : @[FixedPointSpec.scala 145:9]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[FixedPointSpec.scala 145:9]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[FixedPointSpec.scala 145:9]
      when _T_23 : @[FixedPointSpec.scala 145:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:145 assert(-4.75.F(6.W, 2.BP)(1) === false.B)\n") : printf_5 @[FixedPointSpec.scala 145:9]
    node _T_24 = eq(UInt<1>("h1"), UInt<1>("h1")) @[FixedPointSpec.scala 146:32]
    node _T_25 = bits(reset, 0, 0) @[FixedPointSpec.scala 146:9]
    node _T_26 = eq(_T_25, UInt<1>("h0")) @[FixedPointSpec.scala 146:9]
    when _T_26 : @[FixedPointSpec.scala 146:9]
      assert(clock, _T_24, UInt<1>("h1"), "") : assert_6 @[FixedPointSpec.scala 146:9]
      node _T_27 = eq(_T_24, UInt<1>("h0")) @[FixedPointSpec.scala 146:9]
      when _T_27 : @[FixedPointSpec.scala 146:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:146 assert(-4.75.F(6.W, 2.BP)(2) === true.B)\n") : printf_6 @[FixedPointSpec.scala 146:9]
    node _T_28 = eq(UInt<1>("h1"), UInt<1>("h1")) @[FixedPointSpec.scala 147:34]
    node _T_29 = bits(reset, 0, 0) @[FixedPointSpec.scala 147:9]
    node _T_30 = eq(_T_29, UInt<1>("h0")) @[FixedPointSpec.scala 147:9]
    when _T_30 : @[FixedPointSpec.scala 147:9]
      assert(clock, _T_28, UInt<1>("h1"), "") : assert_7 @[FixedPointSpec.scala 147:9]
      node _T_31 = eq(_T_28, UInt<1>("h0")) @[FixedPointSpec.scala 147:9]
      when _T_31 : @[FixedPointSpec.scala 147:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:147 assert(-4.75.F(6.W, 2.BP)(100) === true.B)\n") : printf_7 @[FixedPointSpec.scala 147:9]
    node _T_32 = eq(UInt<4>("hd"), UInt<4>("hd")) @[FixedPointSpec.scala 148:35]
    node _T_33 = bits(reset, 0, 0) @[FixedPointSpec.scala 148:9]
    node _T_34 = eq(_T_33, UInt<1>("h0")) @[FixedPointSpec.scala 148:9]
    when _T_34 : @[FixedPointSpec.scala 148:9]
      assert(clock, _T_32, UInt<1>("h1"), "") : assert_8 @[FixedPointSpec.scala 148:9]
      node _T_35 = eq(_T_32, UInt<1>("h0")) @[FixedPointSpec.scala 148:9]
      when _T_35 : @[FixedPointSpec.scala 148:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:148 assert(-4.75.F(6.W, 2.BP)(3, 0) === \"b1101\".U)\n") : printf_8 @[FixedPointSpec.scala 148:9]
    node _T_36 = eq(UInt<10>("h3ed"), UInt<10>("h3ed")) @[FixedPointSpec.scala 149:35]
    node _T_37 = bits(reset, 0, 0) @[FixedPointSpec.scala 149:9]
    node _T_38 = eq(_T_37, UInt<1>("h0")) @[FixedPointSpec.scala 149:9]
    when _T_38 : @[FixedPointSpec.scala 149:9]
      assert(clock, _T_36, UInt<1>("h1"), "") : assert_9 @[FixedPointSpec.scala 149:9]
      node _T_39 = eq(_T_36, UInt<1>("h0")) @[FixedPointSpec.scala 149:9]
      when _T_39 : @[FixedPointSpec.scala 149:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at FixedPointSpec.scala:149 assert(-4.75.F(6.W, 2.BP)(9, 0) === \"b1111101101\".U)\n") : printf_9 @[FixedPointSpec.scala 149:9]
    node _T_40 = bits(reset, 0, 0) @[FixedPointSpec.scala 150:7]
    node _T_41 = eq(_T_40, UInt<1>("h0")) @[FixedPointSpec.scala 150:7]
    when _T_41 : @[FixedPointSpec.scala 150:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[FixedPointSpec.scala 150:7]
