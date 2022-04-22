circuit HasDeadCode :
  module HasDeadCodeChild :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<32>, b : UInt<32>, c : UInt<32>[2]}

    io.b <= io.a @[DontTouchSpec.scala 14:8]
    io.c[0] is invalid @[DontTouchSpec.scala 15:8]
    io.c[1] is invalid @[DontTouchSpec.scala 15:8]

  module HasDeadCode :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip a : UInt<32>, b : UInt<32>}

    inst inst of HasDeadCodeChild @[DontTouchSpec.scala 26:20]
    inst.clock <= clock
    inst.reset <= reset
    inst.io.a <= io.a @[DontTouchSpec.scala 27:13]
    io.b <= inst.io.b @[DontTouchSpec.scala 28:8]
    node _dead_T = add(io.a, UInt<1>("h1")) @[DontTouchSpec.scala 29:31]
    node _dead_T_1 = tail(_dead_T, 1) @[DontTouchSpec.scala 29:31]
    wire dead : UInt
    dead <= _dead_T_1

