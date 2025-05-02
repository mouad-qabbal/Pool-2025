#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstring(char arr[])
{
	int i;

	i = 0;
	while(arr[i] != '\0')
	{
		ft_putchar(arr[i]);
		i++;
	}
}

int main(int ac, char *av[])
{
	if(ac > 1)
		ft_putstring(av[ac - 1]);
	ft_putchar('\n');
}
