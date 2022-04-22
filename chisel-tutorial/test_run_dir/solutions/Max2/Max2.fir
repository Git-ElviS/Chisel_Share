;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit Max2 : 
  module Max2 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in0 : UInt<8>, flip in1 : UInt<8>, out : UInt<8>}
    
    node _T = gt(io.in0, io.in1) @[Max2.scala 17:24]
    node _T_1 = mux(_T, io.in0, io.in1) @[Max2.scala 17:16]
    io.out <= _T_1 @[Max2.scala 17:10]
    
