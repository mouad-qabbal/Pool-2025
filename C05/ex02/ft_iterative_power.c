
// Create an iterated function that returns the value of a power applied to a number.
// An power lower than 0 returns 0. Overflows must not be handled.
// We’ve decided that 0 power 0 will returns 1

int ft_iterative_power(int nb, int power)
{
    int result;

    if(power < 0)
        return (0);

    result = 1;
    while (power--)
        result *= nb;
    return (result);
}