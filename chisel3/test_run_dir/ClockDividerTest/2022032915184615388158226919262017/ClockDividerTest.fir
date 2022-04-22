circuit ClockDividerTest :
  module ClockDividerTest :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cDiv : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[MultiClockSpec.scala 12:21]
    node _cDiv_T = eq(cDiv, UInt<1>("h0")) @[MultiClockSpec.scala 13:11]
    cDiv <= _cDiv_T @[MultiClockSpec.scala 13:8]
    node clock2 = asClock(cDiv) @[MultiClockSpec.scala 14:21]
    reg reg1 : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[MultiClockSpec.scala 16:21]
    node _reg1_T = add(reg1, UInt<1>("h1")) @[MultiClockSpec.scala 17:16]
    node _reg1_T_1 = tail(_reg1_T, 1) @[MultiClockSpec.scala 17:16]
    reg1 <= _reg1_T_1 @[MultiClockSpec.scala 17:8]
    reg reg2 : UInt<8>, clock2 with :
      reset => (reset, UInt<8>("h0")) @[MultiClockSpec.scala 18:41]
    node _reg2_T = add(reg2, UInt<1>("h1")) @[MultiClockSpec.scala 19:16]
    node _reg2_T_1 = tail(_reg2_T, 1) @[MultiClockSpec.scala 19:16]
    reg2 <= _reg2_T_1 @[MultiClockSpec.scala 19:8]
    node _T = lt(reg1, UInt<4>("ha")) @[MultiClockSpec.scala 21:13]
    when _T : @[MultiClockSpec.scala 21:21]
      node _T_1 = div(reg1, UInt<2>("h2")) @[MultiClockSpec.scala 22:26]
      node _T_2 = eq(reg2, _T_1) @[MultiClockSpec.scala 22:17]
      node _T_3 = bits(reset, 0, 0) @[MultiClockSpec.scala 22:11]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[MultiClockSpec.scala 22:11]
      when _T_4 : @[MultiClockSpec.scala 22:11]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[MultiClockSpec.scala 22:11]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[MultiClockSpec.scala 22:11]
        when _T_5 : @[MultiClockSpec.scala 22:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at MultiClockSpec.scala:22 assert(reg2 === reg1 / 2.U) // 1:2 clock relationship\n") : printf @[MultiClockSpec.scala 22:11]
    node _T_6 = eq(reg1, UInt<4>("ha")) @[MultiClockSpec.scala 25:13]
    when _T_6 : @[MultiClockSpec.scala 25:23]
      node _T_7 = bits(reset, 0, 0) @[MultiClockSpec.scala 26:9]
      node _T_8 = eq(_T_7, UInt<1>("h0")) @[MultiClockSpec.scala 26:9]
      when _T_8 : @[MultiClockSpec.scala 26:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[MultiClockSpec.scala 26:9]
