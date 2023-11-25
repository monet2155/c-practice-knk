char *my_strcat(char *destination, const char *source)
{
    char *ptr = destination;
    while (*ptr != '\0')
    {
        ++ptr;
    }

    while (*source != '\0')
    {
        *ptr = *source;
        ptr++;
        source++;
    }

    *ptr = '\0';
    return destination;
}

// new version
char *my_strcat2(char *destination, const char *source)
{
    char *ptr = destination;

    while (*ptr)
    {
        ++ptr;
    }
    while (*ptr++ = *source++)
    {
    }
    return destination;
}