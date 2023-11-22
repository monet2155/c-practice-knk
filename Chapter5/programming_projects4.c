// Here's a simplified version of the Beaufort scale, which is used to estimate wind force:
// Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.

#include <stdio.h>

int main(void)
{
    int windSpeed;

    printf("Enter wind speed(in knots): ");
    scanf("%d", &windSpeed);

    if (windSpeed < 1)
    {
        printf("The wind is Calm");
    }
    else if (windSpeed <= 3)
    {
        printf("The wind is Light air");
    }
    else if (windSpeed <= 27)
    {
        printf("The wind is Breeze");
    }
    else if (windSpeed <= 47)
    {
        printf("The wind is Gale");
    }
    else if (windSpeed <= 63)
    {
        printf("The wind is Storm");
    }
    else
    {
        printf("The wind is Hurricane");
    }

    return 0;
}