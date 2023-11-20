// Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx:
#include <stdio.h>

int main(void)
{
    int phoneNumberFirst;
    int phoneNumberSecond;
    int phoneNumberThird;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phoneNumberFirst, &phoneNumberSecond, &phoneNumberThird);

    printf("You entered %d.%d.%d", phoneNumberFirst, phoneNumberSecond, phoneNumberThird);

    return 0;
}