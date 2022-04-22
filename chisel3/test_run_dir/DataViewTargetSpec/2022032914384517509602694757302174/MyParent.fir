circuit MyParent :
  module MyChild :
    input clock : Clock
    input reset : Reset
    output out : { foo : UInt<8>[2]}

    wire _out_WIRE : { foo : UInt<8>[2]} @[DataViewTargetSpec.scala 117:26]
    _out_WIRE.foo[0] <= UInt<8>("h0") @[DataViewTargetSpec.scala 117:26]
    _out_WIRE.foo[1] <= UInt<8>("h0") @[DataViewTargetSpec.scala 117:26]
    out <= _out_WIRE @[DataViewTargetSpec.scala 117:11]

  module MyParent :
    input clock : Clock
    input reset : UInt<1>
    output out : { foo : UInt<8>[2]}

    inst inst of MyChild @[DataViewTargetSpec.scala 121:24]
    inst.clock <= clock
    inst.reset <= reset
    out <= inst.out @[DataViewTargetSpec.scala 122:11]

