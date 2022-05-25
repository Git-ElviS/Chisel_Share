// See LICENSE.txt for license details.
package examples

import chisel3._
import chisel3.util._

//A 4-bit adder with carry in and carry out
class nn_mul_redc1(val n:Int) extends Module {
    val io = IO(new Bundle {
        val in1    = Input(UInt(n.W))
        val in2    = Input(UInt(n.W))
        val p    = Input(UInt(n.W))
        val mpinv    = Input(UInt(n.W))
        val out  = Output(UInt(n.W))
    })

    var tmp_out = 0.U

    tmp_out = io.in1 * io.in2
    var m = tmp_out * io.mpinv
    m = m * io.p
    tmp_out = tmp_out + m

    when(tmp_out > io.p){
        tmp_out = tmp_out - io.p
    }

    io.out := tmp_out
}