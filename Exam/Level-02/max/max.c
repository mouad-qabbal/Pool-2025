
int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int max;

    if(!len)
        return(0);

    max = tab[0];
    i = 1;
    while (i < len)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}
/*
#include <stdio.h>
int main()
{
    unsigned len = 6;
    int tab[] = {1, 2, 9, 3, 5 ,6 };

    int result = max(tab, len);
    printf("The largest nunber in the array is : %d\n", result);
}
*/