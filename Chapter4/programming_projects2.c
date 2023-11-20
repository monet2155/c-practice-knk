// Extend the program in Programming Project 1 to handle three-digit numbers.

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    printf("The reversal is: %d%d%d", number % 10, ((number % 100) / 10), number / 100);

    return 0;
}