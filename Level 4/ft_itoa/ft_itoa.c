#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    if(nbr == -2147483648)
        return("-2147483648");
    int len = 0;
    int n = nbr;
    if(nbr <= 0)\
        len++;
    while(n)
    {
        n = n / 10;
        len++;
    }
    char *result = malloc(sizeof(char) * (len + 1));
    if(!result)
        return(NULL);
    if(nbr == 0)
    {
        result[0] = '0';
        return(result);
    }
    if(nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return(result);
}

/*int main()
{
    int str = 16;
    printf("%s", ft_itoa(str));
}*/