// Create a function that returns 1 if the string given as a parameter contains only
//  digits, and 0 if it contains any other character

int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if(*str >= '0' && *str <= '9')
            str++;
        else
            return (0);
    }
    return (1);
}