circuit SharedConstantValDedupTop :
  module SharedConstantValDedup :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _io_out_T = add(io.in, UInt<2>("h3")) @[DedupSpec.scala 53:19]
    node _io_out_T_1 = tail(_io_out_T, 1) @[DedupSpec.scala 53:19]
    io.out <= _io_out_T_1 @[DedupSpec.scala 53:10]

  module SharedConstantValDedup_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<8>, out : UInt<8>}

    node _io_out_T = add(io.in, UInt<2>("h3")) @[DedupSpec.scala 53:19]
    node _io_out_T_1 = tail(_io_out_T, 1) @[DedupSpec.scala 53:19]
    io.out <= _io_out_T_1 @[DedupSpec.scala 53:10]

  module SharedConstantValDedupTop :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<8>, out : UInt<8>}

    inst inst0 of SharedConstantValDedup @[DedupSpec.scala 61:21]
    inst0.clock <= clock
    inst0.reset <= reset
    inst inst1 of SharedConstantValDedup_1 @[DedupSpec.scala 62:21]
    inst1.clock <= clock
    inst1.reset <= reset
    inst0.io.in <= io.in @[DedupSpec.scala 63:15]
    inst1.io.in <= io.in @[DedupSpec.scala 64:15]
    node _io_out_T = add(inst0.io.out, inst1.io.out) @[DedupSpec.scala 65:26]
    node _io_out_T_1 = tail(_io_out_T, 1) @[DedupSpec.scala 65:26]
    io.out <= _io_out_T_1 @[DedupSpec.scala 65:10]

