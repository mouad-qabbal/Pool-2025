#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int len;
    char *ptr;
    int i;

    len = ft_strlen(src);
    ptr = (char *)malloc( (len + 1) * sizeof(char));

    if (ptr == NULL)
        return (NULL);

    i = 0;
    while (src[i])
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
/*
    2. NULL means "no valid pointer"
        When memory allocation fails, you want to signal that no valid memory was allocated.
        The standard way to do this in C for functions returning pointers is to return NULL.
        NULL is a special pointer value meaning "nothing" or "no valid memory".
*/