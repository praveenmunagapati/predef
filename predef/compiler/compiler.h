#ifndef __PREDEF_COMPILER_H
#define __PREDEF_COMPILER_H

#define PREDEF_COMPILER_DETECTED                0

#include <predef/compiler/msvc.h>
#include <predef/compiler/gcc.h>
#include <predef/compiler/cx51.h>
#include <predef/compiler/c51.h>

#if (PREDEF_COMPILER_DETECTED == 0)
#   warning "Do not detect compiler"
#endif

#endif