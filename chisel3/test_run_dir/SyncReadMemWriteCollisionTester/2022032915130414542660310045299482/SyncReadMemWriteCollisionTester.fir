circuit SyncReadMemWriteCollisionTester :
  module SyncReadMemWriteCollisionTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Counter.scala 62:40]
    wire cnt_wrap : UInt<1>
    cnt_wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node cnt_wrap_wrap = eq(cnt, UInt<3>("h4")) @[Counter.scala 74:24]
      node _cnt_wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _cnt_wrap_value_T_1 = tail(_cnt_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _cnt_wrap_value_T_1 @[Counter.scala 78:15]
      when cnt_wrap_wrap : @[Counter.scala 88:20]
        cnt <= UInt<1>("h0") @[Counter.scala 88:28]
      cnt_wrap <= cnt_wrap_wrap @[Counter.scala 120:23]
    smem m0 : UInt<2> [2] @[Mem.scala 40:23]
    wire _rd0_WIRE : UInt @[Mem.scala 41:20]
    _rd0_WIRE is invalid @[Mem.scala 41:20]
    when UInt<1>("h1") : @[Mem.scala 41:20]
      _rd0_WIRE <= cnt @[Mem.scala 41:20]
      node _rd0_T = or(_rd0_WIRE, UInt<1>("h0")) @[Mem.scala 41:20]
      node _rd0_T_1 = bits(_rd0_T, 0, 0) @[Mem.scala 41:20]
      read mport rd0 = m0[_rd0_T_1], clock @[Mem.scala 41:20]
    node _T = bits(cnt, 0, 0)
    write mport MPORT = m0[_T], clock
    MPORT <= cnt
    smem m1 : UInt<2> [2] @[Mem.scala 45:23]
    wire _rd1_WIRE : UInt @[Mem.scala 46:20]
    _rd1_WIRE is invalid @[Mem.scala 46:20]
    when UInt<1>("h1") : @[Mem.scala 46:20]
      _rd1_WIRE <= cnt @[Mem.scala 46:20]
      node _rd1_T = or(_rd1_WIRE, UInt<1>("h0")) @[Mem.scala 46:20]
      node _rd1_T_1 = bits(_rd1_T, 0, 0) @[Mem.scala 46:20]
      read mport rd1 = m1[_rd1_T_1], clock @[Mem.scala 46:20]
    node _T_1 = bits(cnt, 0, 0)
    write mport MPORT_1 = m1[_T_1], clock
    MPORT_1 <= cnt
    node _T_2 = eq(cnt, UInt<2>("h3")) @[Mem.scala 50:12]
    when _T_2 : @[Mem.scala 50:21]
      node _T_3 = eq(rd0, UInt<2>("h2")) @[Mem.scala 51:16]
      node _T_4 = bits(reset, 0, 0) @[Mem.scala 51:11]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[Mem.scala 51:11]
      when _T_5 : @[Mem.scala 51:11]
        assert(clock, _T_3, UInt<1>("h1"), "") : assert @[Mem.scala 51:11]
        node _T_6 = eq(_T_3, UInt<1>("h0")) @[Mem.scala 51:11]
        when _T_6 : @[Mem.scala 51:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:51 assert(rd0 === 2.U)\n") : printf @[Mem.scala 51:11]
      node _T_7 = eq(rd1, UInt<1>("h0")) @[Mem.scala 52:16]
      node _T_8 = bits(reset, 0, 0) @[Mem.scala 52:11]
      node _T_9 = eq(_T_8, UInt<1>("h0")) @[Mem.scala 52:11]
      when _T_9 : @[Mem.scala 52:11]
        assert(clock, _T_7, UInt<1>("h1"), "") : assert_1 @[Mem.scala 52:11]
        node _T_10 = eq(_T_7, UInt<1>("h0")) @[Mem.scala 52:11]
        when _T_10 : @[Mem.scala 52:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:52 assert(rd1 === 0.U)\n") : printf_1 @[Mem.scala 52:11]
    node _T_11 = eq(cnt, UInt<3>("h4")) @[Mem.scala 55:12]
    when _T_11 : @[Mem.scala 55:21]
      node _T_12 = bits(reset, 0, 0) @[Mem.scala 56:9]
      node _T_13 = eq(_T_12, UInt<1>("h0")) @[Mem.scala 56:9]
      when _T_13 : @[Mem.scala 56:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Mem.scala 56:9]
