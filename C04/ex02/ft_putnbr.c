// Create a function that displays the number entered as a parameter.
// The function has to be able to display all possible values within an int type variable

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long n;

    n = nb;
    if(n < 0)
    {
        ft_putchar('-');
        n = -n; // // Make the number positive (n = -(-42); // now n is 42)
    }
    if ( n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}