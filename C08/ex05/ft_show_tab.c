#include <unistd.h>
#include "ft_stock_str.h"

void    ft_putchar(char b)
{
    write(1, &b, 1);
}
void    ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if(nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}
void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while(par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}

/*

int main()
{
    int size = 3;
    char *arr[] = {"aaa", "ccc", "bbb"};

    t_stock_str *result = ft_strs_to_tab(size, arr);
    if(result == NULL)
        return (1);

    ft_show_tab(result);

    int i = 0;
    while (result[i].str)
    {
        free(result[i].copy);
        i++;
    }
    free(result);
}

*/