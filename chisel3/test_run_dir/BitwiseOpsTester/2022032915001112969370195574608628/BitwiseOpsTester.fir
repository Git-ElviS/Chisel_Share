circuit BitwiseOpsTester :
  module BitwiseOpsTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = not(UInt<3>("h0")) @[BitwiseOps.scala 12:10]
    node _T_1 = eq(_T, UInt<3>("h7")) @[BitwiseOps.scala 12:13]
    node _T_2 = bits(reset, 0, 0) @[BitwiseOps.scala 12:9]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[BitwiseOps.scala 12:9]
    when _T_3 : @[BitwiseOps.scala 12:9]
      assert(clock, _T_1, UInt<1>("h1"), "") : assert @[BitwiseOps.scala 12:9]
      node _T_4 = eq(_T_1, UInt<1>("h0")) @[BitwiseOps.scala 12:9]
      when _T_4 : @[BitwiseOps.scala 12:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BitwiseOps.scala:12 assert(~a === (mask & ~_a).asUInt)\n") : printf @[BitwiseOps.scala 12:9]
    node _T_5 = and(UInt<3>("h0"), UInt<3>("h4")) @[BitwiseOps.scala 13:13]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BitwiseOps.scala 13:18]
    node _T_7 = bits(reset, 0, 0) @[BitwiseOps.scala 13:9]
    node _T_8 = eq(_T_7, UInt<1>("h0")) @[BitwiseOps.scala 13:9]
    when _T_8 : @[BitwiseOps.scala 13:9]
      assert(clock, _T_6, UInt<1>("h1"), "") : assert_1 @[BitwiseOps.scala 13:9]
      node _T_9 = eq(_T_6, UInt<1>("h0")) @[BitwiseOps.scala 13:9]
      when _T_9 : @[BitwiseOps.scala 13:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BitwiseOps.scala:13 assert((a & b) === (_a & _b).asUInt)\n") : printf_1 @[BitwiseOps.scala 13:9]
    node _T_10 = or(UInt<3>("h0"), UInt<3>("h4")) @[BitwiseOps.scala 14:13]
    node _T_11 = eq(_T_10, UInt<3>("h4")) @[BitwiseOps.scala 14:18]
    node _T_12 = bits(reset, 0, 0) @[BitwiseOps.scala 14:9]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[BitwiseOps.scala 14:9]
    when _T_13 : @[BitwiseOps.scala 14:9]
      assert(clock, _T_11, UInt<1>("h1"), "") : assert_2 @[BitwiseOps.scala 14:9]
      node _T_14 = eq(_T_11, UInt<1>("h0")) @[BitwiseOps.scala 14:9]
      when _T_14 : @[BitwiseOps.scala 14:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BitwiseOps.scala:14 assert((a | b) === (_a | _b).asUInt)\n") : printf_2 @[BitwiseOps.scala 14:9]
    node _T_15 = xor(UInt<3>("h0"), UInt<3>("h4")) @[BitwiseOps.scala 15:13]
    node _T_16 = eq(_T_15, UInt<3>("h4")) @[BitwiseOps.scala 15:18]
    node _T_17 = bits(reset, 0, 0) @[BitwiseOps.scala 15:9]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[BitwiseOps.scala 15:9]
    when _T_18 : @[BitwiseOps.scala 15:9]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_3 @[BitwiseOps.scala 15:9]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[BitwiseOps.scala 15:9]
      when _T_19 : @[BitwiseOps.scala 15:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BitwiseOps.scala:15 assert((a ^ b) === (_a ^ _b).asUInt)\n") : printf_3 @[BitwiseOps.scala 15:9]
    node _T_20 = orr(UInt<3>("h0")) @[BitwiseOps.scala 16:13]
    node _T_21 = eq(_T_20, UInt<1>("h0")) @[BitwiseOps.scala 16:18]
    node _T_22 = bits(reset, 0, 0) @[BitwiseOps.scala 16:9]
    node _T_23 = eq(_T_22, UInt<1>("h0")) @[BitwiseOps.scala 16:9]
    when _T_23 : @[BitwiseOps.scala 16:9]
      assert(clock, _T_21, UInt<1>("h1"), "") : assert_4 @[BitwiseOps.scala 16:9]
      node _T_24 = eq(_T_21, UInt<1>("h0")) @[BitwiseOps.scala 16:9]
      when _T_24 : @[BitwiseOps.scala 16:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BitwiseOps.scala:16 assert((a.orR) === (_a != 0).asBool)\n") : printf_4 @[BitwiseOps.scala 16:9]
    node _T_25 = andr(UInt<3>("h0")) @[BitwiseOps.scala 17:13]
    node _T_26 = eq(_T_25, UInt<1>("h0")) @[BitwiseOps.scala 17:19]
    node _T_27 = bits(reset, 0, 0) @[BitwiseOps.scala 17:9]
    node _T_28 = eq(_T_27, UInt<1>("h0")) @[BitwiseOps.scala 17:9]
    when _T_28 : @[BitwiseOps.scala 17:9]
      assert(clock, _T_26, UInt<1>("h1"), "") : assert_5 @[BitwiseOps.scala 17:9]
      node _T_29 = eq(_T_26, UInt<1>("h0")) @[BitwiseOps.scala 17:9]
      when _T_29 : @[BitwiseOps.scala 17:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BitwiseOps.scala:17 assert((a.andR) === (s\"%%${w}s\".format(BigInt(_a).toString(2)).foldLeft(true)(_ && _ == '1')).asBool)\n") : printf_5 @[BitwiseOps.scala 17:9]
    node _T_30 = bits(reset, 0, 0) @[BitwiseOps.scala 18:7]
    node _T_31 = eq(_T_30, UInt<1>("h0")) @[BitwiseOps.scala 18:7]
    when _T_31 : @[BitwiseOps.scala 18:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[BitwiseOps.scala 18:7]
