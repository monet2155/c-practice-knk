// Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time,
// instead of entering one digit, then five digits, and then another five digits.

#include <stdio.h>

int main(void)
{
    int upc;
    int first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%11d", &upc);

    first_sum =
        (upc / 10000000000) + ((upc / 100000000) % 10) + ((upc / 1000000) % 10) + ((upc / 10000) % 10) + ((upc / 100) % 10) + (upc % 10);

    second_sum =
        ((upc / 1000000000) % 10) + ((upc / 10000000) % 10) + ((upc / 100000) % 10) + ((upc / 1000) % 10) + ((upc / 10) % 10);

    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}