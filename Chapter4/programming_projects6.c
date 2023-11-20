// European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North America.
// Each EAN ends with a check digit, just as UPC does. The technique for calculating the check digit is also similar:

// Add the second, fourth, sixth, eighth, tenth and twelfth digits.
// Add the first, third, fifth, seventh, ninth, and eleventh digits.
// Multiply the first sum by 3 and add it to the second sum.
// Subtract 1 from the total.
// Compute the remainder when the adjusted total is divided by 10.
// Subtract the remainder from 9.

// For example, consider Güllüoglu Turkish Delight Pistachio & Coconut, which has an EAN of 86914842660008.
// The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31.
// Multiplying the first sum by 3 and adding the second yields 82. Subtracting 1 gives 81.
// The remainder upon dividing by 10 is 1.
// When the remainder is subtracted from 9, the result is 8, which matches the last digit of the original code.
// Your job is to modify the upc.c program of Section 4.1 so that it calculates the check digit for an EAN.
// The user will enter the first 12 digits of the EAN as a single number:

#include <stdio.h>

int main(void)
{
    // THIS IS NOT WORKING BECAUSE CODE IS TOO LONG
    // int code;
    // int first_sum, second_sum, total;

    // printf("Enter the first 12 digits of an EAN: ");
    // scanf("%12d", &code);

    // first_sum =
    //     (code / 10000000000) + ((code / 100000000) % 10) + ((code / 1000000) % 10) + ((code / 10000) % 10) + ((code / 100) % 10) + (code % 10);

    // second_sum =
    //     ((code / 100000000000) % 10) +
    //     ((code / 1000000000) % 10) + ((code / 10000000) % 10) + ((code / 100000) % 10) + ((code / 1000) % 10) + ((code / 10) % 10);

    // total = (3 * first_sum) + second_sum;

    // printf("Check digit: %d", 9 - ((total - 1) % 10));

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sum1, sum2, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    total = 3 * sum1 + sum2;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
// https://github.com/williamgherman/c-solutions/blob/master/04/projects/06/6.c