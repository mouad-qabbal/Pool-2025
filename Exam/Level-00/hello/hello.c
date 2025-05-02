#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char *arr = "Hello World!";
	while(*arr)
	{
		ft_putchar(*arr);
		arr++;
	}
	ft_putchar('\n');
}
