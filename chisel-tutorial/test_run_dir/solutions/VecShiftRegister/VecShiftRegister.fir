;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit VecShiftRegister : 
  module VecShiftRegister : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip ins : UInt<4>[4], flip load : UInt<1>, flip shift : UInt<1>, out : UInt<4>}
    
    reg delays : UInt[4], clock @[VecShiftRegister.scala 20:19]
    when io.load : @[VecShiftRegister.scala 21:18]
      delays[0] <= io.ins[0] @[VecShiftRegister.scala 22:15]
      delays[1] <= io.ins[1] @[VecShiftRegister.scala 23:15]
      delays[2] <= io.ins[2] @[VecShiftRegister.scala 24:15]
      delays[3] <= io.ins[3] @[VecShiftRegister.scala 25:15]
      skip @[VecShiftRegister.scala 21:18]
    else : @[VecShiftRegister.scala 26:25]
      when io.shift : @[VecShiftRegister.scala 26:25]
        delays[0] <= io.ins[0] @[VecShiftRegister.scala 27:15]
        delays[1] <= delays[0] @[VecShiftRegister.scala 28:15]
        delays[2] <= delays[1] @[VecShiftRegister.scala 29:15]
        delays[3] <= delays[2] @[VecShiftRegister.scala 30:15]
        skip @[VecShiftRegister.scala 26:25]
    io.out <= delays[3] @[VecShiftRegister.scala 32:10]
    
