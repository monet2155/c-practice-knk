
#include <stdio.h>
#include <stdbool.h>

// Write the following function:
void split_date(int day_of_year, int year, int *month, int *day);
// day_of_year is an integer between 1 and 366, specifying a particular day within the year designated by year.
// month and day point to variables in which the function will store the equivalent month (1-12) and day within that month (1-31).

int main(void)
{
    int day_of_year;
    int year;

    int month;
    int day;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter day of year: ");
    scanf("%d", &day_of_year);

    split_date(day_of_year, year, &month, &day);

    printf("The date is %d.%.2d.%.2d\n", year, month, day);

    return 0;
}

// https://github.com/williamgherman/c-solutions/tree/master/11/exercises/07
void split_date(int day_of_year, int year, int *month, int *day)
{

    int i;
    bool found = false;

    for (i = 1; i <= 12 && !found; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day_of_year <= 31)
                found = true;
            else
                day_of_year -= 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day_of_year <= 30)
                found = true;
            else
                day_of_year -= 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                if (day_of_year <= 29)
                    found = true;
                else
                    day_of_year -= 29;
            }
            else
            {
                if (day_of_year <= 28)
                    found = true;
                else
                    day_of_year -= 28;
            }
            break;
        }
    }
    *month = i - 1;
    *day = day_of_year;
}