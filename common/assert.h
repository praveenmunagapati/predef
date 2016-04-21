#ifndef __PREDEF_ASSERT_H
#define __PREDEF_ASSERT_H

#define PREDEF_COMPILE_ASSERT(name, x)          typedef int __PREDEF_dummy_ ## name[(x)?1:-1]

#endif