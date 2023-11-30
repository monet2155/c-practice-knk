/**
 * Write a function named duplicate that uses dynamic storage allocation to create a copy
 * of a string. For example, the call
 * p = duplicate(str);
 * would allocate space for a string of the same length as str, copy the contents of
 * str into the new string, and return a pointer to it.
 * Have duplicate return a null pointer if the memory allocation fails.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *str);

int main(void)
{
    char *origin_string = "test";

    char *copied_string = duplicate(origin_string);

    if (copied_string == NULL)
    {
        printf("NULL POINTER");
        return 0;
    }

    printf("Original string %s\n", origin_string);
    printf("Copied string %s\n", copied_string);
    return 0;
}

char *duplicate(const char *s)
{
    char *temp = malloc(strlen(s) + 1);

    if (temp == NULL)
        return NULL;

    strcpy(temp, s);
    return temp;
}
