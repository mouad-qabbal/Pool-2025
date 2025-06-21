// In this time we work with function

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_is_char_find(char c, char *str2)
{
    int i;

    i = 0;
    while(str2[i]) // this will check the charcter c over all this string "paqefwtdjetyiytjneytjoeyjnejeyj"
    {
        if(c == str2[i])
            return (1);
        i++;
    }
    return (0);
}
int     ft_is_printed(char c, char *str1, int bound)
{
    int i;

    i = 0;
    while (i < bound)
    {
        if(c == str1[i])
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char *av[])
{
    int i;
    int is_char_find;
    int is_printed;
    // functin for find if the charcter in the string
    if(ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            is_char_find = ft_is_char_find(av[1][i], av[2]);
            is_printed = ft_is_printed(av[1][i], av[1], i);
            if(is_char_find && !is_printed) // if you find the charcter print it
                ft_putchar(av[1][i]);
            // if not skip go to the next charcter
            i++;
        }
    }
    ft_putchar('\n');
}