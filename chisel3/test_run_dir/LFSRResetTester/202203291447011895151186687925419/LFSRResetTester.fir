circuit LFSRResetTester :
  module FooLFSR :
    input clock : Clock
    input reset : Reset
    output io : { flip seed : { valid : UInt<1>, bits : UInt<1>[4]}, flip increment : UInt<1>, out : UInt<1>[4]}

    wire state_res : UInt<1>[4]
    state_res[0] is invalid
    state_res[1] is invalid
    state_res[2] is invalid
    state_res[3] is invalid
    state_res[0] <= UInt<1>("h0") @[LFSR.scala 63:29]
    reg state : UInt<1>[4], clock with :
      reset => (reset, state_res) @[PRNG.scala 55:49]
    when io.increment : @[PRNG.scala 69:22]
      state[0] <= state[0] @[PRNG.scala 70:11]
      state[1] <= state[1] @[PRNG.scala 70:11]
      state[2] <= state[2] @[PRNG.scala 70:11]
      state[3] <= state[3] @[PRNG.scala 70:11]
    when io.seed.valid : @[PRNG.scala 73:22]
      state[0] <= io.seed.bits[0] @[PRNG.scala 74:11]
      state[1] <= io.seed.bits[1] @[PRNG.scala 74:11]
      state[2] <= io.seed.bits[2] @[PRNG.scala 74:11]
      state[3] <= io.seed.bits[3] @[PRNG.scala 74:11]
    io.out <= state @[PRNG.scala 78:10]

  module LFSRResetTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst lfsr of FooLFSR @[LFSRSpec.scala 80:20]
    lfsr.clock <= clock
    lfsr.reset <= reset
    lfsr.io.seed.valid <= UInt<1>("h0") @[LFSRSpec.scala 81:22]
    lfsr.io.seed.bits[0] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.seed.bits[1] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.seed.bits[2] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.seed.bits[3] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.increment <= UInt<1>("h1") @[LFSRSpec.scala 83:21]
    reg count : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Counter.scala 62:40]
    wire done : UInt<1>
    done <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(count, UInt<3>("h4")) @[Counter.scala 74:24]
      node _wrap_value_T = add(count, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      count <= _wrap_value_T_1 @[Counter.scala 78:15]
      when wrap_wrap : @[Counter.scala 88:20]
        count <= UInt<1>("h0") @[Counter.scala 88:28]
      done <= wrap_wrap @[Counter.scala 120:23]
    node _lfsr_io_seed_valid_T = eq(count, UInt<1>("h1")) @[LFSRSpec.scala 87:31]
    lfsr.io.seed.valid <= _lfsr_io_seed_valid_T @[LFSRSpec.scala 87:22]
    lfsr.io.seed.bits[0] <= UInt<1>("h1") @[LFSRSpec.scala 88:21]
    lfsr.io.seed.bits[1] <= UInt<1>("h1") @[LFSRSpec.scala 88:21]
    lfsr.io.seed.bits[2] <= UInt<1>("h1") @[LFSRSpec.scala 88:21]
    lfsr.io.seed.bits[3] <= UInt<1>("h1") @[LFSRSpec.scala 88:21]
    lfsr.io.increment <= UInt<1>("h1") @[LFSRSpec.scala 89:21]
    node _T = eq(count, UInt<2>("h2")) @[LFSRSpec.scala 91:14]
    when _T : @[LFSRSpec.scala 91:23]
      node lo = cat(lfsr.io.out[1], lfsr.io.out[0]) @[LFSRSpec.scala 92:24]
      node hi = cat(lfsr.io.out[3], lfsr.io.out[2]) @[LFSRSpec.scala 92:24]
      node _T_1 = cat(hi, lo) @[LFSRSpec.scala 92:24]
      node _T_2 = eq(_T_1, UInt<4>("hf")) @[LFSRSpec.scala 92:31]
      node _T_3 = bits(reset, 0, 0) @[LFSRSpec.scala 92:11]
      node _T_4 = eq(_T_3, UInt<1>("h0")) @[LFSRSpec.scala 92:11]
      when _T_4 : @[LFSRSpec.scala 92:11]
        assert(clock, _T_2, UInt<1>("h1"), "") : assert @[LFSRSpec.scala 92:11]
        node _T_5 = eq(_T_2, UInt<1>("h0")) @[LFSRSpec.scala 92:11]
        when _T_5 : @[LFSRSpec.scala 92:11]
          printf(clock, UInt<1>("h1"), "Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:92 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n") : printf @[LFSRSpec.scala 92:11]
    node _lfsr_reset_T = eq(count, UInt<2>("h3")) @[LFSRSpec.scala 95:23]
    lfsr.reset <= _lfsr_reset_T @[LFSRSpec.scala 95:14]
    node _T_6 = eq(count, UInt<3>("h4")) @[LFSRSpec.scala 97:14]
    when _T_6 : @[LFSRSpec.scala 97:23]
      node lo_1 = cat(lfsr.io.out[1], lfsr.io.out[0]) @[LFSRSpec.scala 98:24]
      node hi_1 = cat(lfsr.io.out[3], lfsr.io.out[2]) @[LFSRSpec.scala 98:24]
      node _T_7 = cat(hi_1, lo_1) @[LFSRSpec.scala 98:24]
      node _T_8 = neq(_T_7, UInt<4>("hf")) @[LFSRSpec.scala 98:31]
      node _T_9 = bits(reset, 0, 0) @[LFSRSpec.scala 98:11]
      node _T_10 = eq(_T_9, UInt<1>("h0")) @[LFSRSpec.scala 98:11]
      when _T_10 : @[LFSRSpec.scala 98:11]
        assert(clock, _T_8, UInt<1>("h1"), "") : assert_1 @[LFSRSpec.scala 98:11]
        node _T_11 = eq(_T_8, UInt<1>("h0")) @[LFSRSpec.scala 98:11]
        when _T_11 : @[LFSRSpec.scala 98:11]
          printf(clock, UInt<1>("h1"), "Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:98 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n") : printf_1 @[LFSRSpec.scala 98:11]
    when done : @[LFSRSpec.scala 101:14]
      node _T_12 = bits(reset, 0, 0) @[LFSRSpec.scala 102:9]
      node _T_13 = eq(_T_12, UInt<1>("h0")) @[LFSRSpec.scala 102:9]
      when _T_13 : @[LFSRSpec.scala 102:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[LFSRSpec.scala 102:9]
