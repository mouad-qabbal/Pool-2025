#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    int k;
    int found_in_str2;
    int already_printed;

    if(argc == 3)
    {
        i = 0;
        while(argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                found_in_str2 = 0;
                // Check if argv[1][i] is in argv[2] if is set the variable to 1 (true)
                if(argv[1][i] == argv[2][j])
                {
                    found_in_str2 = 1;
                    break;
                }
                j++;
            }
            // Check if argv[1][i] already appeared before in argv[1] if is set the variable to 1 (false)
            already_printed = 0;
            k = 0;
            while(k < i)
            {
                if(argv[1][k] == argv[1][i])
                    already_printed = 1;
                k++;
            }
            // compore betwhen the tow value of the variable
            // If character is in argv[2] and not already printed, print it
            if(!already_printed && found_in_str2)
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n'); // this work in bouth case after the progam will finish and after the condiont is not valid
}
