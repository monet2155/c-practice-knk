
#include <stdio.h>

// Modify Programming Project 3 from Chapter 6 so that it includes the following function:
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
/**
 * numerator and denominator are the numerator and denominator of a fraction.
 * reduced_numerator and reduced_denominator are pointers to variables in which the function will store the numerator and denominator of the
 * fraction once it has benn reduced to lowest terms.
 */

int main(void)
{
    int num1;
    int denom1;
    int num2;
    int denom2;
    int result_num;
    int result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    reduce(num1 * denom2 + num2 * denom1,
           denom1 * denom2,
           &result_num,
           &result_denom);

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
    for (int i = 2; i <= *reduced_numerator && i <= *reduced_denominator; i++)
    {
        if (*reduced_numerator % i == 0 && *reduced_denominator % i == 0)
        {
            *reduced_numerator /= i;
            *reduced_denominator /= i;
            printf("%d : %d/%d\n", i, *reduced_numerator, *reduced_denominator);
            i = 1;
        }
    }
}