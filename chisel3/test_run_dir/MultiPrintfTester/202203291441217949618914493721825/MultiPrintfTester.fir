circuit MultiPrintfTester :
  module MultiPrintfTester :
    input clock : Clock
    input reset : UInt<1>
    output io : { }

    node _T = bits(reset, 0, 0) @[Printf.scala 22:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[Printf.scala 22:9]
    when _T_1 : @[Printf.scala 22:9]
      printf(clock, UInt<1>("h1"), "x=%x y=%x", UInt<8>("hfe"), UInt<8>("hff")) : printf @[Printf.scala 22:9]
    node _T_2 = bits(reset, 0, 0) @[Printf.scala 23:7]
    node _T_3 = eq(_T_2, UInt<1>("h0")) @[Printf.scala 23:7]
    when _T_3 : @[Printf.scala 23:7]
      stop(clock, UInt<1>("h1"), 0) : stop @[Printf.scala 23:7]
