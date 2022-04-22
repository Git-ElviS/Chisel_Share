circuit Top :
  module HasTuple2 :
    input clock : Clock
    input reset : Reset

    wire x : UInt<3> @[Examples.scala 211:17]
    wire y : UInt<1> @[Examples.scala 212:17]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

