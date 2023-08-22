/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:12:35 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/15 10:12:37 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    int j = 0;
    if(arg == 3)
    {
        while(tab[2][j] && tab[1][i])
        {
            if(tab[2][j] == tab[1][i])
                i++;
            j++;
        }
        if(tab[1][i] == '\0')
            write(1, "1", 1);
        else
                write(1, "0", 1);
    }
    write(1, "\n", 1);
}