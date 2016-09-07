#ifndef __PREDEF_OS_WIN32_64_H
#define __PREDEF_OS_WIN32_64_H

#include <predef/common/version.h>

#define PREDEF_OS_WINDOWS                       PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_OS_DETECTED == 0)
#   if (defined(_WIN32) || defined(WIN32) || defined(__WIN32__) ||              \
       defined(_WIN64) || defined(__TOS_WIN__) || defined(__WINDOWS__) ||       \
       defined(__NT__))
#      undef PREDEF_OS_WINDOWS
#      if !defined(PREDEF_OS_WINDOWS) && defined(_WIN64)
#         define PREDEF_OS_WINDOWS              PREDEF_VERSION_AVAILABLE
#         define PREDEF_OS_WIN64                PREDEF_VERSION_AVAILABLE
#      elif !defined(PREDEF_OS_WINDOWS) &&                                      \
            (defined(_WIN32) || defined(WIN32) || defined(__WIN32__))
#         define PREDEF_OS_WINDOWS              PREDEF_VERSION_AVAILABLE
#         define PREDEF_OS_WIN32                PREDEF_VERSION_AVAILABLE
#      endif
#      if !defined(PREDEF_OS_WINDOWS)
#         define PREDEF_OS_WINDOWS              PREDEF_VERSION_AVAILABLE
#         define PREDEF_OS_WIN32                PREDEF_VERSION_AVAILABLE
#      endif
#   endif
#   if (PREDEF_OS_WINDOWS != PREDEF_VERSION_NOT_AVAILABLE)
#      undef  PREDEF_OS_DETECTED
#      define PREDEF_OS_DETECTED                1
#      define PREDEF_OS_NAME                    "Microsift Windows"
#   endif
#endif

#endif