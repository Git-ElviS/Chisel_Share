circuit M :
  module M :
    input clock : Clock
    input reset : UInt<1>

    wire a : UInt<1> @[TraceSpec.scala 310:19]
    wire b : UInt<1>[2] @[TraceSpec.scala 311:19]
    a is invalid @[TraceSpec.scala 312:9]
    b[0] is invalid @[TraceSpec.scala 313:9]
    b[1] is invalid @[TraceSpec.scala 313:9]

