#include <stdio.h>
#include "mathlib.h"

int main() {
    int32_t a = 10, b = 8;
    printf("add= %ld\n",add(a,b));
    printf("sub= %d\n",sub(a, b));
    printf("mul= %ld\n",mul(a, b));


    printf("sqrt of a*b = %d\n",sqrt_func((mul(a,b))));

    return 0;
}
