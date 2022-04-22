circuit UsesExtModuleMinusViaPath :
  extmodule ExtModuleMinusPath :
    output io : { flip in1 : UInt<16>, flip in2 : UInt<16>, out : UInt<16>}
    defname = ExtModuleMinusPath

  module UsesExtModuleMinusViaPath :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in1 : UInt<16>, flip in2 : UInt<16>, out : UInt<16>}

    inst mod0 of ExtModuleMinusPath @[ExtModuleImpl.scala 91:20]
    mod0.io is invalid
    mod0.io.in1 <= io.in1 @[ExtModuleImpl.scala 93:15]
    mod0.io.in2 <= io.in2 @[ExtModuleImpl.scala 94:15]
    io.out <= mod0.io.out @[ExtModuleImpl.scala 95:10]

