#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    // int                   ====>    -2,147,483,648 to 2,147,483,647
    // unsigned int          ====>     0 to 4,294,967,295
    unsigned int u_nb;

    u_nb = nb;
    if(nb < 0) // in here dont use (u_nb) because it is unsigned
    {
        ft_putchar('-');
        u_nb *= -1;
    }
    // In here dont use the condtion (else if) --> because you make it to choose between tow option the first one and the second one
    // When we use if in the first one and if in the second one we make work for tow
    if(u_nb > 9)
    {
        ft_putnbr(u_nb / 10);
        ft_putnbr(u_nb % 10);
    }
    else
        ft_putchar(u_nb + '0');
}

/*
int main()
{
    ft_putnbr(-11); // we pass a negative value to ft_putnbr
}
*/