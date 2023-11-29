
#include <stdio.h>

// Write the following function:
void find_two_largest(int a[], int n, int *largest, int *second_largest);

// When passed an array a of length n, the function will search a for its largest and second-largest elements,
// storing them in the variables pointed to by largest and second_largest, respectively.

int main(void)
{
    int a[] = {
        4,
        5,
        3,
        2,
        1,
    };
    int n = 5;

    int largest;
    int second_largest;

    find_two_largest(a, n, &largest, &second_largest);

    printf("Largest is %d, second largest is %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = a[0];
    *second_largest = a[1];

    for (i = 0; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest)
        {
            // to check all same values array
            *second_largest = a[i];
        }
    }
}