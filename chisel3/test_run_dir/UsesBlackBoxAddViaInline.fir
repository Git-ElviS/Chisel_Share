circuit UsesBlackBoxAddViaInline :
  extmodule BlackBoxAdd :
    input in : UInt<16>
    output out : UInt<16>
    defname = BlackBoxAdd

  module UsesBlackBoxAddViaInline :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : UInt<16>, out : UInt<16>}

    inst blackBoxAdd of BlackBoxAdd @[BlackBoxImpl.scala 41:27]
    blackBoxAdd.out is invalid
    blackBoxAdd.in is invalid
    blackBoxAdd.in <= io.in @[BlackBoxImpl.scala 42:21]
    io.out <= blackBoxAdd.out @[BlackBoxImpl.scala 43:10]

