circuit AsyncResetSpec_Anon :
  module AsyncResetSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    wire initValue : SInt @[AsyncResetSpec.scala 198:27]
    node _reg_T = asAsyncReset(reset) @[AsyncResetSpec.scala 199:33]
    reg reg : SInt, clock with :
      reset => (_reg_T, asSInt(UInt<6>("h1b"))) @[AsyncResetSpec.scala 199:54]
    reg <= initValue @[AsyncResetSpec.scala 199:54]
    initValue <= asSInt(UInt<7>("h55")) @[AsyncResetSpec.scala 200:17]
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
    node _T = eq(count, UInt<1>("h0")) @[AsyncResetSpec.scala 202:18]
    when _T : @[AsyncResetSpec.scala 202:27]
      node _T_1 = eq(reg, asSInt(UInt<6>("h1b"))) @[AsyncResetSpec.scala 203:28]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 203:23]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[AsyncResetSpec.scala 203:23]
      when _T_3 : @[AsyncResetSpec.scala 203:23]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[AsyncResetSpec.scala 203:23]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[AsyncResetSpec.scala 203:23]
        when _T_4 : @[AsyncResetSpec.scala 203:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:203 chisel3.assert(reg === 27.S)\n") : printf @[AsyncResetSpec.scala 203:23]
    else :
      node _T_5 = eq(reg, asSInt(UInt<7>("h55"))) @[AsyncResetSpec.scala 205:28]
      node _T_6 = bits(reset, 0, 0) @[AsyncResetSpec.scala 205:23]
      node _T_7 = eq(_T_6, UInt<1>("h0")) @[AsyncResetSpec.scala 205:23]
      when _T_7 : @[AsyncResetSpec.scala 205:23]
        assert(clock, _T_5, UInt<1>("h1"), "") : assert_1 @[AsyncResetSpec.scala 205:23]
        node _T_8 = eq(_T_5, UInt<1>("h0")) @[AsyncResetSpec.scala 205:23]
        when _T_8 : @[AsyncResetSpec.scala 205:23]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:205 chisel3.assert(reg === -43.S)\n") : printf_1 @[AsyncResetSpec.scala 205:23]
    when done : @[AsyncResetSpec.scala 207:18]
      node _T_9 = bits(reset, 0, 0) @[AsyncResetSpec.scala 207:24]
      node _T_10 = eq(_T_9, UInt<1>("h0")) @[AsyncResetSpec.scala 207:24]
      when _T_10 : @[AsyncResetSpec.scala 207:24]
        stop(clock, UInt<1>("h1"), 0) : stop @[AsyncResetSpec.scala 207:24]
