#ifndef __PREDEF_STDCLI_H
#define __PREDEF_STDCLI_H

#include <predef/common/version.h>

#define PREDEF_CLI_DETECTED                     0

#define PREDEF_VERSION_CLI                      200406

#define PREDEF_STD_CLI                          PREDEF_VERSION_NOT_AVAILABLE

#ifdef __cplusplus_cli
#   undef PREDEF_STD_CLI
#   if (__cplusplus_cli > 100)
#      define PREDEF_STD_CLI                    PREDEF_VERSION_MAKE_YYYYMM(__cplusplus_cli)
#   else
#      define PREDEF_STD_CLI                    PREDEF_VERSION_MAKE_YYYYMM(PREDEF_VERSION_CLI)
#   endif
#endif

#if (PREDEF_STD_CLI != PREDEF_VERSION_NOT_AVAILABLE)
#   undef  PREDEF_CLI_DETECTED
#   define PREDEF_CLI_DETECTED                  1
#endif

#endif