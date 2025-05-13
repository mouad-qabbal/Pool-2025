#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb < 2)
    {
        printf("%d is less than 2, so it is not a prime number.\n", nb);
        return (0);
    }

    i = 2;
    while (i < nb)
    {
        printf("Checking: %d %% %d = %d\n", nb, i, nb % i);
        if (nb % i == 0)
        {
            printf("%d is divisible by %d, so it is not a prime number.\n", nb, i);
            return (0);
        }
        i++;
    }

    printf("%d is a prime number.\n", nb);
    return (1);
}

int main()
{
    ft_is_prime(7);   // should be prime
    ft_is_prime(9);   // not prime
    ft_is_prime(2);   // prime
    ft_is_prime(1);   // not prime
    return 0;
}