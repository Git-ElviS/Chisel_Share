circuit EnableTester :
  module EnableTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg ens : UInt, clock with :
      reset => (reset, UInt<30>("h2e8f5fc7")) @[Counter.scala 20:20]
    node _ens_T = shr(ens, 1) @[Counter.scala 21:14]
    ens <= _ens_T @[Counter.scala 21:7]
    node _cntEnVal_T = bits(ens, 0, 0) @[Counter.scala 23:34]
    reg cntEnVal : UInt<5>, clock with :
      reset => (reset, UInt<5>("h0")) @[Counter.scala 62:40]
    wire cntEnVal_wrap : UInt<1>
    cntEnVal_wrap <= UInt<1>("h0")
    when _cntEnVal_T : @[Counter.scala 120:16]
      node cntEnVal_wrap_wrap = eq(cntEnVal, UInt<5>("h1f")) @[Counter.scala 74:24]
      node _cntEnVal_wrap_value_T = add(cntEnVal, UInt<1>("h1")) @[Counter.scala 78:24]
      node _cntEnVal_wrap_value_T_1 = tail(_cntEnVal_wrap_value_T, 1) @[Counter.scala 78:24]
      cntEnVal <= _cntEnVal_wrap_value_T_1 @[Counter.scala 78:15]
      cntEnVal_wrap <= cntEnVal_wrap_wrap @[Counter.scala 120:23]
    reg done_value : UInt<6>, clock with :
      reset => (reset, UInt<6>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node done_wrap_wrap = eq(done_value, UInt<6>("h20")) @[Counter.scala 74:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 78:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 78:15]
      when done_wrap_wrap : @[Counter.scala 88:20]
        done_value <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= done_wrap_wrap @[Counter.scala 120:23]
    when done : @[Counter.scala 26:14]
      node _T = eq(cntEnVal, UInt<5>("h14")) @[Counter.scala 27:21]
      node _T_1 = bits(reset, 0, 0) @[Counter.scala 27:11]
      node _T_2 = eq(_T_1, UInt<1>("h0")) @[Counter.scala 27:11]
      when _T_2 : @[Counter.scala 27:11]
        assert(clock, _T, UInt<1>("h1"), "") : assert @[Counter.scala 27:11]
        node _T_3 = eq(_T, UInt<1>("h0")) @[Counter.scala 27:11]
        when _T_3 : @[Counter.scala 27:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Counter.scala:27 assert(cntEnVal === popCount(seed).asUInt)\n") : printf @[Counter.scala 27:11]
      node _T_4 = bits(reset, 0, 0) @[Counter.scala 28:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Counter.scala 28:9]
      when _T_5 : @[Counter.scala 28:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Counter.scala 28:9]
