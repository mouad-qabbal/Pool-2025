#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac, char *av[])
{
    int i;


    if(ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i]  <= 'z')
            {
                ft_putchar('z' - (av[1][i] - 'a'));
            }
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                ft_putchar('Z' - (av[1][i] - 'A'));
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }

    }
    ft_putchar('\n');
}