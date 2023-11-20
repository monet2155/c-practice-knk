// Write a program that reads an integer entered by the user and displays it in octal (base 8):

// The output should be displayed using five digits, even if fewer digits are sufficient.
// Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case).
// Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit.
// (printf is capable of displaying numbers in base 8, as we'll see in Chapter 7, so there's actually an easier way to write this program).

#include <stdio.h>

int main(void)
{
    int number;

    int n1, n2, n3, n4, n5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    n1 = number % 8;
    number /= 8;

    n2 = number % 8;
    number /= 8;

    n3 = number % 8;
    number /= 8;

    n4 = number % 8;
    number /= 8;

    n5 = number % 8;
    number /= 8;

    printf("In octal, your number is: %d%d%d%d%d", n5, n4, n3, n2, n1);

    return 0;
}

// https://github.com/williamgherman/c-solutions/blob/master/04/projects/04/4.c
/**
 *     printf("In octal, your number is: %d%d%d%d%d\n",
           (n/4096)%8,
           (n/512)%8,
           (n/64)%8,
           (n/8)%8,
           n%8);
*/