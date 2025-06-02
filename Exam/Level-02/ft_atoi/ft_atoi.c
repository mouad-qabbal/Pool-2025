#include <stdio.h>
#include <unistd.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10; // to shift it left by one decimal
        result = result + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
 /*
int     main(int ac, char *arr[])
{
    if(ac == 2)
    {
        int res=ft_atoi(arr[ac -1]);
        printf("%d\n", res);
    }
    return (0);
}
*/