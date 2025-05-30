#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int     ft_strlen(char *arr)
{
    int i;

    i = 0;
    while(arr[i])
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
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *ptr;

    ptr = malloc((ac + 1) * sizeof(t_stock_str));
    if(ptr == NULL)
        return (NULL);

    while(i < ac)
    {
        ptr[i].size = ft_strlen(av[i]);
        ptr[i].str = av[i];
        ptr[i].copy = ft_strdup(av[i]);
        i++;
    }
    ptr[i].str = 0;
    return (ptr);
}

/*
int main(void)
{
    char *arr[] = {"hello", "42", "school"};
    int size = 3;

    t_stock_str *result = ft_strs_to_tab(size, arr);

    if (!result)
    {
        printf("Error: ft_strs_to_tab returned NULL.\n");
        return 1;
    }

    int i = 0;
    while (result[i].str != NULL)
    {
        printf("String %d:\n", i);
        printf("  Length  : %d\n", result[i].size);
        printf("  Original: %s\n", result[i].str);
        printf("  Copy    : %s\n", result[i].copy);
        printf("------------------------------------\n\n");
        i++;
    }

    // Free memory
    i = 0;
    while (result[i].str != NULL)
    {
        free(result[i].copy);
        i++;
    }
    free(result);

    return 0;
}
*/
