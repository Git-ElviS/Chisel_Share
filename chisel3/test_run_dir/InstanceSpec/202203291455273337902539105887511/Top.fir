circuit Top :
  module HasTypeParams :
    input clock : Clock
    input reset : Reset

    wire blah : UInt<1> @[Examples.scala 256:28]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

