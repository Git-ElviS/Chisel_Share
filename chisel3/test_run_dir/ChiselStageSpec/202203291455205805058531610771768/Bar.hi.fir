circuit Bar :
  module Bar :
    input clock : Clock
    input reset : UInt<1>
    input in : UInt<4>
    output out : UInt<4>

    node _out_T = not(in) @[ChiselStageSpec.scala 21:12]
    out <= _out_T @[ChiselStageSpec.scala 21:9]
