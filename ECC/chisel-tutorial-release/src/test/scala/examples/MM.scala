// See LICENSE.txt for license details.
package examples

import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

class nn_mul_modTests(c: nn_mul_mod) extends PeekPokeTester(c) {
  val rnd2 = rnd.nextInt(2)
  for (t <- 0 until 1) {
    val rnd0 = 73//rnd.nextInt(16)
    val rnd1 = 15//rnd.nextInt(16)
    val rnd2 = 17//rnd.nextInt(2)
    println("in1: "+ rnd0)
    println("in2: "+ rnd1)
    println("p: "+ rnd2)
    val ret = (rnd0 * rnd1) % rnd2
    println("out: "+ ret)

    poke(c.io.in1,   rnd0)
    poke(c.io.in2,   rnd1)
    poke(c.io.p, rnd2)
    step(1)
    
    expect(c.io.out, (ret))
  }
}

class nn_mul_modTester extends ChiselFlatSpec {
  behavior of "nn_mul_mod"
  backends foreach {backend =>
    it should s"correctly add randomly generated numbers $backend" in {
      Driver(() => new nn_mul_mod(32), backend)(c => new nn_mul_modTests(c)) should be (true)
    }
  }
}

