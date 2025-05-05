// Reproduce the behavior of the function strstr (man strstr)

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (*to_find == '\0')
        return (str);
    i = 0;
    while(str[i])
    {
        j = 0;
        while(to_find[j] && (str[i + j] == to_find[j]))
            j++;
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (NULL);
}

// -- If needle is an empty string, the function returns haystack.
// -- Returns a pointer to the first occurrence of needle in haystack.
// -- Returns NULL if needle is not found.
