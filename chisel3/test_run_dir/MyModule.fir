circuit MyModule :
  module MyModule :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip a : UInt<1>, b : UInt<1>}

    reg reg1 : UInt, clock with :
      reset => (reset, UInt<1>("h0")) @[GroupSpec.scala 97:25]
    reg1 <= io.a @[GroupSpec.scala 98:12]
    wire wire : UInt
    wire <= reg1
    reg reg3 : UInt, clock with :
      reset => (UInt<1>("h0"), reg3) @[GroupSpec.scala 100:25]
    reg3 <= wire @[GroupSpec.scala 100:25]
    io.b <= reg3 @[GroupSpec.scala 101:12]

