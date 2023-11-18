// Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
// Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by it self
// repatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the x: ");
    scanf("%d", &x);

    int firstValue = (3 * (x * x * x * x * x));
    int secondValue = (2 * (x * x * x * x));
    int thirdValue = (5 * (x * x * x));
    int fourthValue = (x * x);
    int fifthValue = (7 * x);

    printf("The answer is: %d", firstValue + secondValue - thirdValue - fourthValue + fifthValue - 6);

    return 0;
}