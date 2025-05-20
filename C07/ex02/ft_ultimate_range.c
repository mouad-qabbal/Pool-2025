#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *ptr;
    int i;

    if(min >= max)
    {
        *range = NULL;
        return (0);
    }

    ptr = malloc((max - min) * sizeof(int));
    if (ptr == NULL)
        return (-1);

    i = 0;
    while (min < max)
    {
        ptr[i] = min++;
        i++;
    }
    *range = ptr;
    return (i);
}
/*
#include <stdio.h>
int main()
{
    int min = 4;
    int max = 9;
    int *ptr;

    int size = ft_ultimate_range(&ptr, min, max);

    if (size > 0)
    {
        printf("The total size of the array is %d\n", size);

        for (int i = 0; i < size; i++)
        {
            printf("arr[%d] = %d\n", i, ptr[i]);
        }
    }
    else if (size == 0)
    {
        printf("Empty range.\n");
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    free(ptr);
    return 0;
} */
