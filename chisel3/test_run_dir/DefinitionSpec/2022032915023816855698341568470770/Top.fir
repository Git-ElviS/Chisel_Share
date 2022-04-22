circuit Top :
  module LazyVal :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 181:25]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

