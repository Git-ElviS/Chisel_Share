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
    //printf("#2# m= %x\n", m);
    m = (m & 0xffff.U) * io.p
    var out = m >> 16
    //printf("#3# out= %x\n", out);

    when(((m+tmp_out)&0xffff.U)< tmp_out){
        out = out + 1.U
    }
    //printf("#4# out= %x\n", out);
    when(out > io.p){
        io.out := out - io.p
    } .otherwise{
        io.out := out
    }
}