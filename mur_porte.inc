#include "colors.inc"    // The include files contain

// mur porte
difference {
  box {
    <325, 0, 0>,  // Near lower left corner
    <326, 250, 260>   // Far upper right corner
  }
  box {
    <324,   0, 74>,  // Near lower left corner
    <327, 219, 74 + 74>   // Far upper right corner
  }
  texture {
    pigment { color White }
  }
}
