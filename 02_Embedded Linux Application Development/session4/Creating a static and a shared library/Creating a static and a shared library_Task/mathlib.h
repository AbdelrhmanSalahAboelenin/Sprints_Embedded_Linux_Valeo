#ifndef MATHLIB_H
#define MATHLIB_H

#include <stdint.h>
/*add: accepts two 32-bit integers and returns a 64-bit integer*/
int64_t add(int32_t a, int32_t b);

/*sub: accepts two 32-bit integers and returns a 32-bit integer*/
int32_t sub(int32_t a, int32_t b);

/*mul: accepts two 32-bit integers and returns a 64-bit integer*/
int64_t mul(int32_t a, int32_t b);

/*sqrt: accepts a 64-bit integers and returns a 32-bit integer*/
int32_t sqrt_func(int64_t a);

#endif
