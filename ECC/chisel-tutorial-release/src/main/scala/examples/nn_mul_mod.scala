// See LICENSE.txt for license details.
package examples

import chisel3._
import chisel3.util._

//A 4-bit adder with carry in and carry out
class nn_mul_mod(val n:Int) extends Module {
  val io = IO(new Bundle {
    val in1    = Input(UInt(n.W))
    val in1    = Input(UInt(n.W))
    val p  = Input(UInt(n.W))
    val out  = Output(UInt(n.W))
  })
  
  val compute_redc1_coefs = Module(new nn_compute_redc1_coefs(val n:Int))
  compute_redc1_coefs.io.p_in := io.p
  val r = compute_redc1_coefs.io.r
  val r_sruare = compute_redc1_coefs.io.r_sruare
  val mpinv = compute_redc1_coefs.io.,mpinv

  val mul_redc1_1 = Module(new nn_mul_redc1(val n:Int))
  mul_redc1_1.io.in1 := io.in1
  mul_redc1_1.io.in2 := r_sruare
  mul_redc1_1.io.p := io.p
  mul_redc1_1.io.mpinv := mpinv
  val in1_tmp = mul_redc1_1.io.out

  val mul_redc1_2 = Module(new nn_mul_redc1(val n:Int))
  mul_redc1_2.io.in1 := io.in2
  mul_redc1_2.io.in2 := r_sruare
  mul_redc1_2.io.p := io.p
  mul_redc1_2.io.mpinv := mpinv
  val in2_tmp = mul_redc1_2.io.out

  val mul_redc1_3 = Module(new nn_mul_redc1(val n:Int))
  mul_redc1_3.io.in1 := in1_tmp
  mul_redc1_3.io.in2 := in2_tmp
  mul_redc1_3.io.p := io.p
  mul_redc1_3.io.mpinv := mpinv
  val tmp = mul_redc1_3.io.out

  val mul_redc1_4 = Module(new nn_mul_redc1(val n:Int))
  mul_redc1_4.io.in1 := tmp
  mul_redc1_4.io.in2 := 1
  mul_redc1_4.io.p := io.p
  mul_redc1_4.io.mpinv := mpinv
  io.out = mul_redc1_4.io.out

}
