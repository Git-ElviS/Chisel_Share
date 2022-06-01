// See LICENSE.txt for license details.
package examples

import chisel3._

class nn_compute_redc1_coefs(val n:Int) extends Module {

  val io = IO(new Bundle {
    val p_in    = Input(UInt(n.W))
    val r  = Output(UInt(n.W))
    val r_square = Output(UInt(n.W))
    val mpinv = Output(UInt(n.W))
    val done = Output(UInt(4.W))
  })

  io.done := 0.U
  val tmp_nn1 = 1.U << 17
  val tmp_nn2 = tmp_nn1
 
  //nn_modinv_2exp()
  val modinv_2exp = Module(new nn_modinv_2exp)

  modinv_2exp.io.x := io.p_in
  modinv_2exp.io.exp := n.U
  var tmp_nn = modinv_2exp.io.out
  //printf("## tmp_nn = %x\n", tmp_nn)

  tmp_nn = tmp_nn2 - tmp_nn
  //printf("## mpinv = %x\n", tmp_nn)
  io.mpinv := tmp_nn & 0xffff.U

  /* r = 0x1 << p_rounded_bitlen*/
  val r = 1.U << 16
  val out_r = r % io.p_in
  io.r := out_r

  val r_square = r*r
  //printf("~~~r_squ = %d\n", r_square);
  io.r_square := r_square % io.p_in
  io.done := 1.U
}
