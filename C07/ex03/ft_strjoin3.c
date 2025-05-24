#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*allocate_str(int size, char **strs, char *sep);
char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
    int size = 4;
    char *arr[] = {"aaa", "bbb", "ccc", "ddd"};
    char *sep = "---";
    char **strs = arr;

    char *res = ft_strjoin(size, strs, sep);
    printf("%s\n", res);
    free(res);
}
int	ft_strlen(char *str)
{
        int	i;

        i = 0;
        while (str[i])
            i++;
        return (i);
}
char	*allocate_str(int size, char **strs, char *sep)
{
    char *ptr;
    int  len_strs;
    int  len_sep;
    int i;

    len_strs = 0;
    len_sep = ft_strlen(sep) * (size - 1);

    if(size == 0)
    {
        ptr = malloc(sizeof(char));
        if(!ptr)
            return(NULL);
        *ptr = '\0';
        return (ptr);
    }
    i = 0;
    while( i < size)
    {
        len_strs += ft_strlen(strs[i]);
        i++;
    }
    ptr = malloc(sizeof(char) * (len_sep + len_strs));
    return (ptr);
}
char	*ft_strcat(char *dest, char *src)
{
        int	i;
        int	j;

        i = 0;
        j = 0;
        if (!dest || !src)
            return (dest);
        while (dest[i])
            i++;
        while (src[j])
        {
            dest[i + j] = src[j];
            j++;
        }
        dest[i + j] = '\0';
        return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
    char *ptr;
    int i;

    ptr = allocate_str(size, strs, sep);
    i = 0;
    while(i < size)
    {
        ft_strcat(ptr, strs[i]);
        if(i < size - 1)
        {
            ft_strcat(ptr, sep);
        }
        i++;
    }
    return (ptr);
}