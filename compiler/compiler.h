#ifndef __PREDEF_COMPILER_H
#define __PREDEF_COMPILER_H

#define PREDEF_COMPILER_DETECTED                0

#include "msvc.h"
#include "gcc.h"
#include "cx51.h"
#include "c51.h"

#if (PREDEF_COMPILER_DETECTED == 0)
#   warning "Do not detect compiler"
#endif

#endif