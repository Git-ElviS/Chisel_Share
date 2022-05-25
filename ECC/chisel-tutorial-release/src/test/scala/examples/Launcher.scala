// See LICENSE.txt for license details.
package examples

import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val examples = Map(
      
      "MM" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new nn_mul_mod(32), manager) {
          (c) => new nn_mul_modTests(c)
        }
      }      
  )
  def main(args: Array[String]): Unit = {
    TutorialRunner("examples", examples, args)
  }
}

