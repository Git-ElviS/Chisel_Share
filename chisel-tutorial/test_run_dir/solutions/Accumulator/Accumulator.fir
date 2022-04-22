;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit Accumulator : 
  module Accumulator : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<1>, out : UInt<8>}
    
    reg accumulator : UInt<8>, clock with : (reset => (reset, UInt<8>("h00"))) @[Accumulator.scala 16:28]
    node _T = add(accumulator, io.in) @[Accumulator.scala 17:30]
    node _T_1 = tail(_T, 1) @[Accumulator.scala 17:30]
    accumulator <= _T_1 @[Accumulator.scala 17:15]
    io.out <= accumulator @[Accumulator.scala 18:10]
    
