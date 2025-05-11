int fib(int x)
{
    if (x < 0)
        return -1;

    if (x == 0)
        return 0;
    if (x == 1)
        return 1;

    int fib[x + 1];
    int i = 2;
    fib[0] = 0;
    fib[1] = 1;

    while (i <= x)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        i++;
    }

    return (fib[x]);
}
