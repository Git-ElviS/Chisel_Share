;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit HiLoMultiplier : 
  module HiLoMultiplier : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip A : UInt<16>, flip B : UInt<16>, Hi : UInt<16>, Lo : UInt<16>}
    
    node mult = mul(io.A, io.B) @[HiLoMultiplier.scala 14:19]
    node _T = bits(mult, 15, 0) @[HiLoMultiplier.scala 15:16]
    io.Lo <= _T @[HiLoMultiplier.scala 15:9]
    node _T_1 = bits(mult, 31, 16) @[HiLoMultiplier.scala 16:16]
    io.Hi <= _T_1 @[HiLoMultiplier.scala 16:9]
    
