#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_rot13(char c)
{
    if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
    {
        c += 13;
        ft_putchar(c);
    }
    else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
    {
        c -= 13;
        ft_putchar(c);
    }
    else
        ft_putchar(c);
}
int     main(int ac, char *av[])
{
    int i;

    if(ac == 2)
    {
        i = 0;
        while(av[1][i])
        {
            ft_rot13(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}