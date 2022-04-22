circuit Top :
  extmodule BlackBoxWithCommonIntf :
    input in : UInt<8>
    output out : UInt<8>
    defname = BlackBoxWithCommonIntf

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst m of BlackBoxWithCommonIntf @[DefinitionSpec.scala 483:35]
    m.out is invalid
    m.in is invalid

