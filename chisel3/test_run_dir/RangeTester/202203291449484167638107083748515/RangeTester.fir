circuit RangeTester :
  module RangeTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<5>, clock with :
      reset => (reset, UInt<5>("h1a")) @[Counter.scala 62:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h0")
    when UInt<1>("h0") : @[Counter.scala 137:17]
      cnt <= UInt<5>("h1a") @[Counter.scala 99:11]
    else :
      when UInt<1>("h1") : @[Counter.scala 139:24]
        node wrap_wrap = eq(cnt, UInt<3>("h6")) @[Counter.scala 74:24]
        node _wrap_value_T = sub(cnt, UInt<2>("h2")) @[Counter.scala 81:24]
        node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 81:24]
        cnt <= _wrap_value_T_1 @[Counter.scala 81:15]
        when wrap_wrap : @[Counter.scala 88:20]
          cnt <= UInt<5>("h1a") @[Counter.scala 88:28]
        wrap <= wrap_wrap @[Counter.scala 140:12]
    reg checkWrap : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 55:26]
    when checkWrap : @[Counter.scala 57:19]
      node _T = eq(cnt, UInt<5>("h1a")) @[Counter.scala 58:16]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 58:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Counter.scala 58:11]
      when _T_2 : @[Counter.scala 58:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Counter.scala 58:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Counter.scala 58:11]
        when _T_3 : @[Counter.scala 58:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Counter.scala:58 assert(cnt === r.head.U)\n") : printf @[Counter.scala 58:11]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 59:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Counter.scala 59:9]
      when _T_5 : @[Counter.scala 59:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Counter.scala 59:9]
    else :
      when wrap : @[Counter.scala 60:20]
        node _T_6 = eq(cnt, UInt<3>("h6")) @[Counter.scala 61:16]
        node _T_7 = bits(reset, 0, 0) @[Counter.scala 61:11]
        node _T_8 = eq(_T_7, UInt<1>("h0")) @[Counter.scala 61:11]
        when _T_8 : @[Counter.scala 61:11]
          assert(clock, _T_6, UInt<1>("h1"), "") : assert_1 @[Counter.scala 61:11]
          node _T_9 = eq(_T_6, UInt<1>("h0")) @[Counter.scala 61:11]
          when _T_9 : @[Counter.scala 61:11]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at Counter.scala:61 assert(cnt === r.last.U)\n") : printf_1 @[Counter.scala 61:11]
        checkWrap <= UInt<1>("h1") @[Counter.scala 62:15]
