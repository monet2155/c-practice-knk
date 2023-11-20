// Show the output produce by each of the following program fragments.
// Assume that i, j, and k are int variables.

#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;

    // (a)
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i);
    // '0 2'

    // (b)
    i = 10;
    j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);
    // '4 11 6'

    // (c)
    i = 7;
    j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);
    // '0 8 7'

    // (d)
    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);
    // '3 4 5 4'
}