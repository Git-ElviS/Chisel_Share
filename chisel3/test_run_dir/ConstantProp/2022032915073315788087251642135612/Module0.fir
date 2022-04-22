circuit Module0 :
  module Module0 :
    input clock : Clock
    input reset : UInt<1>
    output o : UInt<2>

    wire i : UInt
    i <= UInt<1>("h1")
    node _i0_T = add(i, UInt<1>("h1")) @[TraceSpec.scala 249:18]
    node i0 = tail(_i0_T, 1) @[TraceSpec.scala 249:18]
    o <= i0 @[TraceSpec.scala 252:9]

