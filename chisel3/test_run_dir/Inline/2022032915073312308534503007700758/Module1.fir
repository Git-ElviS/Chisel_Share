circuit Module1 :
  module _2_Anon :
    input clock : Clock
    input reset : Reset
    input i : UInt<1>
    output o : UInt<1>

    node _o_T = eq(i, UInt<1>("h0")) @[TraceSpec.scala 228:12]
    o <= _o_T @[TraceSpec.scala 228:9]

  module Module1 :
    input clock : Clock
    input reset : UInt<1>
    input i : UInt<1>
    output o : UInt<1>

    inst m0 of _2_Anon @[TraceSpec.scala 234:22]
    m0.clock <= clock
    m0.reset <= reset
    m0.i <= i @[TraceSpec.scala 235:12]
    o <= m0.o @[TraceSpec.scala 236:9]

