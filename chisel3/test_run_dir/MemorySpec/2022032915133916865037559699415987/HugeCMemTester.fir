circuit HugeCMemTester :
  module HugeCMemTester :
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
    cmem mem : UInt<8> [36893488147419103232] @[Mem.scala 87:16]
    read mport rdata = mem[cnt], clock @[Mem.scala 88:23]
    node _T = eq(UInt<1>("h0"), cnt) @[Mem.scala 90:15]
    when _T : @[Mem.scala 90:15]
      write mport MPORT = mem[cnt], clock
      MPORT <= UInt<2>("h3")
    else :
      node _T_1 = eq(UInt<1>("h1"), cnt) @[Mem.scala 90:15]
      when _T_1 : @[Mem.scala 90:15]
        write mport MPORT_1 = mem[cnt], clock
        MPORT_1 <= UInt<2>("h2")
      else :
        node _T_2 = eq(UInt<2>("h2"), cnt) @[Mem.scala 90:15]
        when _T_2 : @[Mem.scala 90:15]
          node _T_3 = eq(rdata, UInt<2>("h3")) @[Mem.scala 93:28]
          node _T_4 = bits(reset, 0, 0) @[Mem.scala 93:21]
          node _T_5 = eq(_T_4, UInt<1>("h0")) @[Mem.scala 93:21]
          when _T_5 : @[Mem.scala 93:21]
            assert(clock, _T_3, UInt<1>("h1"), "") : assert @[Mem.scala 93:21]
            node _T_6 = eq(_T_3, UInt<1>("h0")) @[Mem.scala 93:21]
            when _T_6 : @[Mem.scala 93:21]
              printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:93 is(2.U) { assert(rdata === 3.U) }\n") : printf @[Mem.scala 93:21]
        else :
          node _T_7 = eq(UInt<2>("h3"), cnt) @[Mem.scala 90:15]
          when _T_7 : @[Mem.scala 90:15]
            node _T_8 = eq(rdata, UInt<2>("h2")) @[Mem.scala 94:28]
            node _T_9 = bits(reset, 0, 0) @[Mem.scala 94:21]
            node _T_10 = eq(_T_9, UInt<1>("h0")) @[Mem.scala 94:21]
            when _T_10 : @[Mem.scala 94:21]
              assert(clock, _T_8, UInt<1>("h1"), "") : assert_1 @[Mem.scala 94:21]
              node _T_11 = eq(_T_8, UInt<1>("h0")) @[Mem.scala 94:21]
              when _T_11 : @[Mem.scala 94:21]
                printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:94 is(3.U) { assert(rdata === 2.U) }\n") : printf_1 @[Mem.scala 94:21]
          else :
            node _T_12 = eq(UInt<3>("h4"), cnt) @[Mem.scala 90:15]
            when _T_12 : @[Mem.scala 90:15]
              node _T_13 = bits(reset, 0, 0) @[Mem.scala 95:19]
              node _T_14 = eq(_T_13, UInt<1>("h0")) @[Mem.scala 95:19]
              when _T_14 : @[Mem.scala 95:19]
                stop(clock, UInt<1>("h1"), 0) : stop @[Mem.scala 95:19]

