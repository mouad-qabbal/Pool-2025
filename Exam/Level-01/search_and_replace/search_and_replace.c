#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_search_and_replace(char *av1, char av2, char av3)
{
        int i;

        i = 0;
        while(av1[i])
        {
                if(av1[i] == av2)
                {
                        av1[i] = av3;
                }
                ft_putchar(av1[i]);
                i++;
        }
}

int     main(int ac, char *av[])
{

        if(ac == 4)
        {
                if(av[2][1] == '\0' && av[3][1] == '\0')
                        ft_search_and_replace(av[1], av[2][0], av[3][0]);
        }
        putchar('\n');
}
