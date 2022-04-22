circuit CastFromLitTester :
  module CastFromLit :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<7>, valid : UInt<1>}

    io.out <= UInt<1>("h0") @[StrongEnum.scala 62:10]
    node _io_valid_T = eq(io.out, UInt<1>("h0")) @[StrongEnum.scala 63:22]
    node _io_valid_T_1 = eq(io.out, UInt<1>("h1")) @[StrongEnum.scala 63:22]
    node _io_valid_T_2 = eq(io.out, UInt<2>("h2")) @[StrongEnum.scala 63:22]
    node _io_valid_T_3 = eq(io.out, UInt<7>("h64")) @[StrongEnum.scala 63:22]
    node _io_valid_T_4 = eq(io.out, UInt<7>("h65")) @[StrongEnum.scala 63:22]
    node _io_valid_T_5 = or(_io_valid_T, _io_valid_T_1) @[StrongEnum.scala 63:22]
    node _io_valid_T_6 = or(_io_valid_T_5, _io_valid_T_2) @[StrongEnum.scala 63:22]
    node _io_valid_T_7 = or(_io_valid_T_6, _io_valid_T_3) @[StrongEnum.scala 63:22]
    node _io_valid_T_8 = or(_io_valid_T_7, _io_valid_T_4) @[StrongEnum.scala 63:22]
    io.valid <= _io_valid_T_8 @[StrongEnum.scala 63:12]

  module CastFromLit_1 :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<7>, valid : UInt<1>}

    io.out <= UInt<1>("h1") @[StrongEnum.scala 62:10]
    node _io_valid_T = eq(io.out, UInt<1>("h0")) @[StrongEnum.scala 63:22]
    node _io_valid_T_1 = eq(io.out, UInt<1>("h1")) @[StrongEnum.scala 63:22]
    node _io_valid_T_2 = eq(io.out, UInt<2>("h2")) @[StrongEnum.scala 63:22]
    node _io_valid_T_3 = eq(io.out, UInt<7>("h64")) @[StrongEnum.scala 63:22]
    node _io_valid_T_4 = eq(io.out, UInt<7>("h65")) @[StrongEnum.scala 63:22]
    node _io_valid_T_5 = or(_io_valid_T, _io_valid_T_1) @[StrongEnum.scala 63:22]
    node _io_valid_T_6 = or(_io_valid_T_5, _io_valid_T_2) @[StrongEnum.scala 63:22]
    node _io_valid_T_7 = or(_io_valid_T_6, _io_valid_T_3) @[StrongEnum.scala 63:22]
    node _io_valid_T_8 = or(_io_valid_T_7, _io_valid_T_4) @[StrongEnum.scala 63:22]
    io.valid <= _io_valid_T_8 @[StrongEnum.scala 63:12]

  module CastFromLit_2 :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<7>, valid : UInt<1>}

    io.out <= UInt<2>("h2") @[StrongEnum.scala 62:10]
    node _io_valid_T = eq(io.out, UInt<1>("h0")) @[StrongEnum.scala 63:22]
    node _io_valid_T_1 = eq(io.out, UInt<1>("h1")) @[StrongEnum.scala 63:22]
    node _io_valid_T_2 = eq(io.out, UInt<2>("h2")) @[StrongEnum.scala 63:22]
    node _io_valid_T_3 = eq(io.out, UInt<7>("h64")) @[StrongEnum.scala 63:22]
    node _io_valid_T_4 = eq(io.out, UInt<7>("h65")) @[StrongEnum.scala 63:22]
    node _io_valid_T_5 = or(_io_valid_T, _io_valid_T_1) @[StrongEnum.scala 63:22]
    node _io_valid_T_6 = or(_io_valid_T_5, _io_valid_T_2) @[StrongEnum.scala 63:22]
    node _io_valid_T_7 = or(_io_valid_T_6, _io_valid_T_3) @[StrongEnum.scala 63:22]
    node _io_valid_T_8 = or(_io_valid_T_7, _io_valid_T_4) @[StrongEnum.scala 63:22]
    io.valid <= _io_valid_T_8 @[StrongEnum.scala 63:12]

  module CastFromLit_3 :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<7>, valid : UInt<1>}

    io.out <= UInt<7>("h64") @[StrongEnum.scala 62:10]
    node _io_valid_T = eq(io.out, UInt<1>("h0")) @[StrongEnum.scala 63:22]
    node _io_valid_T_1 = eq(io.out, UInt<1>("h1")) @[StrongEnum.scala 63:22]
    node _io_valid_T_2 = eq(io.out, UInt<2>("h2")) @[StrongEnum.scala 63:22]
    node _io_valid_T_3 = eq(io.out, UInt<7>("h64")) @[StrongEnum.scala 63:22]
    node _io_valid_T_4 = eq(io.out, UInt<7>("h65")) @[StrongEnum.scala 63:22]
    node _io_valid_T_5 = or(_io_valid_T, _io_valid_T_1) @[StrongEnum.scala 63:22]
    node _io_valid_T_6 = or(_io_valid_T_5, _io_valid_T_2) @[StrongEnum.scala 63:22]
    node _io_valid_T_7 = or(_io_valid_T_6, _io_valid_T_3) @[StrongEnum.scala 63:22]
    node _io_valid_T_8 = or(_io_valid_T_7, _io_valid_T_4) @[StrongEnum.scala 63:22]
    io.valid <= _io_valid_T_8 @[StrongEnum.scala 63:12]

  module CastFromLit_4 :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<7>, valid : UInt<1>}

    io.out <= UInt<7>("h65") @[StrongEnum.scala 62:10]
    node _io_valid_T = eq(io.out, UInt<1>("h0")) @[StrongEnum.scala 63:22]
    node _io_valid_T_1 = eq(io.out, UInt<1>("h1")) @[StrongEnum.scala 63:22]
    node _io_valid_T_2 = eq(io.out, UInt<2>("h2")) @[StrongEnum.scala 63:22]
    node _io_valid_T_3 = eq(io.out, UInt<7>("h64")) @[StrongEnum.scala 63:22]
    node _io_valid_T_4 = eq(io.out, UInt<7>("h65")) @[StrongEnum.scala 63:22]
    node _io_valid_T_5 = or(_io_valid_T, _io_valid_T_1) @[StrongEnum.scala 63:22]
    node _io_valid_T_6 = or(_io_valid_T_5, _io_valid_T_2) @[StrongEnum.scala 63:22]
    node _io_valid_T_7 = or(_io_valid_T_6, _io_valid_T_3) @[StrongEnum.scala 63:22]
    node _io_valid_T_8 = or(_io_valid_T_7, _io_valid_T_4) @[StrongEnum.scala 63:22]
    io.valid <= _io_valid_T_8 @[StrongEnum.scala 63:12]

  module CastFromLitTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst mod of CastFromLit @[StrongEnum.scala 177:21]
    mod.clock <= clock
    mod.reset <= reset
    node _T = eq(mod.io.out, UInt<1>("h0")) @[StrongEnum.scala 178:23]
    node _T_1 = bits(reset, 0, 0) @[StrongEnum.scala 178:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[StrongEnum.scala 178:11]
    when _T_2 : @[StrongEnum.scala 178:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[StrongEnum.scala 178:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[StrongEnum.scala 178:11]
      when _T_3 : @[StrongEnum.scala 178:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:178 assert(mod.io.out === enum)\n") : printf @[StrongEnum.scala 178:11]
    node _T_4 = eq(mod.io.valid, UInt<1>("h1")) @[StrongEnum.scala 179:25]
    node _T_5 = bits(reset, 0, 0) @[StrongEnum.scala 179:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[StrongEnum.scala 179:11]
    when _T_6 : @[StrongEnum.scala 179:11]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[StrongEnum.scala 179:11]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[StrongEnum.scala 179:11]
      when _T_7 : @[StrongEnum.scala 179:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n") : printf_1 @[StrongEnum.scala 179:11]
    inst mod_1 of CastFromLit_1 @[StrongEnum.scala 177:21]
    mod_1.clock <= clock
    mod_1.reset <= reset
    node _T_8 = eq(mod_1.io.out, UInt<1>("h1")) @[StrongEnum.scala 178:23]
    node _T_9 = bits(reset, 0, 0) @[StrongEnum.scala 178:11]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[StrongEnum.scala 178:11]
    when _T_10 : @[StrongEnum.scala 178:11]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[StrongEnum.scala 178:11]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[StrongEnum.scala 178:11]
      when _T_11 : @[StrongEnum.scala 178:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:178 assert(mod.io.out === enum)\n") : printf_2 @[StrongEnum.scala 178:11]
    node _T_12 = eq(mod_1.io.valid, UInt<1>("h1")) @[StrongEnum.scala 179:25]
    node _T_13 = bits(reset, 0, 0) @[StrongEnum.scala 179:11]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[StrongEnum.scala 179:11]
    when _T_14 : @[StrongEnum.scala 179:11]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[StrongEnum.scala 179:11]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[StrongEnum.scala 179:11]
      when _T_15 : @[StrongEnum.scala 179:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n") : printf_3 @[StrongEnum.scala 179:11]
    inst mod_2 of CastFromLit_2 @[StrongEnum.scala 177:21]
    mod_2.clock <= clock
    mod_2.reset <= reset
    node _T_16 = eq(mod_2.io.out, UInt<2>("h2")) @[StrongEnum.scala 178:23]
    node _T_17 = bits(reset, 0, 0) @[StrongEnum.scala 178:11]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[StrongEnum.scala 178:11]
    when _T_18 : @[StrongEnum.scala 178:11]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[StrongEnum.scala 178:11]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[StrongEnum.scala 178:11]
      when _T_19 : @[StrongEnum.scala 178:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:178 assert(mod.io.out === enum)\n") : printf_4 @[StrongEnum.scala 178:11]
    node _T_20 = eq(mod_2.io.valid, UInt<1>("h1")) @[StrongEnum.scala 179:25]
    node _T_21 = bits(reset, 0, 0) @[StrongEnum.scala 179:11]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[StrongEnum.scala 179:11]
    when _T_22 : @[StrongEnum.scala 179:11]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[StrongEnum.scala 179:11]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[StrongEnum.scala 179:11]
      when _T_23 : @[StrongEnum.scala 179:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n") : printf_5 @[StrongEnum.scala 179:11]
    inst mod_3 of CastFromLit_3 @[StrongEnum.scala 177:21]
    mod_3.clock <= clock
    mod_3.reset <= reset
    node _T_24 = eq(mod_3.io.out, UInt<7>("h64")) @[StrongEnum.scala 178:23]
    node _T_25 = bits(reset, 0, 0) @[StrongEnum.scala 178:11]
    node _T_26 = eq(_T_25, UInt<1>("h0")) @[StrongEnum.scala 178:11]
    when _T_26 : @[StrongEnum.scala 178:11]
      assert(clock, _T_24, UInt<1>("h1"), "") : assert_6 @[StrongEnum.scala 178:11]
      node _T_27 = eq(_T_24, UInt<1>("h0")) @[StrongEnum.scala 178:11]
      when _T_27 : @[StrongEnum.scala 178:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:178 assert(mod.io.out === enum)\n") : printf_6 @[StrongEnum.scala 178:11]
    node _T_28 = eq(mod_3.io.valid, UInt<1>("h1")) @[StrongEnum.scala 179:25]
    node _T_29 = bits(reset, 0, 0) @[StrongEnum.scala 179:11]
    node _T_30 = eq(_T_29, UInt<1>("h0")) @[StrongEnum.scala 179:11]
    when _T_30 : @[StrongEnum.scala 179:11]
      assert(clock, _T_28, UInt<1>("h1"), "") : assert_7 @[StrongEnum.scala 179:11]
      node _T_31 = eq(_T_28, UInt<1>("h0")) @[StrongEnum.scala 179:11]
      when _T_31 : @[StrongEnum.scala 179:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n") : printf_7 @[StrongEnum.scala 179:11]
    inst mod_4 of CastFromLit_4 @[StrongEnum.scala 177:21]
    mod_4.clock <= clock
    mod_4.reset <= reset
    node _T_32 = eq(mod_4.io.out, UInt<7>("h65")) @[StrongEnum.scala 178:23]
    node _T_33 = bits(reset, 0, 0) @[StrongEnum.scala 178:11]
    node _T_34 = eq(_T_33, UInt<1>("h0")) @[StrongEnum.scala 178:11]
    when _T_34 : @[StrongEnum.scala 178:11]
      assert(clock, _T_32, UInt<1>("h1"), "") : assert_8 @[StrongEnum.scala 178:11]
      node _T_35 = eq(_T_32, UInt<1>("h0")) @[StrongEnum.scala 178:11]
      when _T_35 : @[StrongEnum.scala 178:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:178 assert(mod.io.out === enum)\n") : printf_8 @[StrongEnum.scala 178:11]
    node _T_36 = eq(mod_4.io.valid, UInt<1>("h1")) @[StrongEnum.scala 179:25]
    node _T_37 = bits(reset, 0, 0) @[StrongEnum.scala 179:11]
    node _T_38 = eq(_T_37, UInt<1>("h0")) @[StrongEnum.scala 179:11]
    when _T_38 : @[StrongEnum.scala 179:11]
      assert(clock, _T_36, UInt<1>("h1"), "") : assert_9 @[StrongEnum.scala 179:11]
      node _T_39 = eq(_T_36, UInt<1>("h0")) @[StrongEnum.scala 179:11]
      when _T_39 : @[StrongEnum.scala 179:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at StrongEnum.scala:179 assert(mod.io.valid === true.B)\n") : printf_9 @[StrongEnum.scala 179:11]
    node _T_40 = bits(reset, 0, 0) @[StrongEnum.scala 181:7]
    node _T_41 = eq(_T_40, UInt<1>("h0")) @[StrongEnum.scala 181:7]
    when _T_41 : @[StrongEnum.scala 181:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[StrongEnum.scala 181:7]
