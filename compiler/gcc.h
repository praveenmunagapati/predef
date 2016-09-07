#ifndef __PREDEF_GCC_H
#define __PREDEF_GCC_H

#include <predef/common/version.h>

#define PRDEF_COMPILER_GCC_3_0_0                PRDEF_VERSION_MAKE(3,0,0)

#define PRDEF_COMPILER_GCC                      PRDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_COMPILER_DETECTED == 0)
#   if defined(__GNUC__)
#      undef PRDEF_COMPILER_GCC
#      if defined(__GNUC_PATCHLEVEL__)
#         define PRDEF_COMPILER_GCC             PRDEF_VERSION_MAKE(__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__)
#      else
#         define PRDEF_COMPILER_GCC             PRDEF_VERSION_MAKE(__GNUC__,__GNUC_MINOR__,0)
#      endif
#   endif
#   if (PRDEF_COMPILER_GCC != PRDEF_VERSION_NOT_AVAILABLE)
#      undef  PRDEF_COMPILER_DETECTED
#      define PRDEF_COMPILER_DETECTED           1
#      define PRDEF_COMPILER_NAME               "GNU C/C++ compiler"
#   endif
#endif

#endif