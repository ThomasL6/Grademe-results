#include <stdio.h>
#include <stdlib.h>
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n = 0;
    if((a == 0) || (b == 0))
        return(0);
    if(a > n)
        n = a;
    else
        n = b;
    while(1)
    {
        if(n % a == 0 && n % b == 0)
            return(n);
        n++;
    }
}

// int main(int arg, char **tab)
// {
//     unsigned int a = atoi(tab[1]);
//     unsigned int b = atoi(tab[2]);
//     printf("%d\n", lcm(a, b));
// }
