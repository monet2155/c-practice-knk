// Finds the largest and smallest elements in an array

#include <stdio.h>

#define N (10)

void max_min(int a[], int n, int *out_max, int *out_min);

int main(void)
{
    int b[N];
    int i;
    int big;
    int small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *out_max, int *out_min)
{
    int i;

    *out_max = *out_min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > *out_max)
        {
            *out_max = a[i];
        }
        else if (a[i] < *out_min)
        {
            *out_min = a[i];
        }
    }
}