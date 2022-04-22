circuit SyncReadMemWithZeroWidthTester :
  module SyncReadMemWithZeroWidthTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    reg cnt : UInt<2>, clock with :
      reset => (reset, UInt<2>("h0")) @[Counter.scala 62:40]
    wire cnt_wrap : UInt<1>
    cnt_wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node cnt_wrap_wrap = eq(cnt, UInt<2>("h2")) @[Counter.scala 74:24]
      node _cnt_wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _cnt_wrap_value_T_1 = tail(_cnt_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _cnt_wrap_value_T_1 @[Counter.scala 78:15]
      when cnt_wrap_wrap : @[Counter.scala 88:20]
        cnt <= UInt<1>("h0") @[Counter.scala 88:28]
      cnt_wrap <= cnt_wrap_wrap @[Counter.scala 120:23]
    smem mem : UInt<0> [2] @[Mem.scala 62:24]
    wire _rdata_WIRE : UInt @[Mem.scala 63:23]
    _rdata_WIRE is invalid @[Mem.scala 63:23]
    when UInt<1>("h1") : @[Mem.scala 63:23]
      _rdata_WIRE <= UInt<1>("h0") @[Mem.scala 63:23]
      node _rdata_T = or(_rdata_WIRE, UInt<1>("h0")) @[Mem.scala 63:23]
      node _rdata_T_1 = bits(_rdata_T, 0, 0) @[Mem.scala 63:23]
      read mport rdata = mem[_rdata_T_1], clock @[Mem.scala 63:23]
    node _T = eq(UInt<1>("h1"), cnt) @[Mem.scala 65:15]
    when _T : @[Mem.scala 65:15]
      node _T_1 = eq(rdata, UInt<1>("h0")) @[Mem.scala 66:28]
      node _T_2 = bits(reset, 0, 0) @[Mem.scala 66:21]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[Mem.scala 66:21]
      when _T_3 : @[Mem.scala 66:21]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[Mem.scala 66:21]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[Mem.scala 66:21]
        when _T_4 : @[Mem.scala 66:21]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:66 is(1.U) { assert(rdata === 0.U) }\n") : printf @[Mem.scala 66:21]
    else :
      node _T_5 = eq(UInt<2>("h2"), cnt) @[Mem.scala 65:15]
      when _T_5 : @[Mem.scala 65:15]
        node _T_6 = bits(reset, 0, 0) @[Mem.scala 67:19]
        node _T_7 = eq(_T_6, UInt<1>("h0")) @[Mem.scala 67:19]
        when _T_7 : @[Mem.scala 67:19]
          stop(clock, UInt<1>("h1"), 0) : stop @[Mem.scala 67:19]
