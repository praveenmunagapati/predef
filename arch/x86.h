#ifndef __PREDEF_ARCH_X86
#define __PREDEF_ARCH_X86

#include <predef/common/version.h>

#define PREDEF_ARCH_X86                         PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_ARCH_DETECTED == 0)
#   if defined(i386) || defined(__i386__) || defined(__i486__) ||               \
       defined(__i586__) || defined(__i686__) || defined(__i386) ||             \
       defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) ||          \
       defined(__I86__) || defined(__INTEL__)
#      undef PREDEF_ARCH_X86
#      if !defined(PREDEF_ARCH_X86) && defined(__I86__)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_MAKE(__I86__,0,0)
#      endif
#      if !defined(PREDEF_ARCH_X86) && defined(_M_IX86)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_MAKE_10_VV00(_M_IX86)
#      endif
#      if !defined(PREDEF_ARCH_X86) && defined(__i686__)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_MAKE(6,0,0)
#      endif
#      if !defined(PREDEF_ARCH_X86) && defined(__i586__)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_MAKE(5,0,0)
#      endif
#      if !defined(PREDEF_ARCH_X86) && defined(__i486__)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_MAKE(4,0,0)
#      endif
#      if !defined(PREDEF_ARCH_X86) && defined(__i386__)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_MAKE(3,0,0)
#      endif
#      if !defined(PREDEF_ARCH_X86)
#         define PREDEF_ARCH_X86                PREDEF_VERSION_AVAILABLE
#      endif
#   endif
#   if (PREDEF_ARCH_X86 != PREDEF_VERSION_NOT_AVAILABLE)
#      undef  PREDEF_ARCH_DETECTED
#      define PREDEF_ARCH_DETECTED              1
#      define PREDEF_ARCH_NAME                  "Intel X86"
#   endif
#endif

#endif