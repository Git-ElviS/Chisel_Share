circuit ShiftRegisterTester :
  module ShiftRegisterTester :
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
    reg shifter : UInt<1>[1], clock with :
      reset => (UInt<1>("h0"), shifter) @[Vec.scala 245:20]
    shifter[0] <= cnt @[Vec.scala 247:18]
    node _T = geq(cnt, UInt<1>("h1")) @[Vec.scala 248:12]
    when _T : @[Vec.scala 248:25]
      node _expected_T = sub(cnt, UInt<1>("h1")) @[Vec.scala 249:24]
      node expected = tail(_expected_T, 1) @[Vec.scala 249:24]
      node _T_1 = eq(shifter[0], expected) @[Vec.scala 250:23]
      node _T_2 = bits(reset, 0, 0) @[Vec.scala 250:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[Vec.scala 250:11]
      when _T_3 : @[Vec.scala 250:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[Vec.scala 250:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 250:11]
        when _T_4 : @[Vec.scala 250:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:250 assert(shifter(0) === expected)\n") : printf @[Vec.scala 250:11]
    when wrap : @[Vec.scala 252:14]
      node _T_5 = bits(reset, 0, 0) @[Vec.scala 253:9]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[Vec.scala 253:9]
      when _T_6 : @[Vec.scala 253:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 253:9]
