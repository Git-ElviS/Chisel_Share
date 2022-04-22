circuit SyncReadMemTester :
  module SyncReadMemTester :
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
    smem mem : UInt<2> [2] @[Mem.scala 24:24]
    node _rdata_T = sub(cnt, UInt<1>("h1")) @[Mem.scala 25:28]
    node _rdata_T_1 = tail(_rdata_T, 1) @[Mem.scala 25:28]
    node _rdata_T_2 = neq(cnt, UInt<1>("h0")) @[Mem.scala 25:39]
    wire _rdata_WIRE : UInt @[Mem.scala 25:23]
    _rdata_WIRE is invalid @[Mem.scala 25:23]
    when _rdata_T_2 : @[Mem.scala 25:23]
      _rdata_WIRE <= _rdata_T_1 @[Mem.scala 25:23]
      node _rdata_T_3 = or(_rdata_WIRE, UInt<1>("h0")) @[Mem.scala 25:23]
      node _rdata_T_4 = bits(_rdata_T_3, 0, 0) @[Mem.scala 25:23]
      read mport rdata = mem[_rdata_T_4], clock @[Mem.scala 25:23]
    node _T = eq(UInt<1>("h0"), cnt) @[Mem.scala 27:15]
    when _T : @[Mem.scala 27:15]
      node _T_1 = bits(cnt, 0, 0)
      write mport MPORT = mem[_T_1], clock
      MPORT <= UInt<2>("h3")
    else :
      node _T_2 = eq(UInt<1>("h1"), cnt) @[Mem.scala 27:15]
      when _T_2 : @[Mem.scala 27:15]
        node _T_3 = bits(cnt, 0, 0)
        write mport MPORT_1 = mem[_T_3], clock
        MPORT_1 <= UInt<2>("h2")
      else :
        node _T_4 = eq(UInt<2>("h2"), cnt) @[Mem.scala 27:15]
        when _T_4 : @[Mem.scala 27:15]
          node _T_5 = eq(rdata, UInt<2>("h3")) @[Mem.scala 30:28]
          node _T_6 = bits(reset, 0, 0) @[Mem.scala 30:21]
          node _T_7 = eq(_T_6, UInt<1>("h0")) @[Mem.scala 30:21]
          when _T_7 : @[Mem.scala 30:21]
            assert(clock, _T_5, UInt<1>("h1"), "") : assert @[Mem.scala 30:21]
            node _T_8 = eq(_T_5, UInt<1>("h0")) @[Mem.scala 30:21]
            when _T_8 : @[Mem.scala 30:21]
              printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:30 is(2.U) { assert(rdata === 3.U) }\n") : printf @[Mem.scala 30:21]
        else :
          node _T_9 = eq(UInt<2>("h3"), cnt) @[Mem.scala 27:15]
          when _T_9 : @[Mem.scala 27:15]
            node _T_10 = eq(rdata, UInt<2>("h2")) @[Mem.scala 31:28]
            node _T_11 = bits(reset, 0, 0) @[Mem.scala 31:21]
            node _T_12 = eq(_T_11, UInt<1>("h0")) @[Mem.scala 31:21]
            when _T_12 : @[Mem.scala 31:21]
              assert(clock, _T_10, UInt<1>("h1"), "") : assert_1 @[Mem.scala 31:21]
              node _T_13 = eq(_T_10, UInt<1>("h0")) @[Mem.scala 31:21]
              when _T_13 : @[Mem.scala 31:21]
                printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:31 is(3.U) { assert(rdata === 2.U) }\n") : printf_1 @[Mem.scala 31:21]
          else :
            node _T_14 = eq(UInt<3>("h4"), cnt) @[Mem.scala 27:15]
            when _T_14 : @[Mem.scala 27:15]
              node _T_15 = bits(reset, 0, 0) @[Mem.scala 32:19]
              node _T_16 = eq(_T_15, UInt<1>("h0")) @[Mem.scala 32:19]
              when _T_16 : @[Mem.scala 32:19]
                stop(clock, UInt<1>("h1"), 0) : stop @[Mem.scala 32:19]
