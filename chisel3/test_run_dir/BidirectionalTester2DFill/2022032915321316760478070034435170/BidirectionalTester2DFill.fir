circuit BidirectionalTester2DFill :
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

  module BidirectionalTester2DFill :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst mod of PassthroughModule @[Vec.scala 170:21]
    mod.clock <= clock
    mod.reset <= reset
    wire vec2D : { flip in : UInt<32>, out : UInt<32>}[1][1] @[Vec.scala 171:35]
    vec2D[0][0].out <= mod.io.out @[Vec.scala 171:35]
    mod.io.in <= vec2D[0][0].in @[Vec.scala 171:35]
    inst PassthroughModuleTester of PassthroughModuleTester @[Vec.scala 176:23]
    PassthroughModuleTester.clock <= clock
    PassthroughModuleTester.reset <= reset
    PassthroughModuleTester.io <= vec2D[0][0] @[Vec.scala 176:14]
    node _T = bits(reset, 0, 0) @[Vec.scala 178:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Vec.scala 178:9]
    when _T_1 : @[Vec.scala 178:9]
      stop(clock, UInt<1>("h1"), 0) : stop @[Vec.scala 178:9]
