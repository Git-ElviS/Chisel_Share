circuit Foo :
  module Bar :
    input clock : Clock
    input reset : Reset
    input in : UInt<4>
    output out : UInt<4>

    node _out_T = not(in) @[ChiselStageSpec.scala 21:12]
    out <= _out_T @[ChiselStageSpec.scala 21:9]

  module Foo :
    input clock : Clock
    input reset : UInt<1>
    input addr : UInt<4>
    output out : UInt<1>

    smem memory : UInt<1> [8] @[ChiselStageSpec.scala 27:29]
    inst bar of Bar @[ChiselStageSpec.scala 28:21]
    bar.clock <= clock
    bar.reset <= reset
    bar.in <= addr @[ChiselStageSpec.scala 29:12]
    node _out_T = bits(bar.out, 2, 0) @[ChiselStageSpec.scala 30:18]
    infer mport out_MPORT = memory[_out_T], clock @[ChiselStageSpec.scala 30:18]
    out <= out_MPORT @[ChiselStageSpec.scala 30:9]

