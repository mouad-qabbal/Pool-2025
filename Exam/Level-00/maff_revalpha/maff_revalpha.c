#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char alpha;

	alpha = 'z';
	while(alpha >= 'a')
	{
		if(alpha % 2 == 1)
			ft_putchar(alpha - 32);
		else
			ft_putchar(alpha);
		alpha--;
	}
	ft_putchar('\n');
}
