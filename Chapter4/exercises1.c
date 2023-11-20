// Show the output produces by each of the following program fragments.
// Assume that i, j, and k are int variables.

#include <stdio.h>

int main(void)
{
    // (a)
    int i;
    int j;
    int k;

    i = 5;
    j = 3;
    printf("%d %d\n", i / j, i % j);
    // '1 2'

    // (b)
    i = 2;
    j = 3;
    printf("%d\n", (i + 10) % j);
    // '0'

    // (c)
    i = 7;
    j = 8;
    k = 9;
    printf("%d\n", (i + 10) % k / j);
    // '1'

    // (d)
    i = 1;
    j = 2;
    k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);
    // '0'

    return 0;
}