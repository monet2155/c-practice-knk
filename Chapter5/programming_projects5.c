// In one state, single residents are subject to the following income tax:

// Write a program that asks the user to enter the amount of taxable income, then displays the tax due.

#include <stdio.h>

int main(void)
{
    float income;
    float tax;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    if (income <= 750.0f)
    {
        tax = income * 0.01f;
    }
    else if (income <= 2250.0f)
    {
        tax = 7.5f + ((income - 750) * 0.02f);
    }
    else if (income <= 3750.0f)
    {
        tax = 37.5 + ((income - 2250) * 0.03f);
    }
    else if (income <= 5250.0f)
    {
        tax = 82.5f + ((income - 3750) * 0.04f);
    }
    else if (income <= 7000.0f)
    {
        tax = 142.5f + ((income - 5250) * 0.05f);
    }
    else
    {
        tax = 230.0f + ((income - 7000) * 0.06f);
    }

    printf("The tax due is %.2f", tax);

    return 0;
}