#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
	int i;

	if(ac != 2)
	{
		ft_putchar('z');
	}
	else
	{
		i = 0;
		while(av[1][i])
		{
			if(av[1][i] == 'z')
			{
				ft_putchar(av[1][i]);
				break;
			}
			i++;
		}
		if(av[1][i+1] == '\0')
			ft_putchar('z');
	}
	ft_putchar('\n');
}
