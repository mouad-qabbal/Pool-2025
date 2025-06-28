#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c) // a
{
	write(1, &c, 1);
}

void ft_putnbr(int nb) //8
{
    // int                   ====>    -2,147,483,648 to 2,147,483,647
    // unsigned int          ====>     0 to 4,294,967,295
    int u_nb;

    u_nb = nb; // 2147483648
    if(nb < 0) // in here dont use (u_nb) because it is unsigned
    {
        ft_putchar('-');
        // u_nb *= -1;
    }
    // In here dont use the condtion (else if) --> because you make it to choose between tow option the first one and the second one
    // When we use if in the first one and if in the second one we make work for tow
    if(u_nb > 9)
    {
        ft_putnbr(u_nb / 10);
        ft_putnbr(u_nb % 10);
    }
    else
    {
        // printf("%d\n", u_nb);
        ft_putchar(u_nb + '0');
    }
}

int main()
{
    ft_putnbr(-2147483648); // we pass a negative value to ft_putnbr
}
