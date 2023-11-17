// In the dweight.c program (Section 2.4), which spaces are essential?

// dweght.c
#include <stdio.h>

int main(void)
{
    // Essential spaces are between the tokens (e.g. between int and height)
    int height;
    int length;
    int width;
    int volume;
    int weight;

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    // Essential spaces are between the tokens (e.g. between return and 0)
    return 0;
}