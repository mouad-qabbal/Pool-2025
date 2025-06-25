
int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    char tmp;
    int len;
    int i;

    len = ft_strlen(str) - 1;
    i = 0;
    while(i <= len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;

        i++;
        len--;
    }
    return (str);
}
/*
#include <stdio.h>
int     main()
{
    char str[] = "hello";
    char *ptr = ft_strrev(str);
    printf("%s\n", ptr);
    // Now str == "olleh"
}
*/