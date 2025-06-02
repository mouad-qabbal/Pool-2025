// Create a function that counts and returns the number of characters in a string.

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}