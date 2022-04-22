circuit BlackBoxWithClockTester :
  extmodule BlackBoxRegister :
    input clock : Clock
    input in : UInt<1>
    output out : UInt<1>
    defname = BlackBoxRegister

  module BlackBoxWithClockTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst blackBox of BlackBoxRegister @[BlackBox.scala 107:24]
    blackBox.out is invalid
    blackBox.in is invalid
    blackBox.clock is invalid
    reg model : UInt<1>, clock with :
      reset => (UInt<1>("h0"), model) @[BlackBox.scala 108:18]
    reg cycles : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire end : UInt<1>
    end <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycles, UInt<4>("he")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycles, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycles <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycles <= UInt<1>("h0") @[Counter.scala 88:28]
      end <= wrap_wrap @[Counter.scala 120:23]
    node impetus = bits(cycles, 0, 0) @[BlackBox.scala 112:23]
    blackBox.clock <= clock @[BlackBox.scala 113:21]
    blackBox.in <= impetus @[BlackBox.scala 114:18]
    model <= impetus @[BlackBox.scala 115:9]
    node _T = gt(cycles, UInt<1>("h0")) @[BlackBox.scala 117:15]
    when _T : @[BlackBox.scala 117:22]
      node _T_1 = eq(blackBox.out, model) @[BlackBox.scala 118:28]
      node _T_2 = bits(reset, 0, 0) @[BlackBox.scala 118:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[BlackBox.scala 118:11]
      when _T_3 : @[BlackBox.scala 118:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[BlackBox.scala 118:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[BlackBox.scala 118:11]
        when _T_4 : @[BlackBox.scala 118:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at BlackBox.scala:118 assert(blackBox.io.out === model)\n") : printf @[BlackBox.scala 118:11]
    when end : @[BlackBox.scala 120:13]
      node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 120:19]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[BlackBox.scala 120:19]
      when _T_6 : @[BlackBox.scala 120:19]
        stop(clock, UInt<1>("h1"), 0) : stop @[BlackBox.scala 120:19]
