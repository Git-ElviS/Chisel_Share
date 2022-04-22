circuit Top :
  module HasIndexedVec :
    input clock : Clock
    input reset : Reset

    wire x : UInt<2>[3] @[Examples.scala 221:20]
    x[0] <= UInt<1>("h1") @[Examples.scala 221:20]
    x[1] <= UInt<2>("h2") @[Examples.scala 221:20]
    x[2] <= UInt<2>("h3") @[Examples.scala 221:20]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

