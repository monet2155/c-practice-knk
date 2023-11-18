// Write a program that calculates the remainig balance on a loan after the first, second, and third monthly payments:
// Display each balance with two digits after the decimal point.
// Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate.
// To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.

#include <stdio.h>

int main(void)
{
    float amountOfLoan;
    float interestRate;
    float monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &amountOfLoan);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyRate = (interestRate * 0.01f) / 12.0f;

    float balanceAfterFirstPayment = (amountOfLoan - monthlyPayment) + (amountOfLoan * monthlyRate);
    float balanceAfterSecondPayment = (balanceAfterFirstPayment - monthlyPayment) + (balanceAfterFirstPayment * monthlyRate);
    float balanceAfterThirdPayment = (balanceAfterSecondPayment - monthlyPayment) + (balanceAfterSecondPayment * monthlyRate);

    printf("Balance remaining after first payment: %.2f\n", balanceAfterFirstPayment);
    printf("Balance remaining after second payment: %.2f\n", balanceAfterSecondPayment);
    printf("Balance remaining after third payment: %.2f\n", balanceAfterThirdPayment);

    return 0;
}