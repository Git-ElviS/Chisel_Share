circuit ModuleIODynamicIndexTester :
  module PassthroughModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_2 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_3 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModuleTester :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<7>("h7b") @[Vec.scala 295:9]
    node _T = eq(io.out, UInt<7>("h7b")) @[Vec.scala 296:17]
    node _T_1 = asUInt(reset) @[Vec.scala 296:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 296:9]
    when _T_2 : @[Vec.scala 296:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 296:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 296:9]
      when _T_3 : @[Vec.scala 296:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:296 assert(io.out === 123.U)\n") : printf @[Vec.scala 296:9]

  module ModuleIODynamicIndexTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst PassthroughModule of PassthroughModule @[Vec.scala 300:36]
    PassthroughModule.clock <= clock
    PassthroughModule.reset <= reset
    inst PassthroughModule_1 of PassthroughModule_1 @[Vec.scala 300:36]
    PassthroughModule_1.clock <= clock
    PassthroughModule_1.reset <= reset
    inst PassthroughModule_2 of PassthroughModule_2 @[Vec.scala 300:36]
    PassthroughModule_2.clock <= clock
    PassthroughModule_2.reset <= reset
    inst PassthroughModule_3 of PassthroughModule_3 @[Vec.scala 300:36]
    PassthroughModule_3.clock <= clock
    PassthroughModule_3.reset <= reset
    wire duts : { flip in : UInt<32>, out : UInt<32>}[4] @[Vec.scala 300:29]
    duts[0].out <= PassthroughModule.io.out @[Vec.scala 300:29]
    PassthroughModule.io.in <= duts[0].in @[Vec.scala 300:29]
    duts[1].out <= PassthroughModule_1.io.out @[Vec.scala 300:29]
    PassthroughModule_1.io.in <= duts[1].in @[Vec.scala 300:29]
    duts[2].out <= PassthroughModule_2.io.out @[Vec.scala 300:29]
    PassthroughModule_2.io.in <= duts[2].in @[Vec.scala 300:29]
    duts[3].out <= PassthroughModule_3.io.out @[Vec.scala 300:29]
    PassthroughModule_3.io.in <= duts[3].in @[Vec.scala 300:29]
    inst tester of PassthroughModuleTester @[Vec.scala 301:22]
    tester.clock <= clock
    tester.reset <= reset
    reg cycle : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cycle, UInt<2>("h3")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cycle, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 78:15]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _T = neq(cycle, UInt<1>("h0")) @[Vec.scala 305:16]
    when _T : @[Vec.scala 305:25]
      duts[0].in <= UInt<1>("h0") @[Vec.scala 306:12]
      node _T_1 = eq(duts[0].out, UInt<1>("h0")) @[Vec.scala 307:20]
      node _T_2 = bits(reset, 0, 0) @[Vec.scala 307:13]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[Vec.scala 307:13]
      when _T_3 : @[Vec.scala 307:13]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[Vec.scala 307:13]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 307:13]
        when _T_4 : @[Vec.scala 307:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n") : printf @[Vec.scala 307:13]
    else :
      duts[0].in is invalid @[Vec.scala 309:12]
    node _T_5 = neq(cycle, UInt<1>("h1")) @[Vec.scala 305:16]
    when _T_5 : @[Vec.scala 305:25]
      duts[1].in <= UInt<1>("h0") @[Vec.scala 306:12]
      node _T_6 = eq(duts[1].out, UInt<1>("h0")) @[Vec.scala 307:20]
      node _T_7 = bits(reset, 0, 0) @[Vec.scala 307:13]
      node _T_8 = eq(_T_7, UInt<1>("h0")) @[Vec.scala 307:13]
      when _T_8 : @[Vec.scala 307:13]
        assert(clock, _T_6, UInt<1>("h1"), "") : assert_1 @[Vec.scala 307:13]
        node _T_9 = eq(_T_6, UInt<1>("h0")) @[Vec.scala 307:13]
        when _T_9 : @[Vec.scala 307:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n") : printf_1 @[Vec.scala 307:13]
    else :
      duts[1].in is invalid @[Vec.scala 309:12]
    node _T_10 = neq(cycle, UInt<2>("h2")) @[Vec.scala 305:16]
    when _T_10 : @[Vec.scala 305:25]
      duts[2].in <= UInt<1>("h0") @[Vec.scala 306:12]
      node _T_11 = eq(duts[2].out, UInt<1>("h0")) @[Vec.scala 307:20]
      node _T_12 = bits(reset, 0, 0) @[Vec.scala 307:13]
      node _T_13 = eq(_T_12, UInt<1>("h0")) @[Vec.scala 307:13]
      when _T_13 : @[Vec.scala 307:13]
        assert(clock, _T_11, UInt<1>("h1"), "") : assert_2 @[Vec.scala 307:13]
        node _T_14 = eq(_T_11, UInt<1>("h0")) @[Vec.scala 307:13]
        when _T_14 : @[Vec.scala 307:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n") : printf_2 @[Vec.scala 307:13]
    else :
      duts[2].in is invalid @[Vec.scala 309:12]
    node _T_15 = neq(cycle, UInt<2>("h3")) @[Vec.scala 305:16]
    when _T_15 : @[Vec.scala 305:25]
      duts[3].in <= UInt<1>("h0") @[Vec.scala 306:12]
      node _T_16 = eq(duts[3].out, UInt<1>("h0")) @[Vec.scala 307:20]
      node _T_17 = bits(reset, 0, 0) @[Vec.scala 307:13]
      node _T_18 = eq(_T_17, UInt<1>("h0")) @[Vec.scala 307:13]
      when _T_18 : @[Vec.scala 307:13]
        assert(clock, _T_16, UInt<1>("h1"), "") : assert_3 @[Vec.scala 307:13]
        node _T_19 = eq(_T_16, UInt<1>("h0")) @[Vec.scala 307:13]
        when _T_19 : @[Vec.scala 307:13]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:307 assert(m.out === 0.U)\n") : printf_3 @[Vec.scala 307:13]
    else :
      duts[3].in is invalid @[Vec.scala 309:12]
    tester.io <= duts[cycle] @[Vec.scala 313:15]
    node _T_20 = eq(duts[cycle].out, UInt<7>("h7b")) @[Vec.scala 314:26]
    node _T_21 = bits(reset, 0, 0) @[Vec.scala 314:9]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[Vec.scala 314:9]
    when _T_22 : @[Vec.scala 314:9]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_4 @[Vec.scala 314:9]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[Vec.scala 314:9]
      when _T_23 : @[Vec.scala 314:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:314 assert(duts(cycle).out === 123.U)\n") : printf_4 @[Vec.scala 314:9]
    when done : @[Vec.scala 316:14]
      node _T_24 = bits(reset, 0, 0) @[Vec.scala 316:20]
      node _T_25 = eq(_T_24, UInt<1>("h0")) @[Vec.scala 316:20]
      when _T_25 : @[Vec.scala 316:20]
        stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 316:20]
