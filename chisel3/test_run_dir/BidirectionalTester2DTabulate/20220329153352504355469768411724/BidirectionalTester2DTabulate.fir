circuit BidirectionalTester2DTabulate :
  module TabulateModuleTester :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<1>("h1") @[Vec.scala 198:11]

  module TabulateModuleTester_1 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h2") @[Vec.scala 198:11]

  module TabulateModuleTester_2 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h3") @[Vec.scala 198:11]

  module TabulateModuleTester_3 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

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

  module BidirectionalTester2DTabulate :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst TabulateModuleTester of TabulateModuleTester @[Vec.scala 202:58]
    TabulateModuleTester.clock <= clock
    TabulateModuleTester.reset <= reset
    inst TabulateModuleTester_1 of TabulateModuleTester_1 @[Vec.scala 202:58]
    TabulateModuleTester_1.clock <= clock
    TabulateModuleTester_1.reset <= reset
    inst TabulateModuleTester_2 of TabulateModuleTester_2 @[Vec.scala 202:58]
    TabulateModuleTester_2.clock <= clock
    TabulateModuleTester_2.reset <= reset
    inst TabulateModuleTester_3 of TabulateModuleTester_3 @[Vec.scala 202:58]
    TabulateModuleTester_3.clock <= clock
    TabulateModuleTester_3.reset <= reset
    wire vec2D : { flip in : UInt<32>, out : UInt<32>}[4][1] @[Vec.scala 202:40]
    TabulateModuleTester.io <= vec2D[0][0] @[Vec.scala 202:40]
    TabulateModuleTester_1.io <= vec2D[0][1] @[Vec.scala 202:40]
    TabulateModuleTester_2.io <= vec2D[0][2] @[Vec.scala 202:40]
    TabulateModuleTester_3.io <= vec2D[0][3] @[Vec.scala 202:40]
    inst PassthroughModule of PassthroughModule @[Vec.scala 209:30]
    PassthroughModule.clock <= clock
    PassthroughModule.reset <= reset
    vec2D[0][0].out <= PassthroughModule.io.out @[Vec.scala 210:19]
    PassthroughModule.io.in <= vec2D[0][0].in @[Vec.scala 210:19]
    node _T = eq(PassthroughModule.io.out, UInt<1>("h1")) @[Vec.scala 211:29]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 211:13]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 211:13]
    when _T_2 : @[Vec.scala 211:13]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 211:13]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 211:13]
      when _T_3 : @[Vec.scala 211:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:211 assert(receiveMod.out === value.U)\n") : printf @[Vec.scala 211:13]
    inst PassthroughModule_1 of PassthroughModule_1 @[Vec.scala 209:30]
    PassthroughModule_1.clock <= clock
    PassthroughModule_1.reset <= reset
    vec2D[0][1].out <= PassthroughModule_1.io.out @[Vec.scala 210:19]
    PassthroughModule_1.io.in <= vec2D[0][1].in @[Vec.scala 210:19]
    node _T_4 = eq(PassthroughModule_1.io.out, UInt<2>("h2")) @[Vec.scala 211:29]
    node _T_5 = bits(reset, 0, 0) @[Vec.scala 211:13]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[Vec.scala 211:13]
    when _T_6 : @[Vec.scala 211:13]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[Vec.scala 211:13]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 211:13]
      when _T_7 : @[Vec.scala 211:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:211 assert(receiveMod.out === value.U)\n") : printf_1 @[Vec.scala 211:13]
    inst PassthroughModule_2 of PassthroughModule_2 @[Vec.scala 209:30]
    PassthroughModule_2.clock <= clock
    PassthroughModule_2.reset <= reset
    vec2D[0][2].out <= PassthroughModule_2.io.out @[Vec.scala 210:19]
    PassthroughModule_2.io.in <= vec2D[0][2].in @[Vec.scala 210:19]
    node _T_8 = eq(PassthroughModule_2.io.out, UInt<2>("h3")) @[Vec.scala 211:29]
    node _T_9 = bits(reset, 0, 0) @[Vec.scala 211:13]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[Vec.scala 211:13]
    when _T_10 : @[Vec.scala 211:13]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[Vec.scala 211:13]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[Vec.scala 211:13]
      when _T_11 : @[Vec.scala 211:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:211 assert(receiveMod.out === value.U)\n") : printf_2 @[Vec.scala 211:13]
    inst PassthroughModule_3 of PassthroughModule_3 @[Vec.scala 209:30]
    PassthroughModule_3.clock <= clock
    PassthroughModule_3.reset <= reset
    vec2D[0][3].out <= PassthroughModule_3.io.out @[Vec.scala 210:19]
    PassthroughModule_3.io.in <= vec2D[0][3].in @[Vec.scala 210:19]
    node _T_12 = eq(PassthroughModule_3.io.out, UInt<3>("h4")) @[Vec.scala 211:29]
    node _T_13 = bits(reset, 0, 0) @[Vec.scala 211:13]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[Vec.scala 211:13]
    when _T_14 : @[Vec.scala 211:13]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[Vec.scala 211:13]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[Vec.scala 211:13]
      when _T_15 : @[Vec.scala 211:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:211 assert(receiveMod.out === value.U)\n") : printf_3 @[Vec.scala 211:13]
    node _T_16 = bits(reset, 0, 0) @[Vec.scala 213:9]
    node _T_17 = eq(_T_16, UInt<1>("h0")) @[Vec.scala 213:9]
    when _T_17 : @[Vec.scala 213:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 213:9]
