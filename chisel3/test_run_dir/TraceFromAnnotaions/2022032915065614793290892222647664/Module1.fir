circuit Module1 :
  module Module0 :
    input clock : Clock
    input reset : Reset
    input i : { a : { a : UInt<8>, b : UInt<1>}, b : UInt<1>[4][4]}
    output o : { a : { a : UInt<8>, b : UInt<1>}, b : UInt<1>[4][4]}

    reg r : { a : { a : UInt<8>, b : UInt<1>}, b : UInt<1>[4][4]}, clock with :
      reset => (UInt<1>("h0"), r) @[TraceSpec.scala 49:18]
    o <= r @[TraceSpec.scala 50:9]
    r <= i @[TraceSpec.scala 51:9]

  module Module1 :
    input clock : Clock
    input reset : UInt<1>
    input i : { a : { a : UInt<8>, b : UInt<1>}, b : UInt<1>[4][4]}

    inst m0 of Module0 @[TraceSpec.scala 60:22]
    m0.clock <= clock
    m0.reset <= reset
    m0.i.b[0][0] <= i.b[0][0] @[TraceSpec.scala 61:12]
    m0.i.b[0][1] <= i.b[0][1] @[TraceSpec.scala 61:12]
    m0.i.b[0][2] <= i.b[0][2] @[TraceSpec.scala 61:12]
    m0.i.b[0][3] <= i.b[0][3] @[TraceSpec.scala 61:12]
    m0.i.b[1][0] <= i.b[1][0] @[TraceSpec.scala 61:12]
    m0.i.b[1][1] <= i.b[1][1] @[TraceSpec.scala 61:12]
    m0.i.b[1][2] <= i.b[1][2] @[TraceSpec.scala 61:12]
    m0.i.b[1][3] <= i.b[1][3] @[TraceSpec.scala 61:12]
    m0.i.b[2][0] <= i.b[2][0] @[TraceSpec.scala 61:12]
    m0.i.b[2][1] <= i.b[2][1] @[TraceSpec.scala 61:12]
    m0.i.b[2][2] <= i.b[2][2] @[TraceSpec.scala 61:12]
    m0.i.b[2][3] <= i.b[2][3] @[TraceSpec.scala 61:12]
    m0.i.b[3][0] <= i.b[3][0] @[TraceSpec.scala 61:12]
    m0.i.b[3][1] <= i.b[3][1] @[TraceSpec.scala 61:12]
    m0.i.b[3][2] <= i.b[3][2] @[TraceSpec.scala 61:12]
    m0.i.b[3][3] <= i.b[3][3] @[TraceSpec.scala 61:12]
    m0.i.a.b <= i.a.b @[TraceSpec.scala 61:12]
    m0.i.a.a <= i.a.a @[TraceSpec.scala 61:12]
    m0.o.b[0][0] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[0][1] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[0][2] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[0][3] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[1][0] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[1][1] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[1][2] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[1][3] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[2][0] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[2][1] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[2][2] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[2][3] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[3][0] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[3][1] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[3][2] is invalid @[TraceSpec.scala 62:12]
    m0.o.b[3][3] is invalid @[TraceSpec.scala 62:12]
    m0.o.a.b is invalid @[TraceSpec.scala 62:12]
    m0.o.a.a is invalid @[TraceSpec.scala 62:12]

