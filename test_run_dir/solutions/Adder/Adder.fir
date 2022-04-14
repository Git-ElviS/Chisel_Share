;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit Adder : 
  module Adder : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in0 : UInt<8>, flip in1 : UInt<8>, out : UInt<8>}
    
    node _T = add(io.in0, io.in1) @[Adder.scala 17:20]
    node _T_1 = tail(_T, 1) @[Adder.scala 17:20]
    io.out <= _T_1 @[Adder.scala 17:10]
    
