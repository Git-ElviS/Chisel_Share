;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit Combinational : 
  module Combinational : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip x : UInt<16>, flip y : UInt<16>, z : UInt<16>}
    
    node _T = add(io.x, io.y) @[Combinational.scala 12:16]
    node _T_1 = tail(_T, 1) @[Combinational.scala 12:16]
    io.z <= _T_1 @[Combinational.scala 12:8]
    
