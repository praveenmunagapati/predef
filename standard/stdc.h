#ifndef __PREDEF_STDC_H
#define __PREDEF_STDC_H

#include <predef/common/version.h>

#define PREDEF_C_DETECTED                       0

#define PREDEF_VERSION_C89                      198900
#define PREDEF_VERSION_C90                      199000
#define PREDEF_VERSION_C95                      199409
#define PREDEF_VERSION_C99                      199901
#define PREDEF_VERSION_C11                      201112

#define PREDEF_C_VERSION                        PREDEF_VERSION_NOT_AVAILABLE

#if defined(__STDC__) || defined(_MSC_EXTENSIONS)
#   undef PREDEF_C_VERSION
#   ifdef __STDC_VERSION__
#      if (__STDC_VERSION__ > 100)
#         define PREDEF_C_VERSION               __STDC_VERSION__
#      else
#         define PREDEF_C_VERSION               PREDEF_VERSION_C90
#      endif
#   elif defined(__ANSI__)
#      define PREDEF_C_VERSION                  PREDEF_VERSION_C90
#   elif defined(_MSC_VER)
#      if (_MSC_VER >= 1700)
#         define PREDEF_C_VERSION               PREDEF_VERSION_C99
#      else
#         define PREDEF_C_VERSION               PREDEF_VERSION_C90
#      endif
#   else
#      define PREDEF_C_VERSION                  PREDEF_VERSION_C89
#   endif
#endif

#define PREDEF_STD_C                            PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_C89                          PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_C90                          PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_C95                          PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_C99                          PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_C11                          PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_C_VERSION != PREDEF_VERSION_NOT_AVAILABLE)
#   undef  PREDEF_STD_C
#   define PREDEF_STD_C                         PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_C89)
#   if (PREDEF_C_VERSION >= PREDEF_VERSION_C89)
#      undef  PREDEF_STD_C89
#      undef  PREDEF_STD_C
#      define PREDEF_STD_C89                    PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_C89)
#      define PREDEF_STD_C                      PREDEF_STD_C89
#   endif
#   if (PREDEF_C_VERSION >= PREDEF_VERSION_C90)
#      undef  PREDEF_STD_C90
#      undef  PREDEF_STD_C
#      define PREDEF_STD_C90                    PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_C90)
#      define PREDEF_STD_C                      PREDEF_STD_C90
#   endif
#   if (PREDEF_C_VERSION >= PREDEF_VERSION_C95)
#      undef  PREDEF_STD_C95
#      undef  PREDEF_STD_C
#      define PREDEF_STD_C95                    PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_C95)
#      define PREDEF_STD_C                      PREDEF_STD_C95
#   endif
#   if (PREDEF_C_VERSION >= PREDEF_VERSION_C99)
#      undef  PREDEF_STD_C99
#      undef  PREDEF_STD_C
#      define PREDEF_STD_C99                    PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_C99)
#      define PREDEF_STD_C                      PREDEF_STD_C99
#   endif
#   if (PREDEF_C_VERSION >= PREDEF_VERSION_C11)
#      undef  PREDEF_STD_C11
#      undef  PREDEF_STD_C
#      define PREDEF_STD_C11                    PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_C11)
#      define PREDEF_STD_C                      PREDEF_STD_C11
#   endif
#endif

#if (PREDEF_STD_C != PREDEF_VERSION_NOT_AVAILABLE)
#   undef  PREDEF_C_DETECTED
#   define PREDEF_C_DETECTED                    1
#endif

#endif