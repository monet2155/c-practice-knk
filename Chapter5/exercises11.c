// The following table shows telephone area codes in the state of Georgia along with the largest city in each area:
// Write a switch statement whose controlling expression is the variable area_code.
// If the value of area_code is in the table, the switch statement will print the corresponding city name.
// Otherwise, the switch statement will display the message "Area code not recognized".
// Use the techniques in Section 5.3 to make the switch statement as simple as possible.

#include <stdio.h>

int main(void)
{
    int area_code;

    printf("Enter area code: ");
    scanf("%d", &area_code);

    switch (area_code)
    {
    case 229:
        printf("Albany");
        break;
    case 404:
    case 470:
    case 678:
    case 770:
        printf("Atlanta");
        break;
    case 478:
        printf("Macon");
        break;
    case 706:
    case 762:
        printf("Columbus");
        break;
    case 912:
        printf("Savannah");
        break;
    default:
        printf("Area code not recognized");
        break;
    }

    return 0;
}