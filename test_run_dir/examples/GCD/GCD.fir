;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit GCD : 
  module GCD : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<16>, flip b : UInt<16>, flip load : UInt<1>, out : UInt<16>, valid : UInt<1>}
    
    reg x : UInt, clock @[GCD.scala 20:14]
    reg y : UInt, clock @[GCD.scala 21:14]
    when io.load : @[GCD.scala 23:18]
      x <= io.a @[GCD.scala 24:7]
      y <= io.b @[GCD.scala 24:18]
      skip @[GCD.scala 23:18]
    else : @[GCD.scala 25:16]
      node _T = gt(x, y) @[GCD.scala 26:13]
      when _T : @[GCD.scala 26:18]
        node _T_1 = sub(x, y) @[GCD.scala 27:14]
        node _T_2 = tail(_T_1, 1) @[GCD.scala 27:14]
        x <= _T_2 @[GCD.scala 27:9]
        skip @[GCD.scala 26:18]
      else : @[GCD.scala 28:26]
        node _T_3 = leq(x, y) @[GCD.scala 28:20]
        when _T_3 : @[GCD.scala 28:26]
          node _T_4 = sub(y, x) @[GCD.scala 29:14]
          node _T_5 = tail(_T_4, 1) @[GCD.scala 29:14]
          y <= _T_5 @[GCD.scala 29:9]
          skip @[GCD.scala 28:26]
      skip @[GCD.scala 25:16]
    io.out <= x @[GCD.scala 33:10]
    node _T_6 = eq(y, UInt<1>("h00")) @[GCD.scala 34:17]
    io.valid <= _T_6 @[GCD.scala 34:12]
    
