#ifndef FT_ABS_H
#define FT_ABS_H

#define ABS(Value) ((Value < 0) ? (Value * -1) : (Vlaue))

#endif

/*
#include <stdio.h>
#include "ft_abs.h"

int main() {
    int a = -7;
    int b = 4;
    printf("ABS(%d) = %d\n", a, ABS(a));  // ABS(-7) = 7
    printf("ABS(%d) = %d\n", b, ABS(b));  // ABS(4) = 4
    return 0;
}
*/