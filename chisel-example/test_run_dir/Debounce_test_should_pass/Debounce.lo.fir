circuit Debounce :
  module Debounce :
    input clock : Clock
    input reset : UInt<1>
    input io_btnU : UInt<1>
    input io_sw : UInt<8>
    output io_led : UInt<8>

    reg btnSync_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), btnSync_REG) @[Debounce.scala 13:38]
    reg btnSync : UInt<1>, clock with :
      reset => (UInt<1>("h0"), btnSync) @[Debounce.scala 13:30]
    reg tick_reg : UInt<7>, clock with :
      reset => (UInt<1>("h0"), tick_reg) @[Debounce.scala 18:22]
    node tick = eq(tick_reg, UInt<7>("h63")) @[Debounce.scala 19:20]
    node _tick_reg_T = add(tick_reg, UInt<1>("h1")) @[Debounce.scala 20:31]
    node _tick_reg_T_1 = tail(_tick_reg_T, 1) @[Debounce.scala 20:31]
    node _tick_reg_T_2 = mux(tick, UInt<1>("h0"), _tick_reg_T_1) @[Debounce.scala 20:15]
    reg btnDeb : UInt<1>, clock with :
      reset => (UInt<1>("h0"), btnDeb) @[Debounce.scala 35:19]
    node _GEN_0 = mux(tick, btnSync, btnDeb) @[Debounce.scala 36:15 37:12 35:19]
    reg btnFilter_reg : UInt<3>, clock with :
      reset => (UInt<1>("h0"), btnFilter_reg) @[Debounce.scala 25:22]
    node _btnFilter_reg_T = bits(btnFilter_reg, 1, 0) @[Debounce.scala 27:21]
    node _btnFilter_reg_T_1 = cat(_btnFilter_reg_T, btnDeb) @[Cat.scala 31:58]
    node _GEN_1 = mux(tick, _btnFilter_reg_T_1, btnFilter_reg) @[Debounce.scala 26:14 27:11 25:22]
    node _btnFilter_T = bits(btnFilter_reg, 2, 2) @[Debounce.scala 29:9]
    node _btnFilter_T_1 = bits(btnFilter_reg, 1, 1) @[Debounce.scala 29:18]
    node _btnFilter_T_2 = and(_btnFilter_T, _btnFilter_T_1) @[Debounce.scala 29:13]
    node _btnFilter_T_3 = bits(btnFilter_reg, 2, 2) @[Debounce.scala 29:29]
    node _btnFilter_T_4 = bits(btnFilter_reg, 0, 0) @[Debounce.scala 29:38]
    node _btnFilter_T_5 = and(_btnFilter_T_3, _btnFilter_T_4) @[Debounce.scala 29:33]
    node _btnFilter_T_6 = or(_btnFilter_T_2, _btnFilter_T_5) @[Debounce.scala 29:23]
    node _btnFilter_T_7 = bits(btnFilter_reg, 1, 1) @[Debounce.scala 29:49]
    node _btnFilter_T_8 = bits(btnFilter_reg, 0, 0) @[Debounce.scala 29:58]
    node _btnFilter_T_9 = and(_btnFilter_T_7, _btnFilter_T_8) @[Debounce.scala 29:53]
    node btnFilter = or(_btnFilter_T_6, _btnFilter_T_9) @[Debounce.scala 29:43]
    reg risingEdge_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), risingEdge_REG) @[Debounce.scala 15:37]
    node _risingEdge_T = eq(risingEdge_REG, UInt<1>("h0")) @[Debounce.scala 15:29]
    node risingEdge = and(btnFilter, _risingEdge_T) @[Debounce.scala 15:27]
    reg r1 : UInt<8>, clock with :
      reset => (UInt<1>("h0"), r1) @[Debounce.scala 45:19]
    node _r1_T = add(r1, UInt<1>("h1")) @[Debounce.scala 47:14]
    node _r1_T_1 = tail(_r1_T, 1) @[Debounce.scala 47:14]
    node _GEN_2 = mux(risingEdge, _r1_T_1, r1) @[Debounce.scala 45:19 46:21 47:8]
    io_led <= r1 @[Debounce.scala 50:10]
    btnSync_REG <= io_btnU @[Debounce.scala 13:38]
    btnSync <= btnSync_REG @[Debounce.scala 13:30]
    tick_reg <= mux(reset, UInt<7>("h0"), _tick_reg_T_2) @[Debounce.scala 18:{22,22} 20:9]
    btnDeb <= _GEN_0
    btnFilter_reg <= mux(reset, UInt<3>("h0"), _GEN_1) @[Debounce.scala 25:{22,22}]
    risingEdge_REG <= btnFilter @[Debounce.scala 15:37]
    r1 <= mux(reset, UInt<8>("h0"), _GEN_2) @[Debounce.scala 45:{19,19}]
