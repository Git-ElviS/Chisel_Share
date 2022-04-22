circuit Top :
  module HasOption :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 202:44]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

