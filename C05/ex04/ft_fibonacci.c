// Create a function ft_fibonacci that returns the n-th element of the Fibonacci sequence,
// the first element being at the 0 index. We’ll consider that the Fibonacci
// sequence starts like this: 0, 1, 1, 2.
// Overflows must not be handled, the function return will be undefined

// If the index is less than 0, the function should return -1.

int ft_fibonacci(int index)
{
    if(index < 0) // error case
        return (-1);
    if(index < 2) // base case
        return (index);
    else // recurcive case
        return (ft_fibonacci(index - 1) +  ft_fibonacci(index - 2));
}