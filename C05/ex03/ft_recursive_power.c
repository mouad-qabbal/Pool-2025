// -- Create a recursive function that returns the value of a power applied to a number.
// -- Overflows must not be handled, the function return will be undefined.
// -- We’ve decided that 0 power 0 will returns 1

int ft_recursive_power(int nb, int power)
{
    if(power < 0)
        return (0);

    if(!power) // Base case
        return (1);
    else // Recursive case
        return (nb * ft_recursive_power(nb, power - 1));
}