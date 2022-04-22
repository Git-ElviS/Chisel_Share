circuit AsyncResetSpec_Anon :
  module AsyncResetSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _reg_T = asAsyncReset(reset) @[AsyncResetSpec.scala 227:33]
    reg reg : Interval[0, 13].0, clock with :
      reset => (_reg_T, asInterval(UInt<5>("hd"), 13, 13, 0)) @[AsyncResetSpec.scala 228:24]
    reg <= asInterval(UInt<4>("h7"), 7, 7, 0) @[AsyncResetSpec.scala 229:11]
    reg count : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(count, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(count, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      count <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = eq(count, UInt<1>("h0")) @[AsyncResetSpec.scala 233:18]
    when _T : @[AsyncResetSpec.scala 233:27]
      node _T_1 = eq(reg, asInterval(UInt<5>("hd"), 13, 13, 0)) @[AsyncResetSpec.scala 234:28]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 234:23]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[AsyncResetSpec.scala 234:23]
      when _T_3 : @[AsyncResetSpec.scala 234:23]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[AsyncResetSpec.scala 234:23]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[AsyncResetSpec.scala 234:23]
        when _T_4 : @[AsyncResetSpec.scala 234:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:234 chisel3.assert(reg === 13.I)\n") : printf @[AsyncResetSpec.scala 234:23]
    else :
      node _T_5 = eq(reg, asInterval(UInt<4>("h7"), 7, 7, 0)) @[AsyncResetSpec.scala 236:28]
      node _T_6 = bits(reset, 0, 0) @[AsyncResetSpec.scala 236:23]
      node _T_7 = eq(_T_6, UInt<1>("h0")) @[AsyncResetSpec.scala 236:23]
      when _T_7 : @[AsyncResetSpec.scala 236:23]
        assert(clock, _T_5, UInt<1>("h1"), "") : assert_1 @[AsyncResetSpec.scala 236:23]
        node _T_8 = eq(_T_5, UInt<1>("h0")) @[AsyncResetSpec.scala 236:23]
        when _T_8 : @[AsyncResetSpec.scala 236:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:236 chisel3.assert(reg === 7.I)\n") : printf_1 @[AsyncResetSpec.scala 236:23]
    when done : @[AsyncResetSpec.scala 238:18]
      node _T_9 = bits(reset, 0, 0) @[AsyncResetSpec.scala 238:24]
      node _T_10 = eq(_T_9, UInt<1>("h0")) @[AsyncResetSpec.scala 238:24]
      when _T_10 : @[AsyncResetSpec.scala 238:24]
        stop(clock, UInt<1>("h1"), 0) : stop @[AsyncResetSpec.scala 238:24]
