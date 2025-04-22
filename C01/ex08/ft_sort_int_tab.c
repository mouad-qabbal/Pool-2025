void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *b;
    *b = *a;
    *a = tmp;
}
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int tmp;

    tmp = 0;
    i = 0;
    while (i < size - 1)
    {
        if(tab[i] > tab[i+1])
        {
            ft_swap(&tab[i], &tab[i+1]);
            i = -1;
        }
        i++;
    }
}