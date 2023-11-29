
#include <stdio.h>

// Write the following function:
int *find_largest(int a[], int n);

// When passed an array a of length n, the function will return a pointer to the array's largest element.

int main(void)
{
    int a[] = {4, 5, 1, 2, 3};
    int n = sizeof(a) / sizeof(int);

    int largest;

    largest = *(find_largest(a, n));

    printf("The largest is %d\n", largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int i;
    int *largest = &a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > *largest)
        {
            largest = &a[i];
        }
    }
    return largest;
}