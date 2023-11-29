
#include <stdio.h>
// Modify Programming Project 7 from Chapter 2 so that it includes the following function:
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

/**
 * The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay
 * the amount represented by the dollars parameter.
 * The twenties parameter points to a variable in which the function will store the number of $20 bills required.
 * The tens, fives, and ones parameters are similar.
 */

int main(void)
{
    int amount;

    int twentyDollarBills;
    int tenDollarBills;
    int fiveDollarBills;
    int oneDollarBills;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &twentyDollarBills, &tenDollarBills, &fiveDollarBills, &oneDollarBills);

    printf("$20 bills: %d\n", twentyDollarBills);
    printf("$10 bills: %d\n", tenDollarBills);
    printf("$5 bills: %d\n", fiveDollarBills);
    printf("$1 bills: %d\n", oneDollarBills);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars - (*twenties * 20)) / 10;
    *fives = (dollars - (*twenties * 20) - (*tens * 10)) / 5;
    *ones = (dollars - (*twenties * 20) - (*tens * 10) - (*fives * 5));
}