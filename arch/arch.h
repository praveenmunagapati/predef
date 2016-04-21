#ifndef __PREDEF_ARCH_H
#define __PREDEF_ARCH_H

#define PREDEF_ARCH_DETECTED                    0

#include "x64.h"
#include "x86.h"

#if (PREDEF_ARCH_DETECTED == 0)
#   warning "Do not detect cpu architechture"
#endif

#endif