circuit UsesBlackBoxMinusViaResource :
  extmodule BlackBoxMinus :
    input in1 : UInt<16>
    input in2 : UInt<16>
    output out : UInt<16>
    defname = BlackBoxMinus

  module UsesBlackBoxMinusViaResource :
    input clock : Clock
    input reset : UInt<1>
    input io_in1 : UInt<16>
    input io_in2 : UInt<16>
    output io_out : UInt<16>

    inst mod0 of BlackBoxMinus @[BlackBoxImpl.scala 71:20]
    io_out <= mod0.out @[BlackBoxImpl.scala 75:10]
    mod0.in1 <= io_in1 @[BlackBoxImpl.scala 73:15]
    mod0.in2 <= io_in2 @[BlackBoxImpl.scala 74:15]
