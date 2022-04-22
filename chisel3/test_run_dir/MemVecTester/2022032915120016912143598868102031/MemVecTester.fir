circuit MemVecTester :
  module MemVecTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    cmem mem : UInt<8>[2] [2] @[Mem.scala 10:16]
    reg cnt : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Counter.scala 62:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h0")
    when UInt<1>("h1") : @[Counter.scala 120:16]
      node wrap_wrap = eq(cnt, UInt<1>("h1")) @[Counter.scala 74:24]
      node _wrap_value_T = add(cnt, UInt<1>("h1")) @[Counter.scala 78:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 78:24]
      cnt <= _wrap_value_T_1 @[Counter.scala 78:15]
      wrap <= wrap_wrap @[Counter.scala 120:23]
    infer mport MPORT = mem[UInt<1>("h0")], clock @[Mem.scala 14:6]
    MPORT[0] <= UInt<1>("h1") @[Mem.scala 14:13]
    node _T = eq(cnt, UInt<1>("h1")) @[Mem.scala 16:12]
    when _T : @[Mem.scala 16:21]
      read mport MPORT_1 = mem[UInt<1>("h0")], clock @[Mem.scala 17:20]
      node _T_1 = eq(MPORT_1[0], UInt<1>("h1")) @[Mem.scala 17:29]
      node _T_2 = bits(reset, 0, 0) @[Mem.scala 17:11]
      node _T_3 = eq(_T_2, UInt<1>("h0")) @[Mem.scala 17:11]
      when _T_3 : @[Mem.scala 17:11]
        assert(clock, _T_1, UInt<1>("h1"), "") : assert @[Mem.scala 17:11]
        node _T_4 = eq(_T_1, UInt<1>("h0")) @[Mem.scala 17:11]
        when _T_4 : @[Mem.scala 17:11]
          printf(clock, UInt<1>("h1"), "Assertion failed\n    at Mem.scala:17 assert(mem.read(0.U)(0) === 1.U)\n") : printf @[Mem.scala 17:11]
      node _T_5 = bits(reset, 0, 0) @[Mem.scala 18:9]
      node _T_6 = eq(_T_5, UInt<1>("h0")) @[Mem.scala 18:9]
      when _T_6 : @[Mem.scala 18:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[Mem.scala 18:9]
