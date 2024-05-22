#pragma once
#include "quantum.h"

#define RGB_MATRIX_LAYOUT_LEDMAP( \
    k00, k01, k02, k03, k04, k05, k06,   k60, k61, k62, k63, k64, k65, k66, \
    k10, k11, k12, k13, k14, k15, k16,   k70, k71, k72, k73, k74, k75, k76, \
    k20, k21, k22, k23, k24, k25, k26,   k80, k81, k82, k83, k84, k85, k86, \
    k30, k31, k32, k33, k34, k35,             k91, k92, k93, k94, k95, k96, \
    k40, k41, k42, k43, k44,      k53,   kb3,      ka2, ka3, ka4, ka5, ka6, \
                        k50, k51, k52,   kb4, kb5, kb6 \
) \
{ \
    k00, k10, k20, k30, k40, \
    k01, k11, k21, k31, k41, \
    k02, k12, k22, k32, k42, \
    k03, k13, k23, k33, k43, \
    k04, k14, k24, k34, k44, \
    k05, k15, k25, k35, \
    k06, k16, k26, \
    k50, k51, k52, k53, \
\
    k66, k76, k86, k96, ka6, \
    k65, k75, k85, k95, ka5, \
    k64, k74, k84, k94, ka4, \
    k63, k73, k83, k93, ka3, \
    k62, k72, k82, k92, ka2, \
    k61, k71, k81, k91, \
    k60, k70, k80, \
    kb6, kb5, kb4, kb3 \
}

#define RED { HSV_RED }
#define CORAL { HSV_CORAL }
#define ORANGE { HSV_ORANGE }
#define GOLDEN { HSV_GOLDENROD }
#define GOLD { HSV_GOLD }
#define YELLOW { HSV_YELLOW }
#define CHART { HSV_CHARTREUSE }
#define GREEN { HSV_GREEN }
#define SPRING { HSV_SPRINGGREEN }
#define TURQ { HSV_TURQUOISE }
#define TEAL { HSV_TEAL }
#define CYAN { HSV_CYAN }
#define AZURE { HSV_AZURE }
#define BLUE { HSV_BLUE }
#define PURPLE { HSV_PURPLE }
#define MAGENT { HSV_MAGENTA }
#define PINK { HSV_PINK }
#define BLACK { HSV_BLACK }
