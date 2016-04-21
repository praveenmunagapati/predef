#ifndef __PREDEF_C51_H
#define __PREDEF_C51_H

#include "../common/version.h"

#ifndef PREDEF_COMPILER_DETECTED
#   define PREDEF_COMPILER_DETECTED             0
#endif

#define PREDEF_COMPILER_C51                     PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_COMPILER_DETECTED == 0)
#   if (!PREDEF_COMPILER_DETECTED) && defined(__C51__)
#      undef PREDEF_COMPILER_C51
#      define PREDEF_COMPILER_C51               PREDEF_VERSION_MAKE_10_VRP(__C51__)
#   endif
#   if (PREDEF_COMPILER_C51 != PREDEF_VERSION_NOT_AVAILABLE)
#      undef PREDEF_COMPILER_DETECTED
#      define PREDEF_COMPILER_DETECTED          1
#      define PREDEF_COMPILER_NAME              "Keil C51 compiler"
#   endif
#endif

#endif