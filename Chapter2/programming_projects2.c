// Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v=4/3pr^3.
// Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
// Hint: C doesn't have an exponentiaion operator, so you'll need to multiply r by itself twice to compute r^3

#include <stdio.h>

// result if int, not float: 3141.59
// result float: 4188.79 (this is close to answer)
#define CONSTANT_VALUE (4.0f / 3.0f)
#define PI (3.14159f)

int main(void)
{
    int radius = 10;

    printf("The volume of sphere: %.2f", (CONSTANT_VALUE * PI * radius * radius * radius));

    return 0;
}