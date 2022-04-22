circuit CrossConnectTester :
  module CrossConnects :
    input clock : Clock
    input reset : Reset
    output io : { flip in : Clock, out : Clock}

    io.out <= io.in @[ConnectSpec.scala 22:10]

  module CrossConnectTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    inst dut of CrossConnects @[ConnectSpec.scala 37:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.out is invalid @[ConnectSpec.scala 38:10]
    dut.io.in is invalid @[ConnectSpec.scala 38:10]
    node _T = bits(reset, 0, 0) @[ConnectSpec.scala 39:7]
    node _T_1 = eq(_T, UInt<1>("h0")) @[ConnectSpec.scala 39:7]
    when _T_1 : @[ConnectSpec.scala 39:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[ConnectSpec.scala 39:7]
