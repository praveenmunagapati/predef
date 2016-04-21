#ifndef __PREDEF_ARCH_X64
#define __PREDEF_ARCH_X64

#include "../common/version.h"

#ifndef PREDEF_ARCH_DETECTED
#   define PREDEF_ARCH_DETECTED                 0
#endif

#define PREDEF_ARCH_X86_64                      PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_ARCH_DETECTED == 0)
#   if defined(__x86_64) || defined(__x86_64__) || defined(__amd64__) ||        \
       defined(__amd64) || defined(_M_X64)
#      undef  PREDEF_ARCH_X86_64
#      define PREDEF_ARCH_X86_64                PREDEF_VERSION_AVAILABLE
#   endif
#   if (PREDEF_ARCH_X86_64 != PREDEF_VERSION_NOT_AVAILABLE)
#      undef  PREDEF_ARCH_DETECTED
#      define PREDEF_ARCH_DETECTED              1
#      define PREDEF_ARCH_NAME                  "AMD X85_64"
#   endif
#endif

#endif