void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *b;
    *b = *a;
    *a = tmp;
}
void ft_rev_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    while(i < size)
    {
        ft_swap(&tab[i], &tab[size-1]);
        i++;
        size--;
    }
}