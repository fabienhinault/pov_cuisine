#include "stones.inc"

//sol
box {
    <0, 0, 0>,  // Near lower left corner
    <325, -1, 260>   // Far upper right corner
    texture {
      T_Stone25     // Pre-defined from stones.inc
      scale 40       // Scale by the same amount in all
                    // directions
    }
//    rotate y*20     // Equivalent to "rotate <0,20,0>"
  }
