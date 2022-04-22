circuit SinglePrintfTester :
  module SinglePrintfTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = bits(reset, 0, 0) @[Printf.scala 10:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Printf.scala 10:9]
    when _T_1 : @[Printf.scala 10:9]
      printf(clock, UInt<1>("h1"), "x=%x", UInt<8>("hfe")) : printf @[Printf.scala 10:9]
    node _T_2 = bits(reset, 0, 0) @[Printf.scala 11:7]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[Printf.scala 11:7]
    when _T_3 : @[Printf.scala 11:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Printf.scala 11:7]
