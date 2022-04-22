circuit MultiClockSubModuleTest :
  module SubModule :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt}

    reg cycle : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire cycle_wrap : UInt<1>
    cycle_wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node cycle_wrap_wrap = eq(cycle, UInt<4>("h9")) @[Counter.scala 74:24]
      node _cycle_wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _cycle_wrap_value_T_1 = tail(_cycle_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _cycle_wrap_value_T_1 @[Counter.scala 78:15]
      when cycle_wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      cycle_wrap <= cycle_wrap_wrap @[Counter.scala 120:23]
    io.out <= cycle @[MultiClockSpec.scala 36:12]

  module MultiClockSubModuleTest :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cycle : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<4>("h9")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cycle <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    reg cDiv : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[MultiClockSpec.scala 40:21]
    node _cDiv_T = eq(cDiv, UInt<1>("h0")) @[MultiClockSpec.scala 41:11]
    cDiv <= _cDiv_T @[MultiClockSpec.scala 41:8]
    node otherClock = asClock(cDiv) @[MultiClockSpec.scala 43:25]
    node otherReset = lt(cycle, UInt<2>("h3")) @[MultiClockSpec.scala 44:26]
    inst inst of SubModule @[MultiClockSpec.scala 46:64]
    inst.clock <= otherClock
    inst.reset <= otherReset
    when done : @[MultiClockSpec.scala 48:14]
      node _T = eq(inst.io.out, UInt<2>("h3")) @[MultiClockSpec.scala 50:24]
      node _T_1 = bits(reset, 0, 0) @[MultiClockSpec.scala 50:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[MultiClockSpec.scala 50:11]
      when _T_2 : @[MultiClockSpec.scala 50:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[MultiClockSpec.scala 50:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[MultiClockSpec.scala 50:11]
        when _T_3 : @[MultiClockSpec.scala 50:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:50 assert(inst.io.out === 3.U)\n") : printf @[MultiClockSpec.scala 50:11]
      node _T_4 = bits(reset, 0, 0) @[MultiClockSpec.scala 51:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[MultiClockSpec.scala 51:9]
      when _T_5 : @[MultiClockSpec.scala 51:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiClockSpec.scala 51:9]
