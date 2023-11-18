// Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
#include <stdio.h>

#define TAX_RATE (0.05f)

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    // This line can be replaced:  printf("With tax added: $%.2f\n", original_amount * 1.05f);
    printf("With tax added: %.2f", amount + (amount * TAX_RATE));

    return 0;
}