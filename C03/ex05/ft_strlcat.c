// Reproduce the behavior of the function strlcat (man strlcat).

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int src_len = ft_strlen(src);
    unsigned int dest_len = ft_strlen(dest);
    unsigned int i = 0;

    if (size == 0 || size <= dest_len )
        return (size + src_len);

    while(src[i] &&  i < size - dest_len - 1 )
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}

// ✅ Step-by-Step Algorithm
// 1-Calculate lengths of dest and src.
// 2-If size is less than or equal to dest_len, return size + src_len.
// 3-Otherwise, calculate how many bytes we can actually copy: size - dest_len - 1.
// 4-Copy from src into dest + dest_len, up to that number.
// 5-Null-terminate dest.
// 6-Return dest_len + src_len.