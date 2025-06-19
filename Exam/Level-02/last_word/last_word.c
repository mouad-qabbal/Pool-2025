#include <unistd.h>

// Write a single character
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Get the length of a string
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

// Find the index of the last letter of the last word
int find_end(char *str)
{
    int i = ft_strlen(str) - 1;

    // Skip trailing spaces/tabs
    while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
        i--;

    return i; // Index of last character in the last word
}

// Find the index of the first letter of the last word
int find_start(char *str)
{
    int i = find_end(str);

    // Move backwards while inside the word
    while (i >= 0 && str[i] != ' ' && str[i] != '\t')
        i--;

    return i + 1; // First character of the last word
}

// Main function to print the last word
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int start = find_start(av[1]);
        int end = find_end(av[1]);

        while (start <= end)
        {
            ft_putchar(av[1][start]);
            start++;
        }
    }
    ft_putchar('\n'); // newline at the end
    return 0;
}
