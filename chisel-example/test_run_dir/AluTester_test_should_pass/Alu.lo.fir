circuit Alu :
  module Alu :
    input clock : Clock
    input reset : UInt<1>
    input io_fn : UInt<2>
    input io_a : UInt<4>
    input io_b : UInt<4>
    output io_result : UInt<4>

    node _T = eq(UInt<1>("h0"), io_fn) @[Alu.scala 33:14]
    node _result_T = add(io_a, io_b) @[Alu.scala 34:27]
    node _result_T_1 = tail(_result_T, 1) @[Alu.scala 34:27]
    node _T_1 = eq(UInt<1>("h1"), io_fn) @[Alu.scala 33:14]
    node _result_T_2 = sub(io_a, io_b) @[Alu.scala 35:27]
    node _result_T_3 = tail(_result_T_2, 1) @[Alu.scala 35:27]
    node _T_2 = eq(UInt<2>("h2"), io_fn) @[Alu.scala 33:14]
    node _result_T_4 = or(io_a, io_b) @[Alu.scala 36:27]
    node _T_3 = eq(UInt<2>("h3"), io_fn) @[Alu.scala 33:14]
    node _result_T_5 = and(io_a, io_b) @[Alu.scala 37:27]
    node _GEN_0 = mux(_T_3, _result_T_5, UInt<1>("h0")) @[Alu.scala 30:10 33:14 37:22]
    node _GEN_1 = mux(_T_2, _result_T_4, _GEN_0) @[Alu.scala 33:14 36:22]
    node _GEN_2 = mux(_T_1, _result_T_3, _GEN_1) @[Alu.scala 33:14 35:22]
    node _GEN_3 = mux(_T, _result_T_1, _GEN_2) @[Alu.scala 33:14 34:22]
    node result = _GEN_3 @[Alu.scala 28:20]
    io_result <= result @[Alu.scala 41:13]
