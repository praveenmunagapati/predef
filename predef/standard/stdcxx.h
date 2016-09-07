#ifndef __PREDEF_STDCXX_H
#define __PREDEF_STDCXX_H

#include <predef/common/version.h>

#define PREDEF_CXX_DETECTED                     0

#define PREDEF_CXX_VERSION                      PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_VERSION_CXX98                    199711
#define PREDEF_VERSION_CXX11                    201103
#define PREDEF_VERSION_CXX14                    201402

#ifdef __cplusplus
#   undef PREDEF_CXX_VERSION
#   if (__cplusplus > 100)
#      define PREDEF_CXX_VERSION                __cplusplus
#   else
#      define PREDEF_CXX_VERSION                PREDEF_VERSION_CXX98
#   endif
#endif

#define PREDEF_STD_CXX                          PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_CXX98                        PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_CXX11                        PREDEF_VERSION_NOT_AVAILABLE
#define PREDEF_STD_CXX14                        PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_CXX_VERSION != PREDEF_VERSION_NOT_AVAILABLE)
#   undef  PREDEF_STD_CXX
#   define PREDEF_STD_CXX                       PREDEF_VERSION_MAKE_YYYYMM(PREDEF_STD_CXX98)
#   if (PREDEF_CXX_VERSION >= PREDEF_VERSION_CXX98)
#      undef  PREDEF_STD_CXX98
#      undef  PREDEF_STD_CXX
#      define PREDEF_STD_CXX98                  PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_CXX98)
#      define PREDEF_STD_CXX                    PREDEF_STD_CXX98
#   endif
#   if (PREDEF_CXX_VERSION >= PREDEF_VERSION_CXX11)
#      undef  PREDEF_STD_CXX11
#      undef  PREDEF_STD_CXX
#      define PREDEF_STD_CXX11                  PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_CXX11)
#      define PREDEF_STD_CXX                    PREDEF_STD_CXX11
#   endif
#   if (PREDEF_CXX_VERSION >= PREDEF_VERSION_CXX14)
#      undef  PREDEF_STD_CXX14
#      undef  PREDEF_STD_CXX
#      define PREDEF_STD_CXX14                  PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_CXX14)
#      define PREDEF_STD_CXX                    PREDEF_STD_CXX14
#   endif
#endif

#if (PREDEF_STD_CXX != PREDEF_VERSION_NOT_AVAILABLE)
#   undef  PREDEF_CXX_DETECTED
#   define PREDEF_CXX_DETECTED 1
#endif

#endif