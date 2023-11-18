// Modify the program of Programming Project 2 so that it prompts the user to enter the radius of sphere.

#include <stdio.h>

#define CONSTANT_VALUE (4.0f / 3.0f)
#define PI (3.14159f)

int main(void)
{
    float radius;

    // add this line
    printf("Input radius: ");
    scanf("%f", &radius);

    printf("The volume of sphere: %.2f", (CONSTANT_VALUE * PI * radius * radius * radius));

    return 0;
}