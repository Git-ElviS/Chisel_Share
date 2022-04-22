circuit UsesExtModuleMinusViaResource :
  extmodule ExtModuleMinus :
    output io : { flip in1 : UInt<16>, flip in2 : UInt<16>, out : UInt<16>}
    defname = ExtModuleMinus

  module UsesExtModuleMinusViaResource :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in1 : UInt<16>, flip in2 : UInt<16>, out : UInt<16>}

    inst mod0 of ExtModuleMinus @[ExtModuleImpl.scala 77:20]
    mod0.io is invalid
    mod0.io.in1 <= io.in1 @[ExtModuleImpl.scala 79:15]
    mod0.io.in2 <= io.in2 @[ExtModuleImpl.scala 80:15]
    io.out <= mod0.io.out @[ExtModuleImpl.scala 81:10]

