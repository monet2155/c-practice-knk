// Write a single expression whose value is either -1, 0 or +1, depending on whether i is less than, equal to, or greater then j, respectively

#include <stdio.h>

int main(void)
{
    int i = 2;
    int j = 0;

    printf("%d", i > j ? 1 : i == j ? 0
                                    : -1);

    return 0;
}
// knk's answer : (i > j) - (i < j)