/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:14:45 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/28 11:14:47 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
    int i;
    int len = abs((start - end));
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

/*int main(int arg, char **tab)
{
	(void)arg;
	int	len;
	int	*array;

	len = abs(atoi(tab[2]) - atoi(tab[1]));
	array = ft_range(atoi(tab[1]), atoi(tab[2]));
	int i = 0; 
    while(i <= len)
    {
		printf("%d\n", array[i]);
        i++;
    }
    return (0);
}*/