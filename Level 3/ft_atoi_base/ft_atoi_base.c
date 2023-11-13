#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    char *base1 = "0123456789abcdef";
    char *base2 = "0123456789ABCDEF";
    int i = 0;
    int j = 0;
    int nb = 0;
    int mu = 1;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            mu = mu * -1;
        i++;
    }
    while(str[i])
    {
        j = 0;
        while(base1[j] && base2[j])
        {
            if(base1[j] == str[i] || base2[j] == str[i])
                break;
            j++;
        }
        if(!base1[j] || !base2[j])
            break;
        nb = (nb * str_base) + j;
        i++;
    }
    return(nb * mu);
}

// int main()
// {
//     const char *str = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base"; /* = 3308*/
//     int str_base = 16;
//     printf("%d\n", ft_atoi_base(str, str_base));
// }