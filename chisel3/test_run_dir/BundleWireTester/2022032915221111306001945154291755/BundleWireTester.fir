circuit BundleWireTester :
  module BundleWire :
    input clock : Clock
    input reset : Reset
    output io : { flip in : { x : UInt<32>, y : UInt<32>}, outs : { x : UInt<32>, y : UInt<32>}[0]}

    wire coords : { x : UInt<32>, y : UInt<32>}[0] @[BundleWire.scala 17:20]

  module BundleWireTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of BundleWire @[BundleWire.scala 46:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.x <= UInt<30>("h29ce88da") @[BundleWire.scala 47:15]
    dut.io.in.y <= UInt<30>("h2c612727") @[BundleWire.scala 48:15]
    node _T = bits(reset, 0, 0) @[BundleWire.scala 53:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[BundleWire.scala 53:7]
    when _T_1 : @[BundleWire.scala 53:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[BundleWire.scala 53:7]
