/*
    Create a function that displays a string of characters onscreen. If this string contains
    characters that aren’t printable, they’ll have to be displayed in the shape of
    hexadecimals (lowercase), preceeded by a "backslash".

    -------------------------------------
    For example:
    --> Coucou\ntu vas bien ?

    The function should display :
    --> Coucou\0atu vas bien ?
*/

//#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     ft_isprintable(char c)
{
    if(c >= 32 && c <= 126)
        return (1);
    return (0);
}
void    ft_puthex(char n)
{
    char *arr;

    arr = "0123456789abcdef";
    ft_putchar(arr[n / 16]);
    ft_putchar(arr[n % 16]);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (ft_isprintable(str[i]))
        {
            ft_putchar(str[i]);
        }
        else
        {
            ft_putchar('\\');
            ft_puthex(str[i]);// here convert [  (desimal charcter) ----> (hexadisimal charcter)  ]
        }
        i++;
    }
}
/*
int main()
{
    char arr[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(arr);
}
*/