circuit ShiftTester :
  module ShiftTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire cntVal : UInt
    cntVal <= UInt<1>("h0")
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      done <= UInt<1>("h1") @[Counter.scala 120:23]
    node _sr_T = add(cntVal, UInt<5>("h17")) @[Reg.scala 47:33]
    node _sr_T_1 = tail(_sr_T, 1) @[Reg.scala 47:33]
    reg sr : UInt, clock with :
      reset => (UInt<1>("h0"), sr) @[Reg.scala 16:16]
    when UInt<1>("h1") : @[Reg.scala 17:18]
      sr <= _sr_T_1 @[Reg.scala 17:22]
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
