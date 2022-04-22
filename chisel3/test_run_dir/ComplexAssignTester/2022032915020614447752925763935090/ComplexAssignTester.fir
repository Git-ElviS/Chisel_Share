circuit ComplexAssignTester :
  module ComplexAssign :
    input clock : Clock
    input reset : Reset
    output io : { flip e : UInt<1>, flip in : { re : UInt<32>, im : UInt<32>}, out : { re : UInt<32>, im : UInt<32>}}

    when io.e : @[ComplexAssign.scala 18:14]
      wire tmp : { re : UInt<32>, im : UInt<32>} @[ComplexAssign.scala 19:19]
      tmp <= io.in @[ComplexAssign.scala 20:9]
      io.out.re <= tmp.re @[ComplexAssign.scala 21:15]
      io.out.im <= tmp.im @[ComplexAssign.scala 22:15]
    else :
      io.out.re <= UInt<1>("h0") @[ComplexAssign.scala 24:15]
      io.out.im <= UInt<1>("h0") @[ComplexAssign.scala 25:15]

  module ComplexAssignTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

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
    inst dut of ComplexAssign @[ComplexAssign.scala 31:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.re <= UInt<30>("h2fde0c6a") @[ComplexAssign.scala 32:16]
    dut.io.in.im <= UInt<30>("h2c4feff2") @[ComplexAssign.scala 33:16]
    wire _dut_io_e_WIRE : UInt<1>[2] @[ComplexAssign.scala 34:22]
    _dut_io_e_WIRE[0] <= UInt<1>("h1") @[ComplexAssign.scala 34:22]
    _dut_io_e_WIRE[1] <= UInt<1>("h0") @[ComplexAssign.scala 34:22]
    dut.io.e <= _dut_io_e_WIRE[cnt] @[ComplexAssign.scala 34:12]
    node _re_correct_T = mux(dut.io.e, dut.io.in.re, UInt<1>("h0")) @[ComplexAssign.scala 35:41]
    node re_correct = eq(dut.io.out.re, _re_correct_T) @[ComplexAssign.scala 35:34]
    node _im_correct_T = mux(dut.io.e, dut.io.in.im, UInt<1>("h0")) @[ComplexAssign.scala 36:41]
    node im_correct = eq(dut.io.out.im, _im_correct_T) @[ComplexAssign.scala 36:34]
    node _T = and(re_correct, im_correct) @[ComplexAssign.scala 37:21]
    node _T_1 = bits(reset, 0, 0) @[ComplexAssign.scala 37:9]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[ComplexAssign.scala 37:9]
    when _T_2 : @[ComplexAssign.scala 37:9]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[ComplexAssign.scala 37:9]
      node _T_3 = eq(_T, UInt<1>("h0")) @[ComplexAssign.scala 37:9]
      when _T_3 : @[ComplexAssign.scala 37:9]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at ComplexAssign.scala:37 assert(re_correct && im_correct)\n") : printf @[ComplexAssign.scala 37:9]
    when wrap : @[ComplexAssign.scala 38:14]
      node _T_4 = bits(reset, 0, 0) @[ComplexAssign.scala 39:9]
      node _T_5 = eq(_T_4, UInt<1>("h0")) @[ComplexAssign.scala 39:9]
      when _T_5 : @[ComplexAssign.scala 39:9]
        stop(clock, UInt<1>("h1"), 0) : stop @[ComplexAssign.scala 39:9]
