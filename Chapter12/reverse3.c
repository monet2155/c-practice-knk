// Reverses a series of number (pointer version)

#include <stdio.h>

#define N (10)

int main(void)
{
    int a[N];
    int *p;

    printf("Enter %d numbers: ", N);

    // Same with
    // for (p = &a[0]; p < &a[N]; p++)
    for (p = a; p < a + N; p++)
    {
        scanf("%d", p);
    }

    printf("In reverse order:");

    // Same with
    // for (p = &a[N - 1]; p >= &a[0]; p--)
    for (p = a + N - 1; p >= a; p--)
    {
        printf(" %d", *p);
    }

    printf("\n");

    return 0;
}