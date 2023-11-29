
#include <stdio.h>

// Write the following function:
void split_time(long total_sec, int *hr, int *min, int *sec);
// total_sec is a time represented as the number of seconds since midnight.
// hr, min, and sec are pointers to variables in which the function will store the equivalent time in hours(0-23), minutes(0-59), and seconds(0-59), respectively.

int main(void)
{
    long total_sec;
    int hour;
    int minute;
    int second;

    printf("Enter total second : ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hour, &minute, &second);

    printf("Total second %ld is %.2d:%.2d:%.2d \n", total_sec, hour, minute, second);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600L;
    *min = (total_sec % 3600L) / 60L;
    *sec = total_sec % 3600L % 60L;
}