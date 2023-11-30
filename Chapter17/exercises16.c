// Write the following function. The call sum(g, i, j) should return g(i) + ... + g(j).

int sum(int (*f)(int), int start, int end)
{
    int result = 0;
    for (; start <= end; start++)
    {
        result += (*f)(start);
    }

    return result;
}