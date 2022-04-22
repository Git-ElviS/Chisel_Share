circuit BundleWireTester :
  module BundleWire :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { x : UInt<32>, y : UInt<32>}, outs : { x : UInt<32>, y : UInt<32>}[1]}

    wire coords : { x : UInt<32>, y : UInt<32>}[1] @[BundleWire.scala 17:20]
    coords[0] <= io.in @[BundleWire.scala 19:15]
    io.outs[0] <= coords[0] @[BundleWire.scala 20:16]

  module BundleWireTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of BundleWire @[BundleWire.scala 46:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.x <= UInt<29>("h1f8e668f") @[BundleWire.scala 47:15]
    dut.io.in.y <= UInt<30>("h3699068b") @[BundleWire.scala 48:15]
    node _T = eq(dut.io.outs[0].x, UInt<29>("h1f8e668f")) @[BundleWire.scala 50:18]
    node _T_1 = bits(reset, 0, 0) @[BundleWire.scala 50:11]
    node _T_2 = eq(_T_1, UInt<1>("h0")) @[BundleWire.scala 50:11]
    when _T_2 : @[BundleWire.scala 50:11]
      assert(clock, _T, UInt<1>("h1"), "") : assert @[BundleWire.scala 50:11]
      node _T_3 = eq(_T, UInt<1>("h0")) @[BundleWire.scala 50:11]
      when _T_3 : @[BundleWire.scala 50:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleWire.scala:50 assert(elt.x === x.asUInt)\n") : printf @[BundleWire.scala 50:11]
    node _T_4 = eq(dut.io.outs[0].y, UInt<30>("h3699068b")) @[BundleWire.scala 51:18]
    node _T_5 = bits(reset, 0, 0) @[BundleWire.scala 51:11]
    node _T_6 = eq(_T_5, UInt<1>("h0")) @[BundleWire.scala 51:11]
    when _T_6 : @[BundleWire.scala 51:11]
      assert(clock, _T_4, UInt<1>("h1"), "") : assert_1 @[BundleWire.scala 51:11]
      node _T_7 = eq(_T_4, UInt<1>("h0")) @[BundleWire.scala 51:11]
      when _T_7 : @[BundleWire.scala 51:11]
        printf(clock, UInt<1>("h1"), "Assertion failed\n    at BundleWire.scala:51 assert(elt.y === y.asUInt)\n") : printf_1 @[BundleWire.scala 51:11]
    node _T_8 = bits(reset, 0, 0) @[BundleWire.scala 53:7]
    node _T_9 = eq(_T_8, UInt<1>("h0")) @[BundleWire.scala 53:7]
    when _T_9 : @[BundleWire.scala 53:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleWire.scala 53:7]
