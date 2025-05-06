// Create a function that displays a string of characters on the standard output

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}