circuit CompatibilityInteroperabilitySpec_Anon :
  module PassthroughModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughMultiIOModule :
    input clock : Clock
    input reset : Reset
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module PassthroughRawModule :
    output io : { flip in : UInt<32>, out : UInt<32>}

    io.out <= io.in @[Util.scala 19:10]

  module CompatibilityInteroperabilitySpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<32>, flip cond : UInt<1>, out : UInt<32>}

    clock is invalid
    reset is invalid
    io is invalid
    inst children_0 of PassthroughModule @[CompatibilityInteroperabilitySpec.scala 229:21]
    children_0.clock is invalid
    children_0.reset is invalid
    children_0.io is invalid
    children_0.clock <= clock
    children_0.reset <= reset
    inst children_1 of PassthroughMultiIOModule @[CompatibilityInteroperabilitySpec.scala 229:52]
    children_1.clock is invalid
    children_1.reset is invalid
    children_1.io is invalid
    children_1.clock <= clock
    children_1.reset <= reset
    inst children_2 of PassthroughRawModule @[CompatibilityInteroperabilitySpec.scala 229:90]
    children_2.io is invalid
    node _io_out_T = add(children_0.io.out, children_1.io.out) @[CompatibilityInteroperabilitySpec.scala 230:51]
    node _io_out_T_1 = tail(_io_out_T, 1) @[CompatibilityInteroperabilitySpec.scala 230:51]
    node _io_out_T_2 = add(_io_out_T_1, children_2.io.out) @[CompatibilityInteroperabilitySpec.scala 230:51]
    node _io_out_T_3 = tail(_io_out_T_2, 1) @[CompatibilityInteroperabilitySpec.scala 230:51]
    io.out <= _io_out_T_3 @[CompatibilityInteroperabilitySpec.scala 230:16]
    when io.cond : @[CompatibilityInteroperabilitySpec.scala 232:25]
      children_0.io.in <= io.in @[CompatibilityInteroperabilitySpec.scala 233:25]
    when io.cond : @[CompatibilityInteroperabilitySpec.scala 232:25]
      children_1.io.in <= io.in @[CompatibilityInteroperabilitySpec.scala 233:25]
    when io.cond : @[CompatibilityInteroperabilitySpec.scala 232:25]
      children_2.io.in <= io.in @[CompatibilityInteroperabilitySpec.scala 233:25]

