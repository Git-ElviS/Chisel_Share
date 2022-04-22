circuit ShiftTester :
  module ShiftTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cntVal : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cntVal, UInt<2>("h2")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cntVal, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cntVal <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        cntVal <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _sr_T = add(cntVal, UInt<5>("h17")) @[Reg.scala 47:33]
    node _sr_T_1 = tail(_sr_T, 1) @[Reg.scala 47:33]
    reg sr_r : UInt<5>, clock with :
      reset => (UInt<1>("h0"), sr_r) @[Reg.scala 16:16]
    when UInt<1>("h1") : @[Reg.scala 17:18]
      sr_r <= _sr_T_1 @[Reg.scala 17:22]
    reg sr_r_1 : UInt<5>, clock with :
      reset => (UInt<1>("h0"), sr_r_1) @[Reg.scala 16:16]
    when UInt<1>("h1") : @[Reg.scala 17:18]
      sr_r_1 <= sr_r @[Reg.scala 17:22]
    reg sr : UInt<5>, clock with :
      reset => (UInt<1>("h0"), sr) @[Reg.scala 16:16]
    when UInt<1>("h1") : @[Reg.scala 17:18]
      sr <= sr_r_1 @[Reg.scala 17:22]
    when done : @[Reg.scala 48:14]
      node _T = eq(sr, UInt<5>("h17")) @[Reg.scala 49:15]
      node _T_1 = bits(reset, 0, 0) @[Reg.scala 49:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Reg.scala 49:11]
      when _T_2 : @[Reg.scala 49:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Reg.scala 49:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Reg.scala 49:11]
        when _T_3 : @[Reg.scala 49:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Reg.scala:49 assert(sr === start)\n") : printf @[Reg.scala 49:11]
      node _T_4 = bits(reset, 0, 0) @[Reg.scala 50:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Reg.scala 50:9]
      when _T_5 : @[Reg.scala 50:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Reg.scala 50:9]
