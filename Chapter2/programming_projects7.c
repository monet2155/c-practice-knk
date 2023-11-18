// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that
// amount using the smallest number of $20, $10, $5, and $1 bills:
// Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills.
// Repeat for the other bill sizes. Besure to use integer values throughout, not floating-point numbers.

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twentyDollarBills = amount / 20;
    int tenDollarBills = (amount - (twentyDollarBills * 20)) / 10;
    int fiveDollarBills = (amount - (twentyDollarBills * 20) - (tenDollarBills * 10)) / 5;
    int oneDollarBills = (amount - (twentyDollarBills * 20) - (tenDollarBills * 10) - (fiveDollarBills * 5));

    printf("$20 bills: %d\n", twentyDollarBills);
    printf("$10 bills: %d\n", tenDollarBills);
    printf("$5 bills: %d\n", fiveDollarBills);
    printf("$1 bills: %d\n", oneDollarBills);

    return 0;
}