#ifndef __PREDEF_OS_H
#define __PREDEF_OS_H

#define PREDEF_OS_DETECTED                      0

#include "win32_64.h"

#if !PREDEF_OS_DETECTED
#   warning "Do not detect operation system"
#endif

#endif