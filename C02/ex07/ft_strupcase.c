// Create a function that transforms every letter to uppercase.
// It should return str.

char *ft_strupcase(char *str)
{
    char *star;

    star = str;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }

    return (star);
}