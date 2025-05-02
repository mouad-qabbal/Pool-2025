#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_repeat_alpha(char c)
{
        int num;
        int i;

        num = 0;
        if(c >= 'a' && c <= 'z' )
                num = c - 'a';
        else if(c >= 'A' && c <= 'Z')
                num = c - 'A';
        i = 1;
        while(i <= num)
        {
                ft_putchar(c);
                i++;
        }
}

int main(int ac, char *av[])
{
        int i;

        if(ac == 2)
        {
                i = 0;
                while(av[1][i])
                {
                        ft_putchar(av[1][i]);
                        ft_repeat_alpha(av[1][i]);
                        i++;
                }
        }
        ft_putchar('\n');
}