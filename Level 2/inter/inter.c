/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:40:58 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/30 12:40:59 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int inter(char *str, char c, int len)
{
    int i = 0;
    while(str[i] && (i < len || len == -1))
    {
        if(str[i++] == c)
            return(1);
    }
        return(0);
}

int main(int arg, char **tab)
{
    int i;
    if(arg == 3)
    {
        i = 0;
        while(tab[1][i])
        {
            if(!inter(tab[1], tab[1][i], i) && inter(tab[2], tab[1][i], -1))
                write(1, &tab[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}