#include <stdlib.h>
#include <stdio.h>
int *ft_range(int start, int end)
{
    int len;
    if(start > end)
        len = ((start - end) + 1);
    else
        len = ((end - start) + 1);
    int i = 0;
    int *tab = malloc(sizeof(int) * (len + 1));
    if(!tab)
        return(NULL);
    if(tab)
    {
        if(start >= end)
        {
            while(i < len)
            {
                tab[i] = start;
                start--;
                i++;
            }
            }
        else
        {
            while(i < len)
            {
                tab[i] = start;
                start++;
                i++;
            }
        }
    }
    return(tab);
}

// int main()
// {
//     int start = 0;
//     int end = -3;
//     int i = 0;
//     int *tab = ft_range(start, end);
//     int len = start - end + 1;
//     while(i < len)
//     {
//         printf("%d, ", tab[i]);
//         i++;
//     }
// }

