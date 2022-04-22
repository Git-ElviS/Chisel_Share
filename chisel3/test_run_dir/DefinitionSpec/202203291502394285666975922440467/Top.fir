circuit Top :
  module HasMems :
    input clock : Clock
    input reset : Reset

    cmem mem : UInt<32> [8] @[Examples.scala 271:26]
    smem syncReadMem : UInt<32> [8] @[Examples.scala 272:42]

  module Top :
    input clock : Clock
    input reset : UInt<1>

    skip

