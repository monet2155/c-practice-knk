// Write a program that formats product information entered by the user.
// A session with the program should look like this:
// The item number and date should be left justified;
// the unit price should be right justified.
// Allow dollar amounts up to $9999.99.
// Hint: Use tabs to line up the columns.

#include <stdio.h>

int main(void)
{
    int itemNumber;
    float unitPrice;

    int purchaseYear;
    int purchaseMonth;
    int purchaseDay;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &purchaseMonth, &purchaseDay, &purchaseYear);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");

    // %8.2f is necessary, because allow up to $9999.99 and right justified
    // %.2d is necessary, because if month 1, 2.. make to 01 02
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d", itemNumber, unitPrice, purchaseMonth, purchaseDay, purchaseYear);

    return 0;
}