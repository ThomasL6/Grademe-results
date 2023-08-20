#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int len = abs((start - end)) + 1;
    int *tab = malloc(sizeof(int) * (len + 1));
    if(!tab)
        return(NULL);
    i = 0;
    if(start < end)
    {
        while(start <=end)
        {           
            tab[i] = start;
            start = start + 1;
            i++;
        }
    }
    else
    {
        while(start >= end)
        {
            tab[i] = start;
            start = start - 1;
            i++;
        }
    }
    return(tab);
}

/*#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 5;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/