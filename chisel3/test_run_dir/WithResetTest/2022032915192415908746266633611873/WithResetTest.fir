circuit WithResetTest :
  module WithResetTest :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire reset2 : UInt<1>
    reset2 <= UInt<1>("h0")
    node _reg_T = bits(reset, 0, 0) @[MultiClockSpec.scala 58:39]
    node _reg_T_1 = or(reset2, _reg_T) @[MultiClockSpec.scala 58:30]
    reg reg : UInt<8>, clock with :
      reset => (_reg_T_1, UInt<8>("h0")) @[MultiClockSpec.scala 58:56]
    node _reg_T_2 = add(reg, UInt<1>("h1")) @[MultiClockSpec.scala 59:14]
    node _reg_T_3 = tail(_reg_T_2, 1) @[MultiClockSpec.scala 59:14]
    reg <= _reg_T_3 @[MultiClockSpec.scala 59:7]
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
    node _T = lt(cycle, UInt<3>("h7")) @[MultiClockSpec.scala 62:14]
    when _T : @[MultiClockSpec.scala 62:21]
      node _T_1 = eq(reg, cycle) @[MultiClockSpec.scala 63:16]
      node _T_2 = bits(reset, 0, 0) @[MultiClockSpec.scala 63:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[MultiClockSpec.scala 63:11]
      when _T_3 : @[MultiClockSpec.scala 63:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[MultiClockSpec.scala 63:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[MultiClockSpec.scala 63:11]
        when _T_4 : @[MultiClockSpec.scala 63:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:63 assert(reg === cycle)\n") : printf @[MultiClockSpec.scala 63:11]
    else :
      node _T_5 = eq(cycle, UInt<3>("h7")) @[MultiClockSpec.scala 64:20]
      when _T_5 : @[MultiClockSpec.scala 64:29]
        reset2 <= UInt<1>("h1") @[MultiClockSpec.scala 65:12]
      else :
        node _T_6 = eq(cycle, UInt<4>("h8")) @[MultiClockSpec.scala 66:20]
        when _T_6 : @[MultiClockSpec.scala 66:29]
          node _T_7 = eq(reg, UInt<1>("h0")) @[MultiClockSpec.scala 67:16]
          node _T_8 = bits(reset, 0, 0) @[MultiClockSpec.scala 67:11]
          node _T_9 = eq(_T_8, UInt<1>("h0")) @[MultiClockSpec.scala 67:11]
          when _T_9 : @[MultiClockSpec.scala 67:11]
            assert(clock, _T_7, UInt<1>("h1"), "") : assert_1 @[MultiClockSpec.scala 67:11]
            node _T_10 = eq(_T_7, UInt<1>("h0")) @[MultiClockSpec.scala 67:11]
            when _T_10 : @[MultiClockSpec.scala 67:11]
              printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:67 assert(reg === 0.U)\n") : printf_1 @[MultiClockSpec.scala 67:11]
    when done : @[MultiClockSpec.scala 69:14]
      node _T_11 = bits(reset, 0, 0) @[MultiClockSpec.scala 69:20]
      node _T_12 = eq(_T_11, UInt<1>("h0")) @[MultiClockSpec.scala 69:20]
      when _T_12 : @[MultiClockSpec.scala 69:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiClockSpec.scala 69:20]
