circuit CollideModule :
  module CollideModule :
    input clock : Clock
    input reset : UInt<1>
    input a : { b : UInt<1>, c : { d : UInt<2>, e : UInt<3>}[2], c_1_e : UInt<4>}[2]
    output a_0_c : UInt<5>
    output a__0 : UInt<5>

    a_0_c is invalid @[TraceSpec.scala 192:13]
    a__0 is invalid @[TraceSpec.scala 193:12]

