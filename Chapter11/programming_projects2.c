
#include <stdio.h>
#define FLIGHT_1 (8 * 60)
#define FLIGHT_2 ((9 * 60) + 43)
#define FLIGHT_3 ((11 * 60) + 19)
#define FLIGHT_4 ((12 * 60) + 47)
#define FLIGHT_5 ((14 * 60))
#define FLIGHT_6 ((15 * 60) + 45)
#define FLIGHT_7 ((19 * 60))
#define FLIGHT_8 ((21 * 60) + 45)

// Modify Programming Project 8 from Chapter 5 so that it includes the following function:
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
/**
 * This function will find the flight whose departure time is closest to desired_time (expressed in minutes since midnight).
 * It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables pointed to
 * by departure_time and arrival_time, respectively.
 */

int main(void)
{
    int user_time,
        hour,
        minute;

    int departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    user_time = hour * 60 + minute;
    find_closest_flight(user_time, &departure_time, &arrival_time);

    printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s\n",
           (departure_time / 60) - 12 > 0 ? (departure_time / 60 - 12) : departure_time / 60,
           departure_time % 60,
           departure_time - 12 > 0 ? "p.m." : "a.m.",
           (arrival_time / 60) - 12 > 0 ? (arrival_time / 60 - 12) : arrival_time / 60,
           arrival_time % 60,
           arrival_time - 12 > 0 ? "p.m." : "a.m.");

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time <= FLIGHT_1 + (FLIGHT_2 - FLIGHT_1) / 2)
    {
        *departure_time = FLIGHT_1;
        *arrival_time = FLIGHT_1 + (2 * 60) + 16;
    }
    else if (desired_time < FLIGHT_2 + (FLIGHT_3 - FLIGHT_2) / 2)
    {
        *departure_time = FLIGHT_2;
        *arrival_time = FLIGHT_2 + (2 * 60) + 9;
    }
    else if (desired_time < FLIGHT_3 + (FLIGHT_4 - FLIGHT_3) / 2)
    {
        *departure_time = FLIGHT_3;
        *arrival_time = FLIGHT_3 + (2 * 60) + 11;
    }
    else if (desired_time < FLIGHT_4 + (FLIGHT_5 - FLIGHT_4) / 2)
    {
        *departure_time = FLIGHT_4;
        *arrival_time = FLIGHT_4 + (2 * 60) + 13;
    }
    else if (desired_time < FLIGHT_5 + (FLIGHT_6 - FLIGHT_5) / 2)
    {
        *departure_time = FLIGHT_5;
        *arrival_time = FLIGHT_5 + (2 * 60) + 8;
    }
    else if (desired_time < FLIGHT_6 + (FLIGHT_7 - FLIGHT_6) / 2)
    {
        *departure_time = FLIGHT_6;
        *arrival_time = FLIGHT_6 + (2 * 60) + 10;
    }
    else if (desired_time < FLIGHT_7 + (FLIGHT_8 - FLIGHT_7) / 2)
    {
        *departure_time = FLIGHT_7;
        *arrival_time = FLIGHT_7 + (2 * 60) + 20;
    }
    else
    {
        *departure_time = FLIGHT_8;
        *arrival_time = FLIGHT_8 + (2 * 60) + 13;
    }
}