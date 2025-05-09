//  -- Create a recursive function that returns the factorial of the number given as a parameter
//  -- If the argument is not valid the function should return 0.
//  -- Overflows must not be handled, the function return will be undefined.

int ft_recursive_factorial(int nb)
{
    if(nb == 0) // Base case
        return (1);
    else // Recursive case
        return(nb * ft_recursive_factorial(nb - 1));
}