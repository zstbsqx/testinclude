#include <stdio.h>
#undef A
#define A 2

void test() {
    printf("%d\n", A);
}

#undef A
#define A 1
