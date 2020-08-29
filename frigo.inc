#include "colors.inc"    // The include files contain
#include "woods.inc"

//frigo
box {
  <325 - 1 - 55.5, 169, 1>
  <325 - 1, 1, 1 + 55.5>
  texture {
    pigment { color White }
  }
}

//placards frigo
box {
  <325 - 1 - 55.5, 170, 0>
  <325 - 1, 240, 61.5>
  texture {
    T_Wood1
    scale 1000
  }
}
box {
  <325 - 57 - 60, 0, 0>
  <325 - 57, 240, 59>
  texture {
    T_Wood1
  }
}
box {
  <325 - 57 - 60, 17, 60>
  <325 - 57, 17 + 51, 61.5>
  texture {
    T_Wood1
  }
}
box {
  <325 - 57 - 60, 68.5, 60>
  <325 - 57, 120, 61.5>
  texture {
    T_Wood1
  }
}
box {
  <325 - 57 - 60, 120.5, 60>
  <325 - 57, 240, 61.5>
  texture {
    T_Wood1
  }
}
