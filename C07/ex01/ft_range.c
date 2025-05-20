#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *ptr;
    int index;

    if(min >= max)
        return NULL;

    ptr = (int *)malloc((max - min) * sizeof(int));
    if (ptr == NULL)
        return (NULL);

    index = 0;
    while(min < max)
    {
        ptr[index] = min;
        index++;
        min++;
    }
    return (ptr);
}
/*
#include <stdio.h>
int main()
{
    int min = 4;
    int max = 9;
    int res = max - min;
    int *arr = ft_range(min, max);

    int i = 0;
    while (i < res)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);

    // use  [ valgrind ./a.out ] to check if you have memory leaks
}  */