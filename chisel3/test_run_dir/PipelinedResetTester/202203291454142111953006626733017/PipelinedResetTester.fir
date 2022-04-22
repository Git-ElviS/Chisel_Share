circuit PipelinedResetTester :
  module PipelinedResetModule :
    input clock : Clock
    input reset : Reset
    output io : { }

    reg a : UInt, clock with :
      reset => (reset, UInt<16>("hbeef")) @[Assert.scala 30:18]
    reg b : UInt, clock with :
      reset => (reset, UInt<16>("hbeef")) @[Assert.scala 31:18]
    node _T = eq(a, b) @[Assert.scala 32:12]
    node _T_1 = asUInt(reset) @[Assert.scala 32:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Assert.scala 32:9]
    when _T_2 : @[Assert.scala 32:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Assert.scala 32:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Assert.scala 32:9]
      when _T_3 : @[Assert.scala 32:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Assert.scala:32 assert(a === b)\n") : printf @[Assert.scala 32:9]

  module PipelinedResetTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst module of PipelinedResetModule @[Assert.scala 37:22]
    module.clock <= clock
    module.reset <= reset
    reg module_reset_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), module_reset_REG) @[Assert.scala 39:42]
    module_reset_REG <= reset @[Assert.scala 39:42]
    reg module_reset_REG_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), module_reset_REG_1) @[Assert.scala 39:34]
    module_reset_REG_1 <= module_reset_REG @[Assert.scala 39:34]
    reg module_reset_REG_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), module_reset_REG_2) @[Assert.scala 39:26]
    module_reset_REG_2 <= module_reset_REG_1 @[Assert.scala 39:26]
    module.reset <= module_reset_REG_2 @[Assert.scala 39:16]
    node _done_T = bits(reset, 0, 0) @[Assert.scala 41:34]
    node _done_T_1 = eq(_done_T, UInt<1>("h0")) @[Assert.scala 41:27]
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
    when done : @[Assert.scala 42:14]
      node _T = bits(reset, 0, 0) @[Assert.scala 43:9]
      node _T_1 = eq(_T, UInt<1>("h0")) @[Assert.scala 43:9]
      when _T_1 : @[Assert.scala 43:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Assert.scala 43:9]
