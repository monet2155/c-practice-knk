// Write the following function:
// void swap(int *p, int *q);
// When passed the adresses of two variables, swap should exchange the values of the variables:
// swap(&i, &j)

#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i = 1;
    int j = 2;

    swap(&i, &j);

    printf("i : %d, j : %d\n", i, j);

    return 0;
}

void swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}