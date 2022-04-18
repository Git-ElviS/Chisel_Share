circuit Counter :
  module Counter :
    input clock : Clock
    input reset : UInt<1>
    output io_out : UInt<2>

    reg r1 : UInt<2>, clock with :
      reset => (UInt<1>("h0"), r1) @[Counter.scala 19:19]
    node _r1_T = add(r1, UInt<1>("h1")) @[Counter.scala 20:12]
    node _r1_T_1 = tail(_r1_T, 1) @[Counter.scala 20:12]
    io_out <= r1 @[Counter.scala 22:10]
    r1 <= mux(reset, UInt<2>("h0"), _r1_T_1) @[Counter.scala 19:{19,19} 20:6]
