#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int i;

	i = 'a';
	while( i <= 'z')
	{
		if(i % 2 == 0)
			ft_putchar(i-32);
		else
			ft_putchar(i);
		
		i++;
	}
	ft_putchar('\n');
}
