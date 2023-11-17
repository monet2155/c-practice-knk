// Write a program that declares several int and float variables - without initializing them - and then prints their values.
// Is there any pattern to the values? (Usually there isn't.)
#include <stdio.h>

int main(void)
{
    int i1, i2, i3;

    printf("i1: %d\n", i1);
    printf("i2: %d\n", i2);
    printf("i3: %d\n", i3);

    float f1, f2, f3;

    printf("f1: %f\n", f1);
    printf("f2: %f\n", f2);
    printf("f3: %f\n", f3);

    return 0;
}

// My float values are all 0.000000.