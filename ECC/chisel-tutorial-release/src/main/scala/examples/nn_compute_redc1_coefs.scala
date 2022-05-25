// See LICENSE.txt for license details.
package examples

import chisel3._

class nn_compute_redc1_coefs(val n:Int) extends Module {

  val io = IO(new Bundle {
    val p_in    = Input(UInt(n.W))
    val r  = Output(UInt(n.W))
    val r_sruare = Output(UInt(n.W))
    val mpinv = Output(UInt(n.W))
  })

  var tmp_nn1 = 1.U
  val tmp_nn2 = tmp_nn1
 
  //nn_modinv_2exp()
  val modinv_2exp = Module(new nn_modinv_2exp)

  modinv_2exp.io.x := tmp_nn1
  modinv_2exp.io.exp := io.p_in
  val tmp_nn = modinv_2exp.io.out

  tmp_nn1 = tmp_nn - tmp_nn2
  io.mpinv := tmp_nn1

  /* r = 0x1 << p_rounded_bitlen*/
  val r = 1.U << n
  val out_r = r % io.p_in
  io.r := out_r

  val r_sruare = r*r
  io.r_sruare := r_sruare % io.p_in

}
