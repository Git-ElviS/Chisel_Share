// See LICENSE.txt for license details.
package examples

import chisel3._
import chisel3.util._

//A 4-bit adder with carry in and carry out
class nn_modinv_2exp extends Module {
    val io = IO(new Bundle {
        val x   = Input(UInt(32.W))
        val exp = Input(UInt(32.W))
        val out = Output(UInt(32.W))
    })

    val cnt = 1.U
    val mask = 0xffff.U
    var tmp_out = 1.U
    var tmp_sqr = 0.U
    var tmp_mul = 0.U

    for (i <- 0 until 3) {
        tmp_sqr = tmp_out*tmp_out
        tmp_mul = tmp_sqr * io.x
        tmp_out =  tmp_out << 1
        //printf("!! tmp_out = %x tmp_mul =%x\n", tmp_out, tmp_mul)
        tmp_out = tmp_out - tmp_mul
        //printf("@@ tmp_out = %x\n", tmp_out)
    }
/*
    for (i <- 0 until 1) {
        tmp_sqr = tmp_out*tmp_out
        tmp_mul = tmp_sqr * io.x
        tmp_out =  tmp_out << 1.U
        tmp_out = tmp_out - tmp_mul
    }
  */  
    tmp_out = tmp_out & mask

    io.out := tmp_out
}