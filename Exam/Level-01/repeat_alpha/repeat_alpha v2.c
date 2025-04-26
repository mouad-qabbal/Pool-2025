#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int main(int ac, char *av[])
{
        int i;
        int j;
        int count = 0;

        if(ac != 2)
                ft_putchar('\n');
        else
        {
                i = -1;
                while(av[1][++i])
                {
                       if(av[1][i] >= 'a' && av[1][i] <= 'z' )
                                count = av[1][i] - 'a';
                       else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                                count = av[1][i] - 'A';
                        else
                        {
                                ft_putchar(av[1][i]);
                                continue;
                        }

                        j = -1;
                        while(++j <= count)
                                ft_putchar(av[1][i]);
                }
                ft_putchar('\n');
        }
        return (0);
}