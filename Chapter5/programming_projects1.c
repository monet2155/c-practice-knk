// Write a program that calculates how many digits a number contains:

// You may assume that the number has no more than four digits.
// Hint: Use if statements to test the number. For example, if the number is between 0 and 9, it has one digit.
// If the number is between 10 and 99, it has two digits.

#include <stdio.h>

int main(void)
{
    int number;
    int digitCount;

    printf("Enter a number: ");
    scanf("%4d", &number);

    if (number >= 0 && number <= 9)
    {
        digitCount = 1;
    }
    else if (number >= 10 && number <= 99)
    {
        digitCount = 2;
    }
    else if (number >= 100 && number <= 999)
    {
        digitCount = 3;
    }
    else if (number >= 1000 && number <= 9999)
    {
        digitCount = 4;
    }

    printf("The number %d has %d digits", number, digitCount);

    return 0;
}