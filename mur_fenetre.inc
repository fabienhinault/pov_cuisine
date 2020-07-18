#include "colors.inc"    // The include files contain

// mur fenetre
difference {
  box {
    <0, 0, 0>,  // Near lower left corner
    <-1, 250, 260>   // Far upper right corner
  }
  box {
    <-2, 107, 71>,  // Near lower left corner
    <2, 219, 191>   // Far upper right corner
  }
  texture {
    pigment { color White }
  }
}
