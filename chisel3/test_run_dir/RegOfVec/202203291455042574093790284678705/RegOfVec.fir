circuit RegOfVec :
  module RegOfVec :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<2>("h2")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    when done : @[CookbookSpec.scala 19:14]
      node _T = bits(reset, 0, 0) @[CookbookSpec.scala 19:20]
      node _T_1 = eq(_T, UInt<1>("h0")) @[CookbookSpec.scala 19:20]
      when _T_1 : @[CookbookSpec.scala 19:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[CookbookSpec.scala 19:20]
    reg regOfVec : UInt<32>[4], clock with :
      reset => (UInt<1>("h0"), regOfVec) @[RegOfVec.scala 14:21]
    regOfVec[0] <= UInt<7>("h7b") @[RegOfVec.scala 15:15]
    regOfVec[2] <= regOfVec[0] @[RegOfVec.scala 16:15]
    wire _initRegOfVec_WIRE : UInt<32>[4] @[RegOfVec.scala 22:37]
    _initRegOfVec_WIRE[0] <= UInt<32>("h0") @[RegOfVec.scala 22:37]
    _initRegOfVec_WIRE[1] <= UInt<32>("h0") @[RegOfVec.scala 22:37]
    _initRegOfVec_WIRE[2] <= UInt<32>("h0") @[RegOfVec.scala 22:37]
    _initRegOfVec_WIRE[3] <= UInt<32>("h0") @[RegOfVec.scala 22:37]
    reg initRegOfVec : UInt<32>[4], clock with :
      reset => (reset, _initRegOfVec_WIRE) @[RegOfVec.scala 22:29]
    node _T_2 = eq(cycle, UInt<2>("h2")) @[RegOfVec.scala 25:14]
    when _T_2 : @[RegOfVec.scala 25:23]
      node _T_3 = eq(regOfVec[2], UInt<7>("h7b")) @[RegOfVec.scala 25:44]
      node _T_4 = bits(reset, 0, 0) @[RegOfVec.scala 25:31]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[RegOfVec.scala 25:31]
      when _T_5 : @[RegOfVec.scala 25:31]
        assert(clock, _T_3, UInt<1>("h1"), "") : assert @[RegOfVec.scala 25:31]
        node _T_6 = eq(_T_3, UInt<1>("h0")) @[RegOfVec.scala 25:31]
        when _T_6 : @[RegOfVec.scala 25:31]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at RegOfVec.scala:25 when(cycle === 2.U) { assert(regOfVec(2) === 123.U) }\n") : printf @[RegOfVec.scala 25:31]
    node _T_7 = eq(initRegOfVec[0], UInt<1>("h0")) @[RegOfVec.scala 26:42]
    node _T_8 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[RegOfVec.scala 26:37]
    when _T_9 : @[RegOfVec.scala 26:37]
      assert(clock, _T_7, UInt<1>("h1"), "") : assert_1 @[RegOfVec.scala 26:37]
      node _T_10 = eq(_T_7, UInt<1>("h0")) @[RegOfVec.scala 26:37]
      when _T_10 : @[RegOfVec.scala 26:37]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") : printf_1 @[RegOfVec.scala 26:37]
    node _T_11 = eq(initRegOfVec[1], UInt<1>("h0")) @[RegOfVec.scala 26:42]
    node _T_12 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[RegOfVec.scala 26:37]
    when _T_13 : @[RegOfVec.scala 26:37]
      assert(clock, _T_11, UInt<1>("h1"), "") : assert_2 @[RegOfVec.scala 26:37]
      node _T_14 = eq(_T_11, UInt<1>("h0")) @[RegOfVec.scala 26:37]
      when _T_14 : @[RegOfVec.scala 26:37]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") : printf_2 @[RegOfVec.scala 26:37]
    node _T_15 = eq(initRegOfVec[2], UInt<1>("h0")) @[RegOfVec.scala 26:42]
    node _T_16 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_17 = eq(_T_16, UInt<1>("h0")) @[RegOfVec.scala 26:37]
    when _T_17 : @[RegOfVec.scala 26:37]
      assert(clock, _T_15, UInt<1>("h1"), "") : assert_3 @[RegOfVec.scala 26:37]
      node _T_18 = eq(_T_15, UInt<1>("h0")) @[RegOfVec.scala 26:37]
      when _T_18 : @[RegOfVec.scala 26:37]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") : printf_3 @[RegOfVec.scala 26:37]
    node _T_19 = eq(initRegOfVec[3], UInt<1>("h0")) @[RegOfVec.scala 26:42]
    node _T_20 = bits(reset, 0, 0) @[RegOfVec.scala 26:37]
    node _T_21 = eq(_T_20, UInt<1>("h0")) @[RegOfVec.scala 26:37]
    when _T_21 : @[RegOfVec.scala 26:37]
      assert(clock, _T_19, UInt<1>("h1"), "") : assert_4 @[RegOfVec.scala 26:37]
      node _T_22 = eq(_T_19, UInt<1>("h0")) @[RegOfVec.scala 26:37]
      when _T_22 : @[RegOfVec.scala 26:37]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at RegOfVec.scala:26 for (elt <- initRegOfVec) { assert(elt === 0.U) }\n") : printf_4 @[RegOfVec.scala 26:37]
