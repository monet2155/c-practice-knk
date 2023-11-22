// Write a program that finds the largest and smallest of four integers entered by the user:

// Use as few if statements as possible. Hint: Four if statements are sufficient.

#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4;

    int max1, min1, max2, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &number1, &number2, &number3, &number4);

    if (number1 >= number2)
    {
        max1 = number1;
        min1 = number2;
    }
    else
    {
        max1 = number2;
        min1 = number1;
    }

    if (number3 >= number4)
    {
        max2 = number3;
        min2 = number4;
    }
    else
    {
        max2 = number4;
        min2 = number3;
    }

    if (max2 > max1)
    {
        max1 = max2;
    }

    if (min2 < min1)
    {
        min1 = min2;
    }

    printf("Largest: %d\nSmallest: %d", max1, min1);
}