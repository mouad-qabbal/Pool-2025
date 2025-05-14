#include <unistd.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

void    ft_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = 1;
        while(j < ac - i) // Reduced range on each pass
        {
            if(ft_strcmp(av[i], av[i + 1]) > 0 )
                ft_swap(&av[i], &av[i + 1]);
            j++;
        }
        i++;
    }
    i = 1;
    while(i < ac)
    {
        ft_putstr(av[i]);
        i++;
    }
}