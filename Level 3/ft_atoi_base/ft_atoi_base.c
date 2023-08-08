#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    char *base1 = "0123456789abcdef";
    char *base2 = "0123456789ABCDEF";
    int i = 0;
    int k = 0;
    int j = 0;
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
        k = (k * str_base) + j;
        i++;
    }
    k = k * mu;
    return(k);
}

/*int main()
{
    const char *str = "5e";
    int str_base = 16;
    printf("%d", ft_atoi_base(str, str_base));
}*/