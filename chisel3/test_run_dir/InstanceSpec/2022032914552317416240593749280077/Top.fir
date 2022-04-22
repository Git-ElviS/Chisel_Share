circuit Top :
  extmodule AddOneBlackBox :
    input in : UInt<32>
    output out : UInt<32>
    defname = AddOneBlackBox

  module Top :
    input clock : Clock
    input reset : UInt<1>
    input in : UInt<32>
    output out : UInt<32>
    output io : { flip in : UInt<32>, out : UInt<32>}

    inst i0 of AddOneBlackBox @[InstanceSpec.scala 55:26]
    inst i1 of AddOneBlackBox @[InstanceSpec.scala 56:26]
    i0.in <= in @[InstanceSpec.scala 57:18]
    out <= i0.out @[InstanceSpec.scala 58:13]
    io.out <= i1.out @[InstanceSpec.scala 59:12]
    i1.in <= io.in @[InstanceSpec.scala 59:12]

