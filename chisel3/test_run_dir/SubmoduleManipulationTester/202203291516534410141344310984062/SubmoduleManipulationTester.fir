circuit SubmoduleManipulationTester :
  module SubmoduleA :
    input clock : Clock
    input reset : Reset
    output io : { out : UInt<1>}

    io.out <= UInt<1>("h0") @[InjectionSpec.scala 27:12]

  module SubmoduleManipulationTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst moduleSubmoduleA of SubmoduleA @[InjectionSpec.scala 15:34]
    moduleSubmoduleA.clock <= clock
    moduleSubmoduleA.reset <= reset
