/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:49:26 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/22 16:49:33 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = -2147483648;
    if(!tab)
        return(0);
    while(len--)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}

// int main()
// {
    // int tab[5] = {10, 25, 20, 4, 45};
    // int len = 5;
    // printf("%d", max(tab, len));
// }