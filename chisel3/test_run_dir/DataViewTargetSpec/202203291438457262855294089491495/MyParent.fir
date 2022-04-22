circuit MyParent :
  module MyChild :
    input clock : Clock
    input reset : Reset
    output io : { flip a : UInt<8>, flip b : UInt<8>, c : UInt<8>, d : UInt<8>}

    io.d <= io.b @[DataViewTargetSpec.scala 145:20]
    io.c <= io.a @[DataViewTargetSpec.scala 145:20]

  module MyParent :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip a : UInt<8>, flip b : UInt<8>, c : UInt<8>, d : UInt<8>}

    inst inst of MyChild @[DataViewTargetSpec.scala 157:24]
    inst.clock <= clock
    inst.reset <= reset
    io.d <= inst.io.d @[DataViewTargetSpec.scala 158:10]
    io.c <= inst.io.c @[DataViewTargetSpec.scala 158:10]
    inst.io.b <= io.b @[DataViewTargetSpec.scala 158:10]
    inst.io.a <= io.a @[DataViewTargetSpec.scala 158:10]

