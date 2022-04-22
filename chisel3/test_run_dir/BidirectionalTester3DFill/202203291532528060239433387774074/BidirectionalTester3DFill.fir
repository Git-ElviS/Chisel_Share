circuit BidirectionalTester3DFill :
  module PassthroughModule :
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

  module PassthroughModuleTester_1 :
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

  module PassthroughModuleTester_2 :
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

  module PassthroughModuleTester_3 :
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

  module PassthroughModuleTester_4 :
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

  module PassthroughModuleTester_5 :
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

  module PassthroughModuleTester_6 :
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

  module PassthroughModuleTester_7 :
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

  module PassthroughModuleTester_8 :
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

  module PassthroughModuleTester_9 :
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

  module PassthroughModuleTester_10 :
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

  module PassthroughModuleTester_11 :
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

  module BidirectionalTester3DFill :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst mod of PassthroughModule @[Vec.scala 182:21]
    mod.clock <= clock
    mod.reset <= reset
    wire vec3D : { flip in : UInt<32>, out : UInt<32>}[2][3][2] @[Vec.scala 183:38]
    vec3D[0][0][0].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[0][0][0].in @[Vec.scala 183:38]
    vec3D[0][0][1].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[0][0][1].in @[Vec.scala 183:38]
    vec3D[0][1][0].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[0][1][0].in @[Vec.scala 183:38]
    vec3D[0][1][1].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[0][1][1].in @[Vec.scala 183:38]
    vec3D[0][2][0].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[0][2][0].in @[Vec.scala 183:38]
    vec3D[0][2][1].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[0][2][1].in @[Vec.scala 183:38]
    vec3D[1][0][0].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[1][0][0].in @[Vec.scala 183:38]
    vec3D[1][0][1].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[1][0][1].in @[Vec.scala 183:38]
    vec3D[1][1][0].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[1][1][0].in @[Vec.scala 183:38]
    vec3D[1][1][1].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[1][1][1].in @[Vec.scala 183:38]
    vec3D[1][2][0].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[1][2][0].in @[Vec.scala 183:38]
    vec3D[1][2][1].out <= mod.io.out @[Vec.scala 183:38]
    mod.io.in <= vec3D[1][2][1].in @[Vec.scala 183:38]
    inst PassthroughModuleTester of PassthroughModuleTester @[Vec.scala 190:24]
    PassthroughModuleTester.clock <= clock
    PassthroughModuleTester.reset <= reset
    PassthroughModuleTester.io <= vec3D[0][0][0] @[Vec.scala 190:14]
    inst PassthroughModuleTester_1 of PassthroughModuleTester_1 @[Vec.scala 190:24]
    PassthroughModuleTester_1.clock <= clock
    PassthroughModuleTester_1.reset <= reset
    PassthroughModuleTester_1.io <= vec3D[0][0][1] @[Vec.scala 190:14]
    inst PassthroughModuleTester_2 of PassthroughModuleTester_2 @[Vec.scala 190:24]
    PassthroughModuleTester_2.clock <= clock
    PassthroughModuleTester_2.reset <= reset
    PassthroughModuleTester_2.io <= vec3D[0][1][0] @[Vec.scala 190:14]
    inst PassthroughModuleTester_3 of PassthroughModuleTester_3 @[Vec.scala 190:24]
    PassthroughModuleTester_3.clock <= clock
    PassthroughModuleTester_3.reset <= reset
    PassthroughModuleTester_3.io <= vec3D[0][1][1] @[Vec.scala 190:14]
    inst PassthroughModuleTester_4 of PassthroughModuleTester_4 @[Vec.scala 190:24]
    PassthroughModuleTester_4.clock <= clock
    PassthroughModuleTester_4.reset <= reset
    PassthroughModuleTester_4.io <= vec3D[0][2][0] @[Vec.scala 190:14]
    inst PassthroughModuleTester_5 of PassthroughModuleTester_5 @[Vec.scala 190:24]
    PassthroughModuleTester_5.clock <= clock
    PassthroughModuleTester_5.reset <= reset
    PassthroughModuleTester_5.io <= vec3D[0][2][1] @[Vec.scala 190:14]
    inst PassthroughModuleTester_6 of PassthroughModuleTester_6 @[Vec.scala 190:24]
    PassthroughModuleTester_6.clock <= clock
    PassthroughModuleTester_6.reset <= reset
    PassthroughModuleTester_6.io <= vec3D[1][0][0] @[Vec.scala 190:14]
    inst PassthroughModuleTester_7 of PassthroughModuleTester_7 @[Vec.scala 190:24]
    PassthroughModuleTester_7.clock <= clock
    PassthroughModuleTester_7.reset <= reset
    PassthroughModuleTester_7.io <= vec3D[1][0][1] @[Vec.scala 190:14]
    inst PassthroughModuleTester_8 of PassthroughModuleTester_8 @[Vec.scala 190:24]
    PassthroughModuleTester_8.clock <= clock
    PassthroughModuleTester_8.reset <= reset
    PassthroughModuleTester_8.io <= vec3D[1][1][0] @[Vec.scala 190:14]
    inst PassthroughModuleTester_9 of PassthroughModuleTester_9 @[Vec.scala 190:24]
    PassthroughModuleTester_9.clock <= clock
    PassthroughModuleTester_9.reset <= reset
    PassthroughModuleTester_9.io <= vec3D[1][1][1] @[Vec.scala 190:14]
    inst PassthroughModuleTester_10 of PassthroughModuleTester_10 @[Vec.scala 190:24]
    PassthroughModuleTester_10.clock <= clock
    PassthroughModuleTester_10.reset <= reset
    PassthroughModuleTester_10.io <= vec3D[1][2][0] @[Vec.scala 190:14]
    inst PassthroughModuleTester_11 of PassthroughModuleTester_11 @[Vec.scala 190:24]
    PassthroughModuleTester_11.clock <= clock
    PassthroughModuleTester_11.reset <= reset
    PassthroughModuleTester_11.io <= vec3D[1][2][1] @[Vec.scala 190:14]
    node _T = bits(reset, 0, 0) @[Vec.scala 192:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Vec.scala 192:9]
    when _T_1 : @[Vec.scala 192:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 192:9]
