// Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
// lphanumeric characters

// A word is a string of (alpha)(num)eric characters.

// It should return str.

int is_alpha(char c)
{
    if(c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

char	*ft_strcapitalize(char *str)
{
    int i;

    if (is_alpha(str[0]))
        str[0] = str[0] - 32;
    i = 1;
    while(str[i])
    {
        if(str[i - 1]  <= 47 && is_alpha(str[i]))
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}