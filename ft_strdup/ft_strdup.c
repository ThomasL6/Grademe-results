#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *tab;
    tab = (char *)malloc(sizeof(char) * (i + 1))
    if(!tab)
        return(NULL);
    while(src[i])
    {
        src[i] = tab [i];
        i++;
    }
    return(tab);
}