#include <stdio.h>
#include <stdlib.h>
int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return(0);
    while(n > 1)
    {
        if(n % 2 == 0)
            n = n / 2;
        else
            return(0);
    }
    return(1);
}

// int main(int arg, char **tab)
// {
//     if(arg == 2)
//         printf("%d", is_power_of_2(atoi(tab[1])));
// }