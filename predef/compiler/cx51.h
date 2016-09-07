#ifndef __PREDEF_CX51_H
#define __PREDEF_CX51_H

#include <predef/common/version.h>

#define PREDEF_COMPILER_CX51                    PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_COMPILER_DETECTED == 0)
#   if defined(__CX51__)
#      undef PREDEF_COMPILER_CX51
#      define PREDEF_COMPILER_CX51              PREDEF_VERSION_MAKE_10_VRP(__CX51__)
#   endif
#   if (PREDEF_COMPILER_CX51 != PREDEF_VERSION_NOT_AVAILABLE)
#      undef PREDEF_COMPILER_DETECTED
#      define PREDEF_COMPILER_DETECTED          1
#      define PREDEF_COMPILER_NAME              "Keil CX51 compiler"
#   endif
#endif

#endif