#include "colors.inc"    // The include files contain
#include "stones.inc"    // pre-defined scene elements
#include "woods.inc"
// #include "textures.inc"

//table
box {
  <54, 73.5, 20>
  <54 + 70, 75, 20 + 110>
    texture {
      T_Wood1     // Pre-defined from stones.inc
      scale 100
    }
}

box {
  <54, 0, 20>
  <54 + 3, 73.5, 20 + 3>
    texture {
      T_Wood1     // Pre-defined from stones.inc
      scale 100
    }
}

box {
  <54 + 70 - 3, 0,    20>
  <54 + 70,     73.5, 20 + 3>
    texture {
      T_Wood1     // Pre-defined from stones.inc
      scale 100
    }
}

box {
  <54, 0, 20 + 110 - 3>
  <54 + 3, 73.5, 20 + 110>
    texture {
      T_Wood1     // Pre-defined from stones.inc
      scale 100
    }
}

box {
  <54 + 70 - 3, 0, 20 + 110 - 3>
  <54 + 70, 73.5, 20 + 110>
    texture {
      T_Wood1     // Pre-defined from stones.inc
      scale 100
    }
}

// tabourets

#local tabouret =
union {
	box {
	  <0,      45,       40>
	  <0 + 30, 46,   40 + 30>
	    texture {
	      T_Wood1     // Pre-defined from stones.inc
	      scale 100
	    }
	}

	box {
	  <0,      0, 40>
	  <0 + 2, 45.5, 40 + 2>
	    texture {
	      T_Wood1     // Pre-defined from stones.inc
	      scale 100
	    }
	}

	box {
	  <0,       0,   40 + 30 - 2>
	  <0 + 2,  45.5, 40 + 30>
	    texture {
	      T_Wood1     // Pre-defined from stones.inc
	      scale 100
	    }
	}

	box {
	  <0 + 30 - 2,   0, 40>
	  <0 + 30,      45.5, 40 + 2>
	    texture {
	      T_Wood1     // Pre-defined from stones.inc
	      scale 100
	    }
	}

	box {
	  <0 + 30 - 2,   0, 40 + 30 - 2>
	  <0 + 30,      45.5, 40 + 30>
	    texture {
	      T_Wood1     // Pre-defined from stones.inc
	      scale 100
	    }
	}

	translate x*14
}

tabouret

object {
  tabouret
  translate x*130
}

object {
  tabouret
  translate z*60
}

object {
  tabouret
  translate z*60 + x*130
}


