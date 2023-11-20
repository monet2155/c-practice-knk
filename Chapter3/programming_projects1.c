// Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd
#include <stdio.h>

int main(void)
{
    int year;
    int month;
    int day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%d%d", year, month, day);

    return 0;
}