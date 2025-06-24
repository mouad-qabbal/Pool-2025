#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
//                         z ,      (z)padinton, 0
int     ft_is_printed(char c, char *str, int index)
{
    int i;

    i = 0;
    while(i < index)
    {
        if(c == str[i])
            return (1); //
        i++;
    }
    return (0); //
}
int     ft_is_in_str1(char c, char *str1)
{
    int i;

    i = 0;
    while (str1[i])
    {
        if(c == str1[i])
            return (1); // yes c is in the strign1
        i++;
    }
    return (0);

}

int     main(int ac,  char *av[])
{
    int i;
    int is_printed;
    int is_in_str1;

    if(ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            is_printed = ft_is_printed(av[1][i], av[1], i); // n , zpadinton, 8
            if(!is_printed) // if (n) is not in the word at return 1
                ft_putchar(av[1][i]);
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            is_in_str1 = ft_is_in_str1(av[2][i], av[1]);
            is_printed = ft_is_printed(av[2][i], av[2], i);
             if(!is_in_str1 && !is_printed)// if the charcter (p) is in the string1
                ft_putchar(av[2][i]);
            i++;
        }

    }
    ft_putchar('\n');
}