#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

int main (int ac, char **av)
{
    int i;

    i = 1;
    while(--ac)
        ft_putstr(av[i++]);
}