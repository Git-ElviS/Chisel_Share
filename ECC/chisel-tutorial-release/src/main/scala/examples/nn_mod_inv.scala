// See LICENSE.txt for license details.
package examples

import chisel3._
import chisel3.util._

//A 4-bit adder with carry in and carry out
class nn_mul_inv(val n:Int) extends Module {
  val io = IO(new Bundle {
    val in1    = Input(UInt(n.W))
    val in2    = Input(UInt(n.W))
    val p  = Input(UInt(n.W))
    val out  = Output(UInt(n.W))
  })

  
}