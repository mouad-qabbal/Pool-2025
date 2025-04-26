// Create a function that returns 1 if the string given as a parameter contains only
// uppercase alphabetical characters, and 0 if it contains any other character.

int ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if(*str >= 'A' && str <= 'Z')
            str++;
        else
            return (0);
    }
    return (1);
}