#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    int len;
    char *ptr;

    len = ft_strlen(src);
    ptr = malloc((len + 1) * sizeof(char));
    if(ptr == NULL)
        return (NULL);

    i = 0;
    while(src[i])
    {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
/*
#include <stdio.h>
int main()
{
    char *arr = "Hamza";
    printf("Befor ft_strdup: %s\n", arr);
    char *res = ft_strdup(arr);
    printf("After ft_strdup: %s\n", res);
    free(res);
}
*/