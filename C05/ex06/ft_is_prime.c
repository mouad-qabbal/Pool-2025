
// Prime numbers are the numbers that are divisible only by 1 and the numbers itself
// The number 2 is the only even number
// The number 1 is not prime number

// ********************************************

// return 1 if the number is prime number
// return 0 if the number is not prime number

// ********************************************

int ft_is_prime(int nb)
{
    int i;

    if( nb < 2 )
        return (0);
    i = 2;
    while( i < nb)
    {
        if(nb % i  == 0)
            return (0);
        i++;
    }
    return (1);
}
