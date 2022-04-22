circuit UsesBlackBoxMinusViaResource :
  extmodule BlackBoxMinus :
    input in1 : UInt<16>
    input in2 : UInt<16>
    output out : UInt<16>
    defname = BlackBoxMinus

  module UsesBlackBoxMinusViaResource :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in1 : UInt<16>, flip in2 : UInt<16>, out : UInt<16>}

    inst mod0 of BlackBoxMinus @[BlackBoxImpl.scala 71:20]
    mod0.out is invalid
    mod0.in2 is invalid
    mod0.in1 is invalid
    mod0.in1 <= io.in1 @[BlackBoxImpl.scala 73:15]
    mod0.in2 <= io.in2 @[BlackBoxImpl.scala 74:15]
    io.out <= mod0.out @[BlackBoxImpl.scala 75:10]

