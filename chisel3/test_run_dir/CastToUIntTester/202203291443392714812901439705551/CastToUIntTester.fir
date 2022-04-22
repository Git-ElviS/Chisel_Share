circuit CastToUIntTester :
  module CastToUInt :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt}

    node _io_out_T = asUInt(io.in) @[StrongEnum.scala 53:25]
    io.out <= _io_out_T @[StrongEnum.scala 53:10]

  module CastToUInt_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt}

    node _io_out_T = asUInt(io.in) @[StrongEnum.scala 53:25]
    io.out <= _io_out_T @[StrongEnum.scala 53:10]

  module CastToUInt_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt}

    node _io_out_T = asUInt(io.in) @[StrongEnum.scala 53:25]
    io.out <= _io_out_T @[StrongEnum.scala 53:10]

  module CastToUInt_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt}

    node _io_out_T = asUInt(io.in) @[StrongEnum.scala 53:25]
    io.out <= _io_out_T @[StrongEnum.scala 53:10]

  module CastToUInt_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<7>, out : UInt}

    node _io_out_T = asUInt(io.in) @[StrongEnum.scala 53:25]
    io.out <= _io_out_T @[StrongEnum.scala 53:10]

  module CastToUIntTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst mod of CastToUInt @[StrongEnum.scala 168:21]
    mod.clock <= clock
    mod.reset <= reset
    mod.io.in <= UInt<1>("h0") @[StrongEnum.scala 169:15]
    node _T = eq(mod.io.out, UInt<1>("h0")) @[StrongEnum.scala 170:23]
    node _T_1 = bits(reset, 0, 0) @[StrongEnum.scala 170:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[StrongEnum.scala 170:11]
    when _T_2 : @[StrongEnum.scala 170:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[StrongEnum.scala 170:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[StrongEnum.scala 170:11]
      when _T_3 : @[StrongEnum.scala 170:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n") : printf @[StrongEnum.scala 170:11]
    inst mod_1 of CastToUInt_1 @[StrongEnum.scala 168:21]
    mod_1.clock <= clock
    mod_1.reset <= reset
    mod_1.io.in <= UInt<1>("h1") @[StrongEnum.scala 169:15]
    node _T_4 = eq(mod_1.io.out, UInt<1>("h1")) @[StrongEnum.scala 170:23]
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 170:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[StrongEnum.scala 170:11]
    when _T_6 : @[StrongEnum.scala 170:11]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[StrongEnum.scala 170:11]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[StrongEnum.scala 170:11]
      when _T_7 : @[StrongEnum.scala 170:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n") : printf_1 @[StrongEnum.scala 170:11]
    inst mod_2 of CastToUInt_2 @[StrongEnum.scala 168:21]
    mod_2.clock <= clock
    mod_2.reset <= reset
    mod_2.io.in <= UInt<2>("h2") @[StrongEnum.scala 169:15]
    node _T_8 = eq(mod_2.io.out, UInt<2>("h2")) @[StrongEnum.scala 170:23]
    node _T_9 = bits(reset, 0, 0) @[StrongEnum.scala 170:11]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[StrongEnum.scala 170:11]
    when _T_10 : @[StrongEnum.scala 170:11]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[StrongEnum.scala 170:11]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[StrongEnum.scala 170:11]
      when _T_11 : @[StrongEnum.scala 170:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n") : printf_2 @[StrongEnum.scala 170:11]
    inst mod_3 of CastToUInt_3 @[StrongEnum.scala 168:21]
    mod_3.clock <= clock
    mod_3.reset <= reset
    mod_3.io.in <= UInt<7>("h64") @[StrongEnum.scala 169:15]
    node _T_12 = eq(mod_3.io.out, UInt<7>("h64")) @[StrongEnum.scala 170:23]
    node _T_13 = bits(reset, 0, 0) @[StrongEnum.scala 170:11]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[StrongEnum.scala 170:11]
    when _T_14 : @[StrongEnum.scala 170:11]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[StrongEnum.scala 170:11]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[StrongEnum.scala 170:11]
      when _T_15 : @[StrongEnum.scala 170:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n") : printf_3 @[StrongEnum.scala 170:11]
    inst mod_4 of CastToUInt_4 @[StrongEnum.scala 168:21]
    mod_4.clock <= clock
    mod_4.reset <= reset
    mod_4.io.in <= UInt<7>("h65") @[StrongEnum.scala 169:15]
    node _T_16 = eq(mod_4.io.out, UInt<7>("h65")) @[StrongEnum.scala 170:23]
    node _T_17 = bits(reset, 0, 0) @[StrongEnum.scala 170:11]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[StrongEnum.scala 170:11]
    when _T_18 : @[StrongEnum.scala 170:11]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[StrongEnum.scala 170:11]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[StrongEnum.scala 170:11]
      when _T_19 : @[StrongEnum.scala 170:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:170 assert(mod.io.out === lit)\n") : printf_4 @[StrongEnum.scala 170:11]
    node _T_20 = bits(reset, 0, 0) @[StrongEnum.scala 172:7]
    node _T_21 = eq(_T_20, UInt<1>("h0")) @[StrongEnum.scala 172:7]
    when _T_21 : @[StrongEnum.scala 172:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[StrongEnum.scala 172:7]
