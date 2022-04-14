;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit Adder : 
  module FullAdder : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_4 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_5 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_6 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module FullAdder_7 : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>}
    
    node a_xor_b = xor(io.a, io.b) @[FullAdder.scala 16:22]
    node _T = xor(a_xor_b, io.cin) @[FullAdder.scala 17:21]
    io.sum <= _T @[FullAdder.scala 17:10]
    node a_and_b = and(io.a, io.b) @[FullAdder.scala 19:22]
    node b_and_cin = and(io.b, io.cin) @[FullAdder.scala 20:24]
    node a_and_cin = and(io.a, io.cin) @[FullAdder.scala 21:24]
    node _T_1 = or(a_and_b, b_and_cin) @[FullAdder.scala 22:22]
    node _T_2 = or(_T_1, a_and_cin) @[FullAdder.scala 22:34]
    io.cout <= _T_2 @[FullAdder.scala 22:11]
    
  module Adder : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip A : UInt<8>, flip B : UInt<8>, flip Cin : UInt<1>, Sum : UInt<8>, Cout : UInt<1>}
    
    inst FullAdder of FullAdder @[Adder.scala 19:35]
    FullAdder.clock <= clock
    FullAdder.reset <= reset
    inst FullAdder_1 of FullAdder_1 @[Adder.scala 19:35]
    FullAdder_1.clock <= clock
    FullAdder_1.reset <= reset
    inst FullAdder_2 of FullAdder_2 @[Adder.scala 19:35]
    FullAdder_2.clock <= clock
    FullAdder_2.reset <= reset
    inst FullAdder_3 of FullAdder_3 @[Adder.scala 19:35]
    FullAdder_3.clock <= clock
    FullAdder_3.reset <= reset
    inst FullAdder_4 of FullAdder_4 @[Adder.scala 19:35]
    FullAdder_4.clock <= clock
    FullAdder_4.reset <= reset
    inst FullAdder_5 of FullAdder_5 @[Adder.scala 19:35]
    FullAdder_5.clock <= clock
    FullAdder_5.reset <= reset
    inst FullAdder_6 of FullAdder_6 @[Adder.scala 19:35]
    FullAdder_6.clock <= clock
    FullAdder_6.reset <= reset
    inst FullAdder_7 of FullAdder_7 @[Adder.scala 19:35]
    FullAdder_7.clock <= clock
    FullAdder_7.reset <= reset
    wire carry : UInt<1>[9] @[Adder.scala 20:19]
    wire sum : UInt<1>[8] @[Adder.scala 21:19]
    carry[0] <= io.Cin @[Adder.scala 24:12]
    node _T = bits(io.A, 0, 0) @[Adder.scala 28:21]
    FullAdder.io.a <= _T @[Adder.scala 28:14]
    node _T_1 = bits(io.B, 0, 0) @[Adder.scala 29:21]
    FullAdder.io.b <= _T_1 @[Adder.scala 29:14]
    FullAdder.io.cin <= carry[0] @[Adder.scala 30:16]
    carry[1] <= FullAdder.io.cout @[Adder.scala 31:16]
    node _T_2 = bits(FullAdder.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[0] <= _T_2 @[Adder.scala 32:12]
    node _T_3 = bits(io.A, 1, 1) @[Adder.scala 28:21]
    FullAdder_1.io.a <= _T_3 @[Adder.scala 28:14]
    node _T_4 = bits(io.B, 1, 1) @[Adder.scala 29:21]
    FullAdder_1.io.b <= _T_4 @[Adder.scala 29:14]
    FullAdder_1.io.cin <= carry[1] @[Adder.scala 30:16]
    carry[2] <= FullAdder_1.io.cout @[Adder.scala 31:16]
    node _T_5 = bits(FullAdder_1.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[1] <= _T_5 @[Adder.scala 32:12]
    node _T_6 = bits(io.A, 2, 2) @[Adder.scala 28:21]
    FullAdder_2.io.a <= _T_6 @[Adder.scala 28:14]
    node _T_7 = bits(io.B, 2, 2) @[Adder.scala 29:21]
    FullAdder_2.io.b <= _T_7 @[Adder.scala 29:14]
    FullAdder_2.io.cin <= carry[2] @[Adder.scala 30:16]
    carry[3] <= FullAdder_2.io.cout @[Adder.scala 31:16]
    node _T_8 = bits(FullAdder_2.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[2] <= _T_8 @[Adder.scala 32:12]
    node _T_9 = bits(io.A, 3, 3) @[Adder.scala 28:21]
    FullAdder_3.io.a <= _T_9 @[Adder.scala 28:14]
    node _T_10 = bits(io.B, 3, 3) @[Adder.scala 29:21]
    FullAdder_3.io.b <= _T_10 @[Adder.scala 29:14]
    FullAdder_3.io.cin <= carry[3] @[Adder.scala 30:16]
    carry[4] <= FullAdder_3.io.cout @[Adder.scala 31:16]
    node _T_11 = bits(FullAdder_3.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[3] <= _T_11 @[Adder.scala 32:12]
    node _T_12 = bits(io.A, 4, 4) @[Adder.scala 28:21]
    FullAdder_4.io.a <= _T_12 @[Adder.scala 28:14]
    node _T_13 = bits(io.B, 4, 4) @[Adder.scala 29:21]
    FullAdder_4.io.b <= _T_13 @[Adder.scala 29:14]
    FullAdder_4.io.cin <= carry[4] @[Adder.scala 30:16]
    carry[5] <= FullAdder_4.io.cout @[Adder.scala 31:16]
    node _T_14 = bits(FullAdder_4.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[4] <= _T_14 @[Adder.scala 32:12]
    node _T_15 = bits(io.A, 5, 5) @[Adder.scala 28:21]
    FullAdder_5.io.a <= _T_15 @[Adder.scala 28:14]
    node _T_16 = bits(io.B, 5, 5) @[Adder.scala 29:21]
    FullAdder_5.io.b <= _T_16 @[Adder.scala 29:14]
    FullAdder_5.io.cin <= carry[5] @[Adder.scala 30:16]
    carry[6] <= FullAdder_5.io.cout @[Adder.scala 31:16]
    node _T_17 = bits(FullAdder_5.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[5] <= _T_17 @[Adder.scala 32:12]
    node _T_18 = bits(io.A, 6, 6) @[Adder.scala 28:21]
    FullAdder_6.io.a <= _T_18 @[Adder.scala 28:14]
    node _T_19 = bits(io.B, 6, 6) @[Adder.scala 29:21]
    FullAdder_6.io.b <= _T_19 @[Adder.scala 29:14]
    FullAdder_6.io.cin <= carry[6] @[Adder.scala 30:16]
    carry[7] <= FullAdder_6.io.cout @[Adder.scala 31:16]
    node _T_20 = bits(FullAdder_6.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[6] <= _T_20 @[Adder.scala 32:12]
    node _T_21 = bits(io.A, 7, 7) @[Adder.scala 28:21]
    FullAdder_7.io.a <= _T_21 @[Adder.scala 28:14]
    node _T_22 = bits(io.B, 7, 7) @[Adder.scala 29:21]
    FullAdder_7.io.b <= _T_22 @[Adder.scala 29:14]
    FullAdder_7.io.cin <= carry[7] @[Adder.scala 30:16]
    carry[8] <= FullAdder_7.io.cout @[Adder.scala 31:16]
    node _T_23 = bits(FullAdder_7.io.sum, 0, 0) @[Adder.scala 32:26]
    sum[7] <= _T_23 @[Adder.scala 32:12]
    node _T_24 = cat(sum[1], sum[0]) @[Adder.scala 34:17]
    node _T_25 = cat(sum[3], sum[2]) @[Adder.scala 34:17]
    node _T_26 = cat(_T_25, _T_24) @[Adder.scala 34:17]
    node _T_27 = cat(sum[5], sum[4]) @[Adder.scala 34:17]
    node _T_28 = cat(sum[7], sum[6]) @[Adder.scala 34:17]
    node _T_29 = cat(_T_28, _T_27) @[Adder.scala 34:17]
    node _T_30 = cat(_T_29, _T_26) @[Adder.scala 34:17]
    io.Sum <= _T_30 @[Adder.scala 34:10]
    io.Cout <= carry[8] @[Adder.scala 35:11]
    
