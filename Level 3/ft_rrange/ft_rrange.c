/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:33:16 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/30 10:33:18 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int     *ft_rrange(int start, int end)
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
        if(start < end)
        {
            while(i <= len)
            {
                tab[i] = end;
                end--;
                i++;
            }
        }
        else
        {
            while(i <= len)
            {
                tab[i] = end;
                end++;
                i++;
            }
        }
    }
    return(tab);
}

// int main()
// {
    // int start = 5;
    // int end = 9;
    // int *tab = ft_rrange(start, end);
    // int len = end - start;
    // int i = 0;
    // while(i <= len)
    // {
        // printf("%d", tab[i]);
        // i++;
    // }
// }