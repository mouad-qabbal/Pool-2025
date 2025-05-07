#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}
void    ft_putnbr(int nb)
{
    long int n;

    n = nb;
    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if(n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            ft_putstr("fizzbuzz");
        else if(i % 3 == 0)
            ft_putstr("fizz");
        else if(i % 5 == 0)
            ft_putstr("buzz");
        else
            ft_putnbr(i);
        ft_putchar('\n');
        i++;
    }
}