#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     is_alpha(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
int     main(int ac, char *av[])
{
    int i;

    if(ac == 2)
    {
        i = 0;
        while(av[1][i])
        {
            if(is_alpha(av[1][i]))
            {
                if ((av[1][i] == 'z') || (av[1][i] == 'Z') )
                    ft_putchar(av[1][i] - 25);
                else
                    ft_putchar(av[1][i] + 1 );
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}