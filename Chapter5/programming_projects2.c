// Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
// Be careful not to display 12:00 as 0:00.

#include <stdio.h>

int main(void)
{

    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    if (hour < 11)
        printf("Equivalent 12-hour time: %d:%d AM\n",
               hour == 0 ? 12 : hour, minute);
    else
        printf("Equivalent 12-hour time: %d:%d PM\n",
               hour == 12 ? 12 : hour - 12, minute);

    return 0;
}