#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int ac, char **av)
{
    int i;

    i = 0;
    while (av[ac - 1][i])
    {
        ft_putchar(av[ac - 1][i]);
        i++;
    }
    ft_putchar('\n');
}