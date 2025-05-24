#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str);
int     ft_lens(char **strs, int size);
char *ft_strjoin(int size, char **strs, char *sep);

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
char *ft_strjoin(int size, char **strs, char *sep)
{
    int len_strs = ft_lens(strs, size);
    int len_sep = ft_strlen(sep) * (size - 1); // for how many sep can repate in the new string .
    char *ptr;

    if(size == 0)
    {
        ptr = sizeof(char);
        *ptr = 0;
        return (ptr);
    }
    ptr = malloc(len_strs + len_sep + 1 * sizeof(char *));
    if(ptr == NULL)
        return (NULL);

    int i = 0;
    int p = 0;
    while( i < size)
    {
        int j = 0;
        while(strs[i][j])
        {
            ptr[p] = strs[i][j];
            j++;
            p++;
        }
        j = 0;
        while(sep[j] != (i < size - 1))
        {
                ptr[p] = sep[j];
                p++;
                j++;
        }
        i++;
    }
    ptr[p] = '\0';
    return (ptr);
}
int     ft_strlen(char *str)
{
        int i;

        i = 0;
        while(str[i])
        {
            i++;
        }
            return (i);
}

int     ft_lens(char **strs, int size)
{
        int i;
        int res;

        i = 0;
        res = 0;
        while( i < size )
        {
            res += ft_strlen(strs[i]);
            i++;
        }
        return (res);
}