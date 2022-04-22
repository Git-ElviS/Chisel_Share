circuit M3 :
  module Not :
    input clock : Clock
    input reset : Reset
    output io : { flip i : UInt<1>, o : UInt<1>}

    node _io_o_T = eq(io.i, UInt<1>("h0")) @[TraceSpec.scala 270:15]
    io.o <= _io_o_T @[TraceSpec.scala 270:12]

  module _1_Anon :
    input clock : Clock
    input reset : Reset
    output io : { flip i : UInt<1>, o : UInt<1>}

    inst not of Not @[TraceSpec.scala 275:23]
    not.clock <= clock
    not.reset <= reset
    io.o <= not.io.o @[TraceSpec.scala 276:14]
    not.io.i <= io.i @[TraceSpec.scala 276:14]

  module Not_1 :
    input clock : Clock
    input reset : Reset
    output io : { flip i : UInt<1>, o : UInt<1>}

    node _io_o_T = eq(io.i, UInt<1>("h0")) @[TraceSpec.scala 270:15]
    io.o <= _io_o_T @[TraceSpec.scala 270:12]

  module M2 :
    input clock : Clock
    input reset : Reset
    output io : { flip i : UInt<1>, o : UInt<1>}

    inst m1 of _1_Anon @[TraceSpec.scala 281:22]
    m1.clock <= clock
    m1.reset <= reset
    inst not of Not_1 @[TraceSpec.scala 282:23]
    not.clock <= clock
    not.reset <= reset
    m1.io.i <= io.i @[TraceSpec.scala 284:15]
    not.io.i <= io.i @[TraceSpec.scala 285:16]
    node _io_o_T = and(m1.io.o, not.io.o) @[TraceSpec.scala 287:23]
    io.o <= _io_o_T @[TraceSpec.scala 287:12]

  module M3 :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip i : UInt<1>, o : UInt<1>}

    inst m2 of M2 @[TraceSpec.scala 292:22]
    m2.clock <= clock
    m2.reset <= reset
    io.o <= m2.io.o @[TraceSpec.scala 293:10]
    m2.io.i <= io.i @[TraceSpec.scala 293:10]

