#include "colors.inc"    // The include files contain
#include "stones.inc"    // pre-defined scene elements
#include "woods.inc"
#include "glass.inc"
// #include "textures.inc"

//#include "mur_fenetre.inc"
#include "mur_chaudiere.inc"
#include "mur_porte.inc"
#include "table.inc"
// #include "mur_frigo.inc"
// #include "frigo.inc"
#include "frigo_transparent.inc"
#include "etageres.inc"
//#include "plan_travail.inc"
#include "plan_travail_transparent.inc"
#include "sol.inc"
//#include "chaudiere_transparente.inc"
//#include "placards_hauts_transparents.inc"
//#include "placards_bas_transparents.inc"
#include "chaudiere.inc"
#include "placards_hauts.inc"
#include "placards_bas.inc"

// y
// ^
// |
// |


camera {
    location <-.5*325, 175, -.5*260>
    look_at  <325, 75,  260>
}

light_source { <155, 275, 130> color White * 0.5}

light_source { <55, 275, 130> color White * 0.5}

light_source { <255, 275, 130> color White * 0.5}

