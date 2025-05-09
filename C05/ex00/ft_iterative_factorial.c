
/*
 --- Create an iterated function that returns a number. This number is the result of a
 --- factorial operation based on the number given as a parameter.
 --- If the argument is not valid the function should return 0.
 --- Overflows must not be handled, the function return will be undefined.
*/

int ft_iterative_factorial(int nb)
{
    int result;

    if(nb < 0)
        return (0);
    result = 1;
    while (nb > 0)
        result *= nb--;
    return (result);
}