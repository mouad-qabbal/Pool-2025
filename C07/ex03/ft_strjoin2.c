#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
    char *ptr;
    int i;
    int j;
    int p;

    ptr = allocate_str(size, strs, sep);
    p = 0;
    i = 0;
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            ptr[p] = strs[i][j];
            j++;
            p++;
        }
        j = 0;
        while(sep[j] && ( i < size - 1))
        {
            ptr[p] = sep[j];
            j++;
            p++;
        }
        i++;
    }
    return (ptr);
}