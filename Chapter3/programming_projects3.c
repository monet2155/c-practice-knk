// Books are identified by an International Standard Book Number (ISBN).
// ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3.
// (Older ISBNs use 10 digits.)

// The first group (the GS1 prefix) is currently either 978 or 979.
// The group identifier specifies the language or country of origin (for example, 0 and 1 are used in English-speaking countries).
// The publisher code identifies the publisher (393 is the code for W. W. Norton).
// The item number is assigned by the publisher to identify a specific book (97950 is the code).
// An ISBN ends with a check digit that's used to verify the accracy of the precedimg digits.
// Write a program that breaks down an ISBN entered by the user:

// Note: The number of digits in each group may vary;
// you can't assyme that groups have the lengths shown in this example.
// Test your program with actual ISBN values (usually found on the back cover of a book and on the copyright page).

#include <stdio.h>

int main(void)
{
    int gs1Prefix;
    int groupIdentifier;
    int publisherCode;
    int itemNumber;
    int checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\n", gs1Prefix);
    printf("Group Identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}