circuit FailingAssertTester :
  module FailingAssertTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = bits(reset, 0, 0) @[Assert.scala 11:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Assert.scala 11:9]
    when _T_1 : @[Assert.scala 11:9]
      assert(clock, UInt<1>("h0"), UInt<1>("h1"), "") : assert @[Assert.scala 11:9]
      node _T_2 = eq(UInt<1>("h0"), UInt<1>("h0")) @[Assert.scala 11:9]
      when _T_2 : @[Assert.scala 11:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Assert.scala:11 assert(false.B)\n") : printf @[Assert.scala 11:9]
    node _done_T = bits(reset, 0, 0) @[Assert.scala 13:34]
    node _done_T_1 = eq(_done_T, UInt<1>("h0")) @[Assert.scala 13:27]
    reg done_value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when _done_T_1 : @[Counter.scala 120:16]
      node done_wrap_wrap = eq(done_value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 78:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 78:15]
      done <= done_wrap_wrap @[Counter.scala 120:23]
    when done : @[Assert.scala 14:14]
      node _T_3 = bits(reset, 0, 0) @[Assert.scala 15:9]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[Assert.scala 15:9]
      when _T_4 : @[Assert.scala 15:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Assert.scala 15:9]
