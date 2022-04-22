circuit UsesExtModuleAddViaInline :
  extmodule ExtModuleAdd :
    output io : { flip in : UInt<16>, out : UInt<16>}
    defname = ExtModuleAdd

  module UsesExtModuleAddViaInline :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<16>, out : UInt<16>}

    inst blackBoxAdd of ExtModuleAdd @[ExtModuleImpl.scala 45:27]
    blackBoxAdd.io is invalid
    blackBoxAdd.io.in <= io.in @[ExtModuleImpl.scala 46:21]
    io.out <= blackBoxAdd.io.out @[ExtModuleImpl.scala 47:10]

