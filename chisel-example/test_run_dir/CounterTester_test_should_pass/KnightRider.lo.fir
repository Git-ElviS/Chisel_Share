circuit KnightRider :
  module Tick :
    input clock : Clock
    input reset : UInt<1>
    output io_tick : UInt<1>

    reg r1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), r1) @[KnightRider.scala 66:19]
    node limit = eq(r1, UInt<1>("h1")) @[KnightRider.scala 68:18]
    node _r1_T = add(r1, UInt<1>("h1")) @[KnightRider.scala 71:12]
    node _r1_T_1 = tail(_r1_T, 1) @[KnightRider.scala 71:12]
    node _GEN_0 = mux(limit, UInt<1>("h0"), _r1_T_1) @[KnightRider.scala 72:15 71:6 73:8]
    io_tick <= limit @[KnightRider.scala 76:11]
    r1 <= mux(reset, UInt<32>("h0"), _GEN_0) @[KnightRider.scala 66:{19,19}]

  module KnightRider :
    input clock : Clock
    input reset : UInt<1>
    output io_led : UInt<6>

    inst tick of Tick @[KnightRider.scala 35:20]
    reg stateReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), stateReg) @[KnightRider.scala 32:25]
    reg ledReg : UInt<6>, clock with :
      reset => (UInt<1>("h0"), ledReg) @[KnightRider.scala 33:23]
    node _T = eq(tick.io_tick, UInt<1>("h1")) @[KnightRider.scala 38:21]
    node _T_1 = bits(ledReg, 4, 4) @[KnightRider.scala 41:16]
    node _T_2 = eq(_T_1, UInt<1>("h1")) @[KnightRider.scala 41:20]
    node _T_3 = bits(ledReg, 1, 1) @[KnightRider.scala 43:22]
    node _T_4 = eq(_T_3, UInt<1>("h1")) @[KnightRider.scala 43:26]
    node _GEN_0 = mux(_T_4, UInt<1>("h0"), stateReg) @[KnightRider.scala 43:35 44:16 32:25]
    node _GEN_1 = mux(_T_2, UInt<1>("h1"), _GEN_0) @[KnightRider.scala 41:29 42:16]
    node _T_5 = eq(stateReg, UInt<1>("h0")) @[KnightRider.scala 47:19]
    node _ledReg_T = shl(ledReg, 1) @[KnightRider.scala 48:24]
    node _ledReg_T_1 = shr(ledReg, 1) @[KnightRider.scala 50:24]
    node _GEN_2 = mux(_T_5, _ledReg_T, _ledReg_T_1) @[KnightRider.scala 47:31 48:14 50:14]
    node _GEN_3 = mux(_T, _GEN_1, stateReg) @[KnightRider.scala 32:25 38:30]
    node _GEN_4 = mux(_T, _GEN_2, ledReg) @[KnightRider.scala 33:23 38:30]
    io_led <= ledReg @[KnightRider.scala 54:10]
    stateReg <= mux(reset, UInt<1>("h0"), _GEN_3) @[KnightRider.scala 32:{25,25}]
    ledReg <= bits(mux(reset, UInt<6>("h1"), _GEN_4), 5, 0) @[KnightRider.scala 33:{23,23}]
    tick.clock <= clock
    tick.reset <= reset
