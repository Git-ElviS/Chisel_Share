circuit ShiftResetTester :
  module ShiftResetTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire cntVal : UInt
    cntVal <= UInt<1>("h0")
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      done <= UInt<1>("h1") @[Counter.scala 120:23]
    node _sr_T = add(cntVal, UInt<5>("h17")) @[Reg.scala 57:33]
    node _sr_T_1 = tail(_sr_T, 1) @[Reg.scala 57:33]
    reg sr_r : UInt, clock with :
      reset => (reset, UInt<1>("h1")) @[Reg.scala 28:20]
    when UInt<1>("h1") : @[Reg.scala 29:18]
      sr_r <= _sr_T_1 @[Reg.scala 29:22]
    reg sr : UInt, clock with :
      reset => (reset, UInt<1>("h1")) @[Reg.scala 28:20]
    when UInt<1>("h1") : @[Reg.scala 29:18]
      sr <= sr_r @[Reg.scala 29:22]
    when done : @[Reg.scala 58:14]
      node _T = eq(sr, UInt<1>("h1")) @[Reg.scala 59:15]
      node _T_1 = bits(reset, 0, 0) @[Reg.scala 59:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Reg.scala 59:11]
      when _T_2 : @[Reg.scala 59:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Reg.scala 59:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Reg.scala 59:11]
        when _T_3 : @[Reg.scala 59:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Reg.scala:59 assert(sr === (if (n == 0) cntVal + 23.U else 1.U))\n") : printf @[Reg.scala 59:11]
      node _T_4 = bits(reset, 0, 0) @[Reg.scala 60:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Reg.scala 60:9]
      when _T_5 : @[Reg.scala 60:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Reg.scala 60:9]
