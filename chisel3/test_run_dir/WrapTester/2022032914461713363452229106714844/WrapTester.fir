circuit WrapTester :
  module WrapTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cnt, UInt<2>("h2")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cnt <= UInt<1>("h0") @[Counter.scala 88:28]
      wrap <= wrap_wrap @[Counter.scala 120:23]
    when wrap : @[Counter.scala 47:14]
      node _T = eq(cnt, UInt<2>("h2")) @[Counter.scala 48:16]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 48:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Counter.scala 48:11]
      when _T_2 : @[Counter.scala 48:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Counter.scala 48:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Counter.scala 48:11]
        when _T_3 : @[Counter.scala 48:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Counter.scala:48 assert(cnt === (max - 1).asUInt)\n") : printf @[Counter.scala 48:11]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 49:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Counter.scala 49:9]
      when _T_5 : @[Counter.scala 49:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Counter.scala 49:9]
