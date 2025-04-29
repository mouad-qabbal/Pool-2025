// Reproduce the behavior of the function strlcpy (man strlcpy)

unsigned int     ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i])
        i++;
    return (i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int length_src = ft_strlen(src);

    if (size == 0)
        return (length_src);
    i = 0;
    while(i <= length_src && i < size)
    {
        dest[i] = src[i];
               i++;
    }
    dest[i] = '\0';

    return (length_src);
}

//  (This is for if the src is less than size) && (don't use (<=) to keep a place free for '\0')
// copy the string pointed by the dst to the string pointed by the dest, ensuring that the destination buffer is not overflowed.
// Return the lenght of the src string

/*
         * if the return vlaue (src length) is
         grater than
         or
         equal to size (size? => because there is no place for '\0')
         the destination buffer was too small to hold the entire source string
    */
