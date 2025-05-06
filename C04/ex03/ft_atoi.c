int    is_space(char c)
{
    if(c == ' ' || (c >= 9 && c <= 13))
        return (1);
    return (0);
}
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (is_space(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
                sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10 ) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

/*
int main()
{
	char    *s = "    ---+--+1234ab567";

	printf("%d\n",ft_atoi(s));
}
*/