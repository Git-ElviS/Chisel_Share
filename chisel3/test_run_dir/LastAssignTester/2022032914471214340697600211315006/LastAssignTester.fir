circuit LastAssignTester :
  module LastAssignTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cnt, UInt<1>("h1")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _wrap_value_T_1 @[Counter.scala 78:15]
      wrap <= wrap_wrap @[Counter.scala 120:23]
    wire test : UInt<4> @[MultiAssign.scala 14:18]
    node _T = eq(test, UInt<3>("h7")) @[MultiAssign.scala 15:15]
    node _T_1 = bits(reset, 0, 0) @[MultiAssign.scala 15:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[MultiAssign.scala 15:9]
    when _T_2 : @[MultiAssign.scala 15:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[MultiAssign.scala 15:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[MultiAssign.scala 15:9]
      when _T_3 : @[MultiAssign.scala 15:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiAssign.scala:15 assert(test === 7.U) // allow read references before assign references\n") : printf @[MultiAssign.scala 15:9]
    test <= UInt<4>("hd") @[MultiAssign.scala 17:8]
    node _T_4 = eq(test, UInt<3>("h7")) @[MultiAssign.scala 18:15]
    node _T_5 = bits(reset, 0, 0) @[MultiAssign.scala 18:9]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[MultiAssign.scala 18:9]
    when _T_6 : @[MultiAssign.scala 18:9]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[MultiAssign.scala 18:9]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[MultiAssign.scala 18:9]
      when _T_7 : @[MultiAssign.scala 18:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiAssign.scala:18 assert(test === 7.U) // output value should be position-independent\n") : printf_1 @[MultiAssign.scala 18:9]
    test <= UInt<3>("h7") @[MultiAssign.scala 20:8]
    node _T_8 = eq(test, UInt<3>("h7")) @[MultiAssign.scala 21:15]
    node _T_9 = bits(reset, 0, 0) @[MultiAssign.scala 21:9]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[MultiAssign.scala 21:9]
    when _T_10 : @[MultiAssign.scala 21:9]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[MultiAssign.scala 21:9]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[MultiAssign.scala 21:9]
      when _T_11 : @[MultiAssign.scala 21:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiAssign.scala:21 assert(test === 7.U) // this obviously should work\n") : printf_2 @[MultiAssign.scala 21:9]
    node _T_12 = eq(cnt, UInt<1>("h1")) @[MultiAssign.scala 23:12]
    when _T_12 : @[MultiAssign.scala 23:21]
      node _T_13 = bits(reset, 0, 0) @[MultiAssign.scala 24:9]
      node _T_14 = eq(_T_13, UInt<1>("h0")) @[MultiAssign.scala 24:9]
      when _T_14 : @[MultiAssign.scala 24:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiAssign.scala 24:9]
