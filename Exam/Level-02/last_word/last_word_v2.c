#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

int main(int argc, char *argv[])
{
    int len;
    int end;
    int start;

    len = ft_strlen(argv[1]) - 1; // Indexing in C is zero-based, so the last character is at index length - 1.
    if(argc == 2)
    {
        while(len >= 0 && (argv[1][len] == ' ' || argv[1][len] == '\t' ))
            len--;
        end = len; // Now the variable end has the index of the last word
        while (len >= 0 && (argv[1][len] != ' ' && argv[1][len] != '\t' )) // This means: "as long as it’s not a space and not a tab, keep going".
            len--;
        start = len + 1;
        len = 0;
        while (start <= end)
        {
            ft_putchar(argv[1][start]);
            start++;
        }
    }
    ft_putchar('\n');
}