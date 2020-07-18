#include "colors.inc"    // The include files contain
#include "stones.inc"    // pre-defined scene elements
#include "woods.inc"
#include "glass.inc"
// #include "textures.inc"

#include "mur_fenetre.inc"
#include "table.inc"
#include "mur_frigo.inc"
#include "frigo.inc"
#include "etageres.inc"
//#include "plan_travail_transparent.inc"
#include "sol.inc"
//#include "chaudiere_transparente.inc"
//#include "placards_hauts_transparents.inc"
//#include "placards_bas_transparents.inc"

// y
// ^
// |
// |


camera {
    location <1.5*325, 175, 1.5*260>
    look_at  <0, 75,  0>
}

light_source { <155, 275, 130> color White}

