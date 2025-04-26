#include <unistd.h>
// repeat_alpha with function

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_repeat(char c)
{
        char a = 'a';
        char A = 'A';
        int n = 0;
        int i;

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        {
                if(c >= 'a' && c <= 'z')
                        n = c - a + 1;
                else
                        n = c - A + 1;
                i = 0;
                while(i < n)
                {
                        ft_putchar(c);
                        i++;

                }
        }
}

char *ft_putstr(char str[])
{
        int i = 0;
        while(str[i])
        {
                ft_repeat(str[i]);
                i++;
        }
        return (str);
}

int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                ft_putchar('\n');
        }
        else
        {
                ft_putstr(argv[argc - 1]);
                ft_putchar('\n');
        }
}