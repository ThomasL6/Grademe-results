/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:06:45 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/21 20:06:46 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int check(int c, char *str, int index)
{
    int i = 0;
    while(i < index)
    {
        if(str[i] == c)
            return(0);
        i++;
    }
    return(1);
}

int main(int arg, char **tab)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if(arg == 3)
    {
        while(tab[1][i])
            i++;
        while(tab[2][j])
        {
            tab[1][i] = tab[2][j];
            i++;
            j++;
        }
        i--;
        while(k <= i)
        {
            if(check(tab[1][k], tab[1], k) == 1)
                write(1, &tab[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
}
