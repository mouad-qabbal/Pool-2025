#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void     wdmatch(char *str2, char *str1)
{
    int i1;
    int i2;

    i1 = 0;
    i2 = 0;
    while (str1[i1] && str2[i2])
    {
        if(str1[i1] == str2[i2] )
            i1++;
        i2++;
    }
    if(str1[i1] == '\0')
    {
        ft_putstr(str1);
    }
}
int     main(int ac, char *av[])
{
    if (ac == 3)
    {
        wdmatch(av[2], av[1]);
    }
    write(1, "\n", 1);
}