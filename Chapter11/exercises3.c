// The following function supposedly computes the sum and average of the numbers in the array a, which has length n.
// avg and sum point to variables that the function should modify.
// Unfortunately, the function contains several errors; find and correct them.

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    // Modify this line
    *sum = 0.0;

    for (i = 0; i < n; i++)
    {
        // Modify this line
        *sum += a[i];
    }

    // Modify this line
    *avg = *sum / n;
}

// Test
int main(void)
{
    double a[] = {1.0, 2.0, 3.0};
    int n = 3;

    double average;
    double sum;

    avg_sum(a, n, &average, &sum);

    printf("Average is %lf\n", average);
    printf("Sum is %lf\n", sum);

    return 0;
}