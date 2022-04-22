circuit UsesBlackBoxMinusViaPath :
  extmodule BlackBoxMinusPath :
    input in1 : UInt<16>
    input in2 : UInt<16>
    output out : UInt<16>
    defname = BlackBoxMinusPath

  module UsesBlackBoxMinusViaPath :
    input clock : Clock
    input reset : UInt<1>
    input io_in1 : UInt<16>
    input io_in2 : UInt<16>
    output io_out : UInt<16>

    inst mod0 of BlackBoxMinusPath @[BlackBoxImpl.scala 85:20]
    io_out <= mod0.out @[BlackBoxImpl.scala 89:10]
    mod0.in1 <= io_in1 @[BlackBoxImpl.scala 87:15]
    mod0.in2 <= io_in2 @[BlackBoxImpl.scala 88:15]
