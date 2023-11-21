// The following program fragments illustrate the short-circuit behavior of logical expressions.
// Show the output produced by each, assuming that i, j, and k are int variables.

#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;

    // (a)
    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    // '1 3 4 5'

    // (b)
    i = 7;
    j = 8;
    k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    // '0 7 8 9'

    // (c)
    i = 7;
    j = 8;
    k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    // '1 8 8 9'
    // j is 8 because i = j expression is already true(1)

    // (d)
    i = 1;
    j = 1;
    k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
    // '1 2 1 1'
    // k is 1 because ++i is true(non-zero). short-circuit skip all expressions on right side.

    return 0;
}