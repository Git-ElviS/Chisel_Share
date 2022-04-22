circuit ShiftsTester :
  module ShiftsTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire cntVal : UInt
    cntVal <= UInt<1>("h0")
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      done <= UInt<1>("h1") @[Counter.scala 120:23]
    node _srs_T = add(cntVal, UInt<5>("h17")) @[Reg.scala 77:35]
    node _srs_T_1 = tail(_srs_T, 1) @[Reg.scala 77:35]
    reg srs_0 : UInt, clock with :
      reset => (UInt<1>("h0"), srs_0) @[Reg.scala 16:16]
    when UInt<1>("h1") : @[Reg.scala 17:18]
      srs_0 <= _srs_T_1 @[Reg.scala 17:22]
    reg REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), REG) @[Reg.scala 78:15]
    REG <= done @[Reg.scala 78:15]
    when REG : @[Reg.scala 78:23]
      node _T = eq(srs_0, UInt<5>("h17")) @[Reg.scala 81:21]
      node _T_1 = bits(reset, 0, 0) @[Reg.scala 81:15]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Reg.scala 81:15]
      when _T_2 : @[Reg.scala 81:15]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Reg.scala 81:15]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Reg.scala 81:15]
        when _T_3 : @[Reg.scala 81:15]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n") : printf @[Reg.scala 81:15]
      node _T_4 = bits(reset, 0, 0) @[Reg.scala 83:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Reg.scala 83:9]
      when _T_5 : @[Reg.scala 83:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Reg.scala 83:9]
