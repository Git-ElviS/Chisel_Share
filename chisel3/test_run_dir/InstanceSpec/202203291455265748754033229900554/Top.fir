circuit Top :
  extmodule BlackBoxWithCommonIntf :
    input in : UInt<8>
    output out : UInt<8>
    defname = BlackBoxWithCommonIntf

  module Top :
    input clock : Clock
    input reset : UInt<1>

    inst BlackBoxWithCommonIntf of BlackBoxWithCommonIntf @[InstanceSpec.scala 601:45]
    BlackBoxWithCommonIntf.out is invalid
    BlackBoxWithCommonIntf.in is invalid

