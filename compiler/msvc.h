#ifndef __PREDEF_MSVC_H
#define __PREDEF_MSVC_H

#include "../common/version.h"

#ifndef PREDEF_COMPILER_DETECTED
#   define PREDEF_COMPILER_DETECTED             0
#endif

#define PREDEF_COMPILER_MSVC_7_1                PREDEF_VERSION_MAKE(1310/100-6,1310%100,0)      /* Visual C++ .NET 2003 */
#define PREDEF_COMPILER_MSVC_8_0                PREDEF_VERSION_MAKE(1400/100-6,1400%100,0)      /* Visaul C++ 2005 */
#define PREDEF_COMPILER_MSVC_9_0                PREDEF_VERSION_MAKE(1500/100-6,1500%100,0)      /* Visual C++ 2008 */
#define PREDEF_COMPILER_MSVC_10_0               PREDEF_VERSION_MAKE(1600/100-6,1600%100,0)      /* Visual C++ 2010 */
#define PREDEF_COMPILER_MSVC_11_0               PREDEF_VERSION_MAKE(1700/100-6,1700%100,0)      /* Visual C++ 2012 */
#define PREDEF_COMPILER_MSVC_12_0               PREDEF_VERSION_MAKE(1800/100-6,1800%100,0)      /* Visual C++ 2013 */
#define PREDEF_COMPILER_MSVC_14_0               PREDEF_VERSION_MAKE(1900/100-6,1900%100,0)      /* Visual C++ 2015 */

#define PREDEF_COMPILER_MSVC                    PREDEF_VERSION_NOT_AVAILABLE

#if (PREDEF_COMPILER_DETECTED == 0)
#   if (!PREDEF_COMPILER_DETECTED) && defined(_MSC_VER)
#      undef PREDEF_COMPILER_MSVC
#      if !defined (_MSC_FULL_VER)
#         define PREDEF_COMPILER_MSVC_BUILD     0
#      else
#         if (_MSC_FULL_VER/10000 == _MSC_VER)
#            define PREDEF_COMPILER_MSVC_BUILD  (_MSC_FULL_VER % 10000)
#         elif (_MSC_FULL_VER/100000 == _MSC_VER)
#            define PREDEF_COMPILER_MSVC_BUILD  (_MSC_FULL_VER % 100000)
#         else
#            error "Cannot determine build number from _MSC_FULL_VER"
#         endif
#      endif
#      if (_MSC_VER >= 1900)
#         define PREDEF_COMPILER_MSVC           PREDEF_VERSION_MAKE(_MSC_VER/100-5,_MSC_VER%100,PREDEF_COMPILER_MSVC_BUILD)
#      else
#         define PREDEF_COMPILER_MSVC           PREDEF_VERSION_MAKE(_MSC_VER/100-6,_MSC_VER%100,PREDEF_COMPILER_MSVC_BUILD)
#      endif
#   endif
#   if (PREDEF_COMPILER_MSVC != PREDEF_VERSION_NOT_AVAILABLE)
#      undef  PREDEF_COMPILER_DETECTED
#      define PREDEF_COMPILER_DETECTED          1
#      define PREDEF_COMPILER_NAME              "Microsoft C/C++ compiler"
#      define PREDEF_HAS_PRAGMA_ONCE
#      if (PREDEF_COMPILER_MSVC >= PREDEF_COMPILER_MSVC_8_0)
#         define PREDEF_HAS_VARIADIC_MACROS
#      endif
#      define PREDEF_HAS_MS_INT64
#      if defined(_MSC_EXTENSIONS) || (PREDEF_COMPILER_MSVC >= PREDEF_COMPILER_MSVC_8_0)
#         define PREDEF_HAS_LONG_LONG
#      endif
#      if (PREDEF_COMPILER_MSVC >= PREDEF_VERSION_MAKE(1800/100-6,1800%100,20827))
#         define PREDEF_HAS_FENV_H
#      endif
#      if (PREDEF_COMPILER_MSVC >= PREDEF_COMPILER_MSVC_7_1)
#         define PREDEF_HAS_LIMITS_H
#      endif
#      if (PREDEF_COMPILER_MSVC >= PREDEF_COMPILER_MSVC_10_0)
#         define PREDEF_HAS_STDINT_H
#      endif
#      define PREDEF_HAS_STDDEF_H
#      define PREDEF_HAS_STDIO_H
#      define PREDEF_HAS_STDARG_H
#      define PREDEF_HAS_STRING_H
#      define PREDEF_HAS_STDLIB_H
#      define PREDEF_HAS_WINDOWS_H
#   endif
#endif

#endif