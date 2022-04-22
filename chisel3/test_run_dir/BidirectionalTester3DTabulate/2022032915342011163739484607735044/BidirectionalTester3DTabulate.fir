circuit BidirectionalTester3DTabulate :
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

    io.in <= UInt<2>("h2") @[Vec.scala 198:11]

  module TabulateModuleTester_4 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h3") @[Vec.scala 198:11]

  module TabulateModuleTester_5 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

  module TabulateModuleTester_6 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h2") @[Vec.scala 198:11]

  module TabulateModuleTester_7 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h3") @[Vec.scala 198:11]

  module TabulateModuleTester_8 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

  module TabulateModuleTester_9 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h3") @[Vec.scala 198:11]

  module TabulateModuleTester_10 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

  module TabulateModuleTester_11 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h5") @[Vec.scala 198:11]

  module TabulateModuleTester_12 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<2>("h3") @[Vec.scala 198:11]

  module TabulateModuleTester_13 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

  module TabulateModuleTester_14 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h5") @[Vec.scala 198:11]

  module TabulateModuleTester_15 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

  module TabulateModuleTester_16 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h5") @[Vec.scala 198:11]

  module TabulateModuleTester_17 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h6") @[Vec.scala 198:11]

  module TabulateModuleTester_18 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h4") @[Vec.scala 198:11]

  module TabulateModuleTester_19 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h5") @[Vec.scala 198:11]

  module TabulateModuleTester_20 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h6") @[Vec.scala 198:11]

  module TabulateModuleTester_21 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h5") @[Vec.scala 198:11]

  module TabulateModuleTester_22 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h6") @[Vec.scala 198:11]

  module TabulateModuleTester_23 :
    input clock : Clock
    input reset : Reset
    input io : { flip in : UInt<32>, out : UInt<32>}

    io.in <= UInt<3>("h7") @[Vec.scala 198:11]

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

  module PassthroughModule_4 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_5 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_6 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_7 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_8 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_9 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_10 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_11 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_12 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_13 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_14 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_15 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_16 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_17 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_18 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_19 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_20 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_21 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_22 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughModule_23 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module BidirectionalTester3DTabulate :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst TabulateModuleTester of TabulateModuleTester @[Vec.scala 217:64]
    TabulateModuleTester.clock <= clock
    TabulateModuleTester.reset <= reset
    inst TabulateModuleTester_1 of TabulateModuleTester_1 @[Vec.scala 217:64]
    TabulateModuleTester_1.clock <= clock
    TabulateModuleTester_1.reset <= reset
    inst TabulateModuleTester_2 of TabulateModuleTester_2 @[Vec.scala 217:64]
    TabulateModuleTester_2.clock <= clock
    TabulateModuleTester_2.reset <= reset
    inst TabulateModuleTester_3 of TabulateModuleTester_3 @[Vec.scala 217:64]
    TabulateModuleTester_3.clock <= clock
    TabulateModuleTester_3.reset <= reset
    inst TabulateModuleTester_4 of TabulateModuleTester_4 @[Vec.scala 217:64]
    TabulateModuleTester_4.clock <= clock
    TabulateModuleTester_4.reset <= reset
    inst TabulateModuleTester_5 of TabulateModuleTester_5 @[Vec.scala 217:64]
    TabulateModuleTester_5.clock <= clock
    TabulateModuleTester_5.reset <= reset
    inst TabulateModuleTester_6 of TabulateModuleTester_6 @[Vec.scala 217:64]
    TabulateModuleTester_6.clock <= clock
    TabulateModuleTester_6.reset <= reset
    inst TabulateModuleTester_7 of TabulateModuleTester_7 @[Vec.scala 217:64]
    TabulateModuleTester_7.clock <= clock
    TabulateModuleTester_7.reset <= reset
    inst TabulateModuleTester_8 of TabulateModuleTester_8 @[Vec.scala 217:64]
    TabulateModuleTester_8.clock <= clock
    TabulateModuleTester_8.reset <= reset
    inst TabulateModuleTester_9 of TabulateModuleTester_9 @[Vec.scala 217:64]
    TabulateModuleTester_9.clock <= clock
    TabulateModuleTester_9.reset <= reset
    inst TabulateModuleTester_10 of TabulateModuleTester_10 @[Vec.scala 217:64]
    TabulateModuleTester_10.clock <= clock
    TabulateModuleTester_10.reset <= reset
    inst TabulateModuleTester_11 of TabulateModuleTester_11 @[Vec.scala 217:64]
    TabulateModuleTester_11.clock <= clock
    TabulateModuleTester_11.reset <= reset
    inst TabulateModuleTester_12 of TabulateModuleTester_12 @[Vec.scala 217:64]
    TabulateModuleTester_12.clock <= clock
    TabulateModuleTester_12.reset <= reset
    inst TabulateModuleTester_13 of TabulateModuleTester_13 @[Vec.scala 217:64]
    TabulateModuleTester_13.clock <= clock
    TabulateModuleTester_13.reset <= reset
    inst TabulateModuleTester_14 of TabulateModuleTester_14 @[Vec.scala 217:64]
    TabulateModuleTester_14.clock <= clock
    TabulateModuleTester_14.reset <= reset
    inst TabulateModuleTester_15 of TabulateModuleTester_15 @[Vec.scala 217:64]
    TabulateModuleTester_15.clock <= clock
    TabulateModuleTester_15.reset <= reset
    inst TabulateModuleTester_16 of TabulateModuleTester_16 @[Vec.scala 217:64]
    TabulateModuleTester_16.clock <= clock
    TabulateModuleTester_16.reset <= reset
    inst TabulateModuleTester_17 of TabulateModuleTester_17 @[Vec.scala 217:64]
    TabulateModuleTester_17.clock <= clock
    TabulateModuleTester_17.reset <= reset
    inst TabulateModuleTester_18 of TabulateModuleTester_18 @[Vec.scala 217:64]
    TabulateModuleTester_18.clock <= clock
    TabulateModuleTester_18.reset <= reset
    inst TabulateModuleTester_19 of TabulateModuleTester_19 @[Vec.scala 217:64]
    TabulateModuleTester_19.clock <= clock
    TabulateModuleTester_19.reset <= reset
    inst TabulateModuleTester_20 of TabulateModuleTester_20 @[Vec.scala 217:64]
    TabulateModuleTester_20.clock <= clock
    TabulateModuleTester_20.reset <= reset
    inst TabulateModuleTester_21 of TabulateModuleTester_21 @[Vec.scala 217:64]
    TabulateModuleTester_21.clock <= clock
    TabulateModuleTester_21.reset <= reset
    inst TabulateModuleTester_22 of TabulateModuleTester_22 @[Vec.scala 217:64]
    TabulateModuleTester_22.clock <= clock
    TabulateModuleTester_22.reset <= reset
    inst TabulateModuleTester_23 of TabulateModuleTester_23 @[Vec.scala 217:64]
    TabulateModuleTester_23.clock <= clock
    TabulateModuleTester_23.reset <= reset
    wire vec3D : { flip in : UInt<32>, out : UInt<32>}[3][2][4] @[Vec.scala 217:43]
    TabulateModuleTester.io <= vec3D[0][0][0] @[Vec.scala 217:43]
    TabulateModuleTester_1.io <= vec3D[0][0][1] @[Vec.scala 217:43]
    TabulateModuleTester_2.io <= vec3D[0][0][2] @[Vec.scala 217:43]
    TabulateModuleTester_3.io <= vec3D[0][1][0] @[Vec.scala 217:43]
    TabulateModuleTester_4.io <= vec3D[0][1][1] @[Vec.scala 217:43]
    TabulateModuleTester_5.io <= vec3D[0][1][2] @[Vec.scala 217:43]
    TabulateModuleTester_6.io <= vec3D[1][0][0] @[Vec.scala 217:43]
    TabulateModuleTester_7.io <= vec3D[1][0][1] @[Vec.scala 217:43]
    TabulateModuleTester_8.io <= vec3D[1][0][2] @[Vec.scala 217:43]
    TabulateModuleTester_9.io <= vec3D[1][1][0] @[Vec.scala 217:43]
    TabulateModuleTester_10.io <= vec3D[1][1][1] @[Vec.scala 217:43]
    TabulateModuleTester_11.io <= vec3D[1][1][2] @[Vec.scala 217:43]
    TabulateModuleTester_12.io <= vec3D[2][0][0] @[Vec.scala 217:43]
    TabulateModuleTester_13.io <= vec3D[2][0][1] @[Vec.scala 217:43]
    TabulateModuleTester_14.io <= vec3D[2][0][2] @[Vec.scala 217:43]
    TabulateModuleTester_15.io <= vec3D[2][1][0] @[Vec.scala 217:43]
    TabulateModuleTester_16.io <= vec3D[2][1][1] @[Vec.scala 217:43]
    TabulateModuleTester_17.io <= vec3D[2][1][2] @[Vec.scala 217:43]
    TabulateModuleTester_18.io <= vec3D[3][0][0] @[Vec.scala 217:43]
    TabulateModuleTester_19.io <= vec3D[3][0][1] @[Vec.scala 217:43]
    TabulateModuleTester_20.io <= vec3D[3][0][2] @[Vec.scala 217:43]
    TabulateModuleTester_21.io <= vec3D[3][1][0] @[Vec.scala 217:43]
    TabulateModuleTester_22.io <= vec3D[3][1][1] @[Vec.scala 217:43]
    TabulateModuleTester_23.io <= vec3D[3][1][2] @[Vec.scala 217:43]
    inst PassthroughModule of PassthroughModule @[Vec.scala 225:30]
    PassthroughModule.clock <= clock
    PassthroughModule.reset <= reset
    vec3D[0][0][0].out <= PassthroughModule.io.out @[Vec.scala 226:22]
    PassthroughModule.io.in <= vec3D[0][0][0].in @[Vec.scala 226:22]
    node _T = eq(PassthroughModule.io.out, UInt<1>("h1")) @[Vec.scala 227:29]
    node _T_1 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_2 : @[Vec.scala 227:13]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[Vec.scala 227:13]
      node _T_3 = eq(_T, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_3 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf @[Vec.scala 227:13]
    inst PassthroughModule_1 of PassthroughModule_1 @[Vec.scala 225:30]
    PassthroughModule_1.clock <= clock
    PassthroughModule_1.reset <= reset
    vec3D[0][0][1].out <= PassthroughModule_1.io.out @[Vec.scala 226:22]
    PassthroughModule_1.io.in <= vec3D[0][0][1].in @[Vec.scala 226:22]
    node _T_4 = eq(PassthroughModule_1.io.out, UInt<2>("h2")) @[Vec.scala 227:29]
    node _T_5 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_6 : @[Vec.scala 227:13]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[Vec.scala 227:13]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_7 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_1 @[Vec.scala 227:13]
    inst PassthroughModule_2 of PassthroughModule_2 @[Vec.scala 225:30]
    PassthroughModule_2.clock <= clock
    PassthroughModule_2.reset <= reset
    vec3D[0][0][2].out <= PassthroughModule_2.io.out @[Vec.scala 226:22]
    PassthroughModule_2.io.in <= vec3D[0][0][2].in @[Vec.scala 226:22]
    node _T_8 = eq(PassthroughModule_2.io.out, UInt<2>("h3")) @[Vec.scala 227:29]
    node _T_9 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_10 = eq(_T_9, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_10 : @[Vec.scala 227:13]
      assert(clock, _T_8, UInt<1>("h1"), "") : assert_2 @[Vec.scala 227:13]
      node _T_11 = eq(_T_8, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_11 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_2 @[Vec.scala 227:13]
    inst PassthroughModule_3 of PassthroughModule_3 @[Vec.scala 225:30]
    PassthroughModule_3.clock <= clock
    PassthroughModule_3.reset <= reset
    vec3D[0][1][0].out <= PassthroughModule_3.io.out @[Vec.scala 226:22]
    PassthroughModule_3.io.in <= vec3D[0][1][0].in @[Vec.scala 226:22]
    node _T_12 = eq(PassthroughModule_3.io.out, UInt<2>("h2")) @[Vec.scala 227:29]
    node _T_13 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_14 = eq(_T_13, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_14 : @[Vec.scala 227:13]
      assert(clock, _T_12, UInt<1>("h1"), "") : assert_3 @[Vec.scala 227:13]
      node _T_15 = eq(_T_12, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_15 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_3 @[Vec.scala 227:13]
    inst PassthroughModule_4 of PassthroughModule_4 @[Vec.scala 225:30]
    PassthroughModule_4.clock <= clock
    PassthroughModule_4.reset <= reset
    vec3D[0][1][1].out <= PassthroughModule_4.io.out @[Vec.scala 226:22]
    PassthroughModule_4.io.in <= vec3D[0][1][1].in @[Vec.scala 226:22]
    node _T_16 = eq(PassthroughModule_4.io.out, UInt<2>("h3")) @[Vec.scala 227:29]
    node _T_17 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_18 = eq(_T_17, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_18 : @[Vec.scala 227:13]
      assert(clock, _T_16, UInt<1>("h1"), "") : assert_4 @[Vec.scala 227:13]
      node _T_19 = eq(_T_16, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_19 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_4 @[Vec.scala 227:13]
    inst PassthroughModule_5 of PassthroughModule_5 @[Vec.scala 225:30]
    PassthroughModule_5.clock <= clock
    PassthroughModule_5.reset <= reset
    vec3D[0][1][2].out <= PassthroughModule_5.io.out @[Vec.scala 226:22]
    PassthroughModule_5.io.in <= vec3D[0][1][2].in @[Vec.scala 226:22]
    node _T_20 = eq(PassthroughModule_5.io.out, UInt<3>("h4")) @[Vec.scala 227:29]
    node _T_21 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_22 = eq(_T_21, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_22 : @[Vec.scala 227:13]
      assert(clock, _T_20, UInt<1>("h1"), "") : assert_5 @[Vec.scala 227:13]
      node _T_23 = eq(_T_20, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_23 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_5 @[Vec.scala 227:13]
    inst PassthroughModule_6 of PassthroughModule_6 @[Vec.scala 225:30]
    PassthroughModule_6.clock <= clock
    PassthroughModule_6.reset <= reset
    vec3D[1][0][0].out <= PassthroughModule_6.io.out @[Vec.scala 226:22]
    PassthroughModule_6.io.in <= vec3D[1][0][0].in @[Vec.scala 226:22]
    node _T_24 = eq(PassthroughModule_6.io.out, UInt<2>("h2")) @[Vec.scala 227:29]
    node _T_25 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_26 = eq(_T_25, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_26 : @[Vec.scala 227:13]
      assert(clock, _T_24, UInt<1>("h1"), "") : assert_6 @[Vec.scala 227:13]
      node _T_27 = eq(_T_24, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_27 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_6 @[Vec.scala 227:13]
    inst PassthroughModule_7 of PassthroughModule_7 @[Vec.scala 225:30]
    PassthroughModule_7.clock <= clock
    PassthroughModule_7.reset <= reset
    vec3D[1][0][1].out <= PassthroughModule_7.io.out @[Vec.scala 226:22]
    PassthroughModule_7.io.in <= vec3D[1][0][1].in @[Vec.scala 226:22]
    node _T_28 = eq(PassthroughModule_7.io.out, UInt<2>("h3")) @[Vec.scala 227:29]
    node _T_29 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_30 = eq(_T_29, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_30 : @[Vec.scala 227:13]
      assert(clock, _T_28, UInt<1>("h1"), "") : assert_7 @[Vec.scala 227:13]
      node _T_31 = eq(_T_28, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_31 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_7 @[Vec.scala 227:13]
    inst PassthroughModule_8 of PassthroughModule_8 @[Vec.scala 225:30]
    PassthroughModule_8.clock <= clock
    PassthroughModule_8.reset <= reset
    vec3D[1][0][2].out <= PassthroughModule_8.io.out @[Vec.scala 226:22]
    PassthroughModule_8.io.in <= vec3D[1][0][2].in @[Vec.scala 226:22]
    node _T_32 = eq(PassthroughModule_8.io.out, UInt<3>("h4")) @[Vec.scala 227:29]
    node _T_33 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_34 = eq(_T_33, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_34 : @[Vec.scala 227:13]
      assert(clock, _T_32, UInt<1>("h1"), "") : assert_8 @[Vec.scala 227:13]
      node _T_35 = eq(_T_32, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_35 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_8 @[Vec.scala 227:13]
    inst PassthroughModule_9 of PassthroughModule_9 @[Vec.scala 225:30]
    PassthroughModule_9.clock <= clock
    PassthroughModule_9.reset <= reset
    vec3D[1][1][0].out <= PassthroughModule_9.io.out @[Vec.scala 226:22]
    PassthroughModule_9.io.in <= vec3D[1][1][0].in @[Vec.scala 226:22]
    node _T_36 = eq(PassthroughModule_9.io.out, UInt<2>("h3")) @[Vec.scala 227:29]
    node _T_37 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_38 = eq(_T_37, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_38 : @[Vec.scala 227:13]
      assert(clock, _T_36, UInt<1>("h1"), "") : assert_9 @[Vec.scala 227:13]
      node _T_39 = eq(_T_36, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_39 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_9 @[Vec.scala 227:13]
    inst PassthroughModule_10 of PassthroughModule_10 @[Vec.scala 225:30]
    PassthroughModule_10.clock <= clock
    PassthroughModule_10.reset <= reset
    vec3D[1][1][1].out <= PassthroughModule_10.io.out @[Vec.scala 226:22]
    PassthroughModule_10.io.in <= vec3D[1][1][1].in @[Vec.scala 226:22]
    node _T_40 = eq(PassthroughModule_10.io.out, UInt<3>("h4")) @[Vec.scala 227:29]
    node _T_41 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_42 = eq(_T_41, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_42 : @[Vec.scala 227:13]
      assert(clock, _T_40, UInt<1>("h1"), "") : assert_10 @[Vec.scala 227:13]
      node _T_43 = eq(_T_40, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_43 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_10 @[Vec.scala 227:13]
    inst PassthroughModule_11 of PassthroughModule_11 @[Vec.scala 225:30]
    PassthroughModule_11.clock <= clock
    PassthroughModule_11.reset <= reset
    vec3D[1][1][2].out <= PassthroughModule_11.io.out @[Vec.scala 226:22]
    PassthroughModule_11.io.in <= vec3D[1][1][2].in @[Vec.scala 226:22]
    node _T_44 = eq(PassthroughModule_11.io.out, UInt<3>("h5")) @[Vec.scala 227:29]
    node _T_45 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_46 = eq(_T_45, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_46 : @[Vec.scala 227:13]
      assert(clock, _T_44, UInt<1>("h1"), "") : assert_11 @[Vec.scala 227:13]
      node _T_47 = eq(_T_44, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_47 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_11 @[Vec.scala 227:13]
    inst PassthroughModule_12 of PassthroughModule_12 @[Vec.scala 225:30]
    PassthroughModule_12.clock <= clock
    PassthroughModule_12.reset <= reset
    vec3D[2][0][0].out <= PassthroughModule_12.io.out @[Vec.scala 226:22]
    PassthroughModule_12.io.in <= vec3D[2][0][0].in @[Vec.scala 226:22]
    node _T_48 = eq(PassthroughModule_12.io.out, UInt<2>("h3")) @[Vec.scala 227:29]
    node _T_49 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_50 = eq(_T_49, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_50 : @[Vec.scala 227:13]
      assert(clock, _T_48, UInt<1>("h1"), "") : assert_12 @[Vec.scala 227:13]
      node _T_51 = eq(_T_48, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_51 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_12 @[Vec.scala 227:13]
    inst PassthroughModule_13 of PassthroughModule_13 @[Vec.scala 225:30]
    PassthroughModule_13.clock <= clock
    PassthroughModule_13.reset <= reset
    vec3D[2][0][1].out <= PassthroughModule_13.io.out @[Vec.scala 226:22]
    PassthroughModule_13.io.in <= vec3D[2][0][1].in @[Vec.scala 226:22]
    node _T_52 = eq(PassthroughModule_13.io.out, UInt<3>("h4")) @[Vec.scala 227:29]
    node _T_53 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_54 = eq(_T_53, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_54 : @[Vec.scala 227:13]
      assert(clock, _T_52, UInt<1>("h1"), "") : assert_13 @[Vec.scala 227:13]
      node _T_55 = eq(_T_52, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_55 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_13 @[Vec.scala 227:13]
    inst PassthroughModule_14 of PassthroughModule_14 @[Vec.scala 225:30]
    PassthroughModule_14.clock <= clock
    PassthroughModule_14.reset <= reset
    vec3D[2][0][2].out <= PassthroughModule_14.io.out @[Vec.scala 226:22]
    PassthroughModule_14.io.in <= vec3D[2][0][2].in @[Vec.scala 226:22]
    node _T_56 = eq(PassthroughModule_14.io.out, UInt<3>("h5")) @[Vec.scala 227:29]
    node _T_57 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_58 = eq(_T_57, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_58 : @[Vec.scala 227:13]
      assert(clock, _T_56, UInt<1>("h1"), "") : assert_14 @[Vec.scala 227:13]
      node _T_59 = eq(_T_56, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_59 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_14 @[Vec.scala 227:13]
    inst PassthroughModule_15 of PassthroughModule_15 @[Vec.scala 225:30]
    PassthroughModule_15.clock <= clock
    PassthroughModule_15.reset <= reset
    vec3D[2][1][0].out <= PassthroughModule_15.io.out @[Vec.scala 226:22]
    PassthroughModule_15.io.in <= vec3D[2][1][0].in @[Vec.scala 226:22]
    node _T_60 = eq(PassthroughModule_15.io.out, UInt<3>("h4")) @[Vec.scala 227:29]
    node _T_61 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_62 = eq(_T_61, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_62 : @[Vec.scala 227:13]
      assert(clock, _T_60, UInt<1>("h1"), "") : assert_15 @[Vec.scala 227:13]
      node _T_63 = eq(_T_60, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_63 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_15 @[Vec.scala 227:13]
    inst PassthroughModule_16 of PassthroughModule_16 @[Vec.scala 225:30]
    PassthroughModule_16.clock <= clock
    PassthroughModule_16.reset <= reset
    vec3D[2][1][1].out <= PassthroughModule_16.io.out @[Vec.scala 226:22]
    PassthroughModule_16.io.in <= vec3D[2][1][1].in @[Vec.scala 226:22]
    node _T_64 = eq(PassthroughModule_16.io.out, UInt<3>("h5")) @[Vec.scala 227:29]
    node _T_65 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_66 = eq(_T_65, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_66 : @[Vec.scala 227:13]
      assert(clock, _T_64, UInt<1>("h1"), "") : assert_16 @[Vec.scala 227:13]
      node _T_67 = eq(_T_64, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_67 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_16 @[Vec.scala 227:13]
    inst PassthroughModule_17 of PassthroughModule_17 @[Vec.scala 225:30]
    PassthroughModule_17.clock <= clock
    PassthroughModule_17.reset <= reset
    vec3D[2][1][2].out <= PassthroughModule_17.io.out @[Vec.scala 226:22]
    PassthroughModule_17.io.in <= vec3D[2][1][2].in @[Vec.scala 226:22]
    node _T_68 = eq(PassthroughModule_17.io.out, UInt<3>("h6")) @[Vec.scala 227:29]
    node _T_69 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_70 = eq(_T_69, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_70 : @[Vec.scala 227:13]
      assert(clock, _T_68, UInt<1>("h1"), "") : assert_17 @[Vec.scala 227:13]
      node _T_71 = eq(_T_68, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_71 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_17 @[Vec.scala 227:13]
    inst PassthroughModule_18 of PassthroughModule_18 @[Vec.scala 225:30]
    PassthroughModule_18.clock <= clock
    PassthroughModule_18.reset <= reset
    vec3D[3][0][0].out <= PassthroughModule_18.io.out @[Vec.scala 226:22]
    PassthroughModule_18.io.in <= vec3D[3][0][0].in @[Vec.scala 226:22]
    node _T_72 = eq(PassthroughModule_18.io.out, UInt<3>("h4")) @[Vec.scala 227:29]
    node _T_73 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_74 = eq(_T_73, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_74 : @[Vec.scala 227:13]
      assert(clock, _T_72, UInt<1>("h1"), "") : assert_18 @[Vec.scala 227:13]
      node _T_75 = eq(_T_72, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_75 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_18 @[Vec.scala 227:13]
    inst PassthroughModule_19 of PassthroughModule_19 @[Vec.scala 225:30]
    PassthroughModule_19.clock <= clock
    PassthroughModule_19.reset <= reset
    vec3D[3][0][1].out <= PassthroughModule_19.io.out @[Vec.scala 226:22]
    PassthroughModule_19.io.in <= vec3D[3][0][1].in @[Vec.scala 226:22]
    node _T_76 = eq(PassthroughModule_19.io.out, UInt<3>("h5")) @[Vec.scala 227:29]
    node _T_77 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_78 = eq(_T_77, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_78 : @[Vec.scala 227:13]
      assert(clock, _T_76, UInt<1>("h1"), "") : assert_19 @[Vec.scala 227:13]
      node _T_79 = eq(_T_76, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_79 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_19 @[Vec.scala 227:13]
    inst PassthroughModule_20 of PassthroughModule_20 @[Vec.scala 225:30]
    PassthroughModule_20.clock <= clock
    PassthroughModule_20.reset <= reset
    vec3D[3][0][2].out <= PassthroughModule_20.io.out @[Vec.scala 226:22]
    PassthroughModule_20.io.in <= vec3D[3][0][2].in @[Vec.scala 226:22]
    node _T_80 = eq(PassthroughModule_20.io.out, UInt<3>("h6")) @[Vec.scala 227:29]
    node _T_81 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_82 = eq(_T_81, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_82 : @[Vec.scala 227:13]
      assert(clock, _T_80, UInt<1>("h1"), "") : assert_20 @[Vec.scala 227:13]
      node _T_83 = eq(_T_80, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_83 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_20 @[Vec.scala 227:13]
    inst PassthroughModule_21 of PassthroughModule_21 @[Vec.scala 225:30]
    PassthroughModule_21.clock <= clock
    PassthroughModule_21.reset <= reset
    vec3D[3][1][0].out <= PassthroughModule_21.io.out @[Vec.scala 226:22]
    PassthroughModule_21.io.in <= vec3D[3][1][0].in @[Vec.scala 226:22]
    node _T_84 = eq(PassthroughModule_21.io.out, UInt<3>("h5")) @[Vec.scala 227:29]
    node _T_85 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_86 = eq(_T_85, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_86 : @[Vec.scala 227:13]
      assert(clock, _T_84, UInt<1>("h1"), "") : assert_21 @[Vec.scala 227:13]
      node _T_87 = eq(_T_84, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_87 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_21 @[Vec.scala 227:13]
    inst PassthroughModule_22 of PassthroughModule_22 @[Vec.scala 225:30]
    PassthroughModule_22.clock <= clock
    PassthroughModule_22.reset <= reset
    vec3D[3][1][1].out <= PassthroughModule_22.io.out @[Vec.scala 226:22]
    PassthroughModule_22.io.in <= vec3D[3][1][1].in @[Vec.scala 226:22]
    node _T_88 = eq(PassthroughModule_22.io.out, UInt<3>("h6")) @[Vec.scala 227:29]
    node _T_89 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_90 = eq(_T_89, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_90 : @[Vec.scala 227:13]
      assert(clock, _T_88, UInt<1>("h1"), "") : assert_22 @[Vec.scala 227:13]
      node _T_91 = eq(_T_88, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_91 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_22 @[Vec.scala 227:13]
    inst PassthroughModule_23 of PassthroughModule_23 @[Vec.scala 225:30]
    PassthroughModule_23.clock <= clock
    PassthroughModule_23.reset <= reset
    vec3D[3][1][2].out <= PassthroughModule_23.io.out @[Vec.scala 226:22]
    PassthroughModule_23.io.in <= vec3D[3][1][2].in @[Vec.scala 226:22]
    node _T_92 = eq(PassthroughModule_23.io.out, UInt<3>("h7")) @[Vec.scala 227:29]
    node _T_93 = bits(reset, 0, 0) @[Vec.scala 227:13]
    node _T_94 = eq(_T_93, UInt<1>("h0")) @[Vec.scala 227:13]
    when _T_94 : @[Vec.scala 227:13]
      assert(clock, _T_92, UInt<1>("h1"), "") : assert_23 @[Vec.scala 227:13]
      node _T_95 = eq(_T_92, UInt<1>("h0")) @[Vec.scala 227:13]
      when _T_95 : @[Vec.scala 227:13]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at Vec.scala:227 assert(receiveMod.out === value.U)\n") : printf_23 @[Vec.scala 227:13]
    node _T_96 = bits(reset, 0, 0) @[Vec.scala 229:9]
    node _T_97 = eq(_T_96, UInt<1>("h0")) @[Vec.scala 229:9]
    when _T_97 : @[Vec.scala 229:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 229:9]
