circuit AsyncResetTester :
  module AsyncResetTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cDiv_value : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire cDiv : UInt<1>
    cDiv <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node cDiv_wrap_wrap = eq(cDiv_value, UInt<2>("h3")) @[Counter.scala 74:24]
      node _cDiv_wrap_value_T = add(cDiv_value, UInt<1>("h1")) @[Counter.scala 78:24]
      node _cDiv_wrap_value_T_1 = tail(_cDiv_wrap_value_T, 1) @[Counter.scala 78:24]
      cDiv_value <= _cDiv_wrap_value_T_1 @[Counter.scala 78:15]
      cDiv <= cDiv_wrap_wrap @[Counter.scala 120:23]
    node slowClk = asClock(cDiv) @[AsyncResetSpec.scala 14:22]
    reg count : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(count, UInt<4>("hf")) @[Counter.scala 74:24]
      node _wrap_value_T = add(count, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      count <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    reg asyncResetNext : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[AsyncResetSpec.scala 18:31]
    node _asyncResetNext_T = eq(count, UInt<3>("h4")) @[AsyncResetSpec.scala 19:27]
    asyncResetNext <= _asyncResetNext_T @[AsyncResetSpec.scala 19:18]
    node asyncReset = asAsyncReset(asyncResetNext) @[AsyncResetSpec.scala 20:35]
    reg reg : UInt<8>, slowClk with :
      reset => (asyncReset, UInt<8>("h7b")) @[AsyncResetSpec.scala 23:12]
    reg <= UInt<3>("h5") @[AsyncResetSpec.scala 25:7]
    node _T = eq(count, UInt<2>("h3")) @[AsyncResetSpec.scala 27:14]
    when _T : @[AsyncResetSpec.scala 27:23]
      node _T_1 = eq(reg, UInt<3>("h5")) @[AsyncResetSpec.scala 28:16]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 28:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[AsyncResetSpec.scala 28:11]
      when _T_3 : @[AsyncResetSpec.scala 28:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[AsyncResetSpec.scala 28:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[AsyncResetSpec.scala 28:11]
        when _T_4 : @[AsyncResetSpec.scala 28:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:28 assert(reg === 5.U)\n") : printf @[AsyncResetSpec.scala 28:11]
    node _T_5 = geq(count, UInt<3>("h5")) @[AsyncResetSpec.scala 30:14]
    node _T_6 = lt(count, UInt<3>("h7")) @[AsyncResetSpec.scala 30:30]
    node _T_7 = and(_T_5, _T_6) @[AsyncResetSpec.scala 30:21]
    when _T_7 : @[AsyncResetSpec.scala 30:37]
      node _T_8 = eq(reg, UInt<7>("h7b")) @[AsyncResetSpec.scala 31:16]
      node _T_9 = bits(reset, 0, 0) @[AsyncResetSpec.scala 31:11]
      node _T_10 = eq(_T_9, UInt<1>("h0")) @[AsyncResetSpec.scala 31:11]
      when _T_10 : @[AsyncResetSpec.scala 31:11]
        assert(clock, _T_8, UInt<1>("h1"), "") : assert_1 @[AsyncResetSpec.scala 31:11]
        node _T_11 = eq(_T_8, UInt<1>("h0")) @[AsyncResetSpec.scala 31:11]
        when _T_11 : @[AsyncResetSpec.scala 31:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:31 assert(reg === 123.U)\n") : printf_1 @[AsyncResetSpec.scala 31:11]
    else :
      node _T_12 = geq(count, UInt<3>("h7")) @[AsyncResetSpec.scala 32:20]
      when _T_12 : @[AsyncResetSpec.scala 32:28]
        node _T_13 = eq(reg, UInt<3>("h5")) @[AsyncResetSpec.scala 33:16]
        node _T_14 = bits(reset, 0, 0) @[AsyncResetSpec.scala 33:11]
        node _T_15 = eq(_T_14, UInt<1>("h0")) @[AsyncResetSpec.scala 33:11]
        when _T_15 : @[AsyncResetSpec.scala 33:11]
          assert(clock, _T_13, UInt<1>("h1"), "") : assert_2 @[AsyncResetSpec.scala 33:11]
          node _T_16 = eq(_T_13, UInt<1>("h0")) @[AsyncResetSpec.scala 33:11]
          when _T_16 : @[AsyncResetSpec.scala 33:11]
            printf(clock, UInt<1>("h1"), "Assertion failed\n    at AsyncResetSpec.scala:33 assert(reg === 5.U)\n") : printf_2 @[AsyncResetSpec.scala 33:11]
    when done : @[AsyncResetSpec.scala 36:14]
      node _T_17 = bits(reset, 0, 0) @[AsyncResetSpec.scala 37:9]
      node _T_18 = eq(_T_17, UInt<1>("h0")) @[AsyncResetSpec.scala 37:9]
      when _T_18 : @[AsyncResetSpec.scala 37:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[AsyncResetSpec.scala 37:9]
