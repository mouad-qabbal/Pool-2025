#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(char c)
{
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		return (1);
	return (0);

}

void	ft_ulstr(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		c -= 32;
		ft_putchar(c);
	}
	else
	{
		c += 32;
		ft_putchar(c);
	}
}

int main(int ac, char *av[])
{
	int i;
	
	if(ac == 2)
	{
		i = 0;
		while(av[1][i])
		{
			if(ft_isalpha(av[1][i]))
			{
				ft_ulstr(av[1][i]);
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
