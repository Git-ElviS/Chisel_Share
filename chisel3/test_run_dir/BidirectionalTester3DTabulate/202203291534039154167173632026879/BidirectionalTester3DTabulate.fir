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
    wire vec3D : { flip in : UInt<32>, out : UInt<32>}[3][1][1] @[Vec.scala 217:43]
    TabulateModuleTester.io <= vec3D[0][0][0] @[Vec.scala 217:43]
    TabulateModuleTester_1.io <= vec3D[0][0][1] @[Vec.scala 217:43]
    TabulateModuleTester_2.io <= vec3D[0][0][2] @[Vec.scala 217:43]
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
    node _T_12 = bits(reset, 0, 0) @[Vec.scala 229:9]
    node _T_13 = eq(_T_12, UInt<1>("h0")) @[Vec.scala 229:9]
    when _T_13 : @[Vec.scala 229:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 229:9]
