circuit TopOfDiamond :
  module ModC :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<16>, out : UInt<16>}

    io.out <= io.in @[AnnotatingDiamondSpec.scala 68:10]

  module ModA :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt, out : UInt}

    inst modC of ModC @[AnnotatingDiamondSpec.scala 85:20]
    modC.clock <= clock
    modC.reset <= reset
    modC.io.in <= io.in @[AnnotatingDiamondSpec.scala 86:14]
    io.out <= modC.io.out @[AnnotatingDiamondSpec.scala 87:10]

  module ModC_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[AnnotatingDiamondSpec.scala 68:10]

  module ModB :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    inst modC of ModC_1 @[AnnotatingDiamondSpec.scala 100:20]
    modC.clock <= clock
    modC.reset <= reset
    modC.io.in <= io.in @[AnnotatingDiamondSpec.scala 101:14]
    io.out <= modC.io.out @[AnnotatingDiamondSpec.scala 102:10]

  module TopOfDiamond :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<32>, out : UInt<32>}

    reg x : UInt<32>, clock with :
      reset => (UInt<1>("h0"), x) @[AnnotatingDiamondSpec.scala 112:14]
    reg y : UInt<32>, clock with :
      reset => (UInt<1>("h0"), y) @[AnnotatingDiamondSpec.scala 113:14]
    inst modA of ModA @[AnnotatingDiamondSpec.scala 115:20]
    modA.clock <= clock
    modA.reset <= reset
    inst modB of ModB @[AnnotatingDiamondSpec.scala 116:20]
    modB.clock <= clock
    modB.reset <= reset
    x <= io.in @[AnnotatingDiamondSpec.scala 118:5]
    modA.io.in <= x @[AnnotatingDiamondSpec.scala 119:14]
    modB.io.in <= x @[AnnotatingDiamondSpec.scala 120:14]
    node _y_T = add(modA.io.out, modB.io.out) @[AnnotatingDiamondSpec.scala 122:20]
    node _y_T_1 = tail(_y_T, 1) @[AnnotatingDiamondSpec.scala 122:20]
    y <= _y_T_1 @[AnnotatingDiamondSpec.scala 122:5]
    io.out <= y @[AnnotatingDiamondSpec.scala 123:10]

