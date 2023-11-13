#include <stdio.h>

int max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int max;
    if(len == 0)
        return(0);
    max = tab[0];
    while(i <= len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}

// int main()
// {
//     int tab[5] = {1, -654, 5, 12, 8};
//     unsigned int len = 5;
//     printf("%d", max(tab, len));
// }