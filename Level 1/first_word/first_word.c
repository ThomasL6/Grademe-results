/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:43:56 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/15 15:43:58 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int arg, char **tab)
{
    int i = 0;
    if(arg == 2)
    {
        while(tab[1][i] == ' ' || tab[1][i] == '\t')
            i++;
        while(tab[1][i] && tab[1][i] != ' ' && tab[1][i] != '\t')
        {
            write(1, &tab[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}