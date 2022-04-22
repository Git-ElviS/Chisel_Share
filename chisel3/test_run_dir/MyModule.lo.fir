circuit MyModule :
  module MyModule :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<1>
    output io_b : UInt<1>

    inst doubleReg of DosRegisters
    doubleReg.clock <= clock
    doubleReg.reset <= reset
    io_b <= doubleReg.reg3_0 @[GroupSpec.scala 101:12]
    doubleReg.io_a <= io_a

  module DosRegisters :
    input clock : Clock
    input reset : UInt<1>
    output reg3_0 : UInt<1>
    input io_a : UInt<1>

    reg reg1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), reg1) @[GroupSpec.scala 97:25]
    reg reg3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), reg3) @[GroupSpec.scala 100:25]
    node wire = reg1
    reg3_0 <= reg3
    reg1 <= mux(reset, UInt<1>("h0"), io_a) @[GroupSpec.scala 97:{25,25} 98:12]
    reg3 <= wire @[GroupSpec.scala 100:25]
