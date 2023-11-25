#include <stdio.h>

size_t my_strlen(const char *str)
{
    size_t size;

    for (size = 0; *str != '\0'; ++str)
    {
        ++size;
    }

    return size;
}

// This is not good at code reading
size_t my_strlen2(const char *str)
{
    const char *orig_str = str;

    while (*str)
    {
        ++str;
    }

    return str - orig_str;
}
