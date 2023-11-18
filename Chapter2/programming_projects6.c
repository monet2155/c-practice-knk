// Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:
// ((((3x + 2)x - 5)x - 1)x + 7)x - 6
// Note that the modified program performs fewer multiplications.
// This technique for evaluating polynomials is known as Horners' Rule

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the x: ");
    scanf("%d", &x);

    int firstValue = (3 * x) + 2;
    int secondValue = (firstValue * x) - 5;
    int thirdValue = (secondValue * x) - 1;
    int fourthValue = (thirdValue * x) + 7;
    int result = (fourthValue * x) - 6;

    printf("The answer is: %d", result);

    return 0;
}

// This is awesome.