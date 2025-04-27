// Create a function that transforms every letter to lowercase.
// It should return str .

char *ft_strlowcase(char *str)
{
    char *start;

    start = str;
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
    return (start);
}