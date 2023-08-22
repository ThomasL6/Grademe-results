/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:43:52 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/21 20:43:54 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void pgcd(int a, int b)
{
    int n = a;
    while(n > 0)
    {
        if(a % n == 0 && b % n == 0)
        {
            printf("%d", n);
            return;
        }
        --n;
    }
}

int main(int arg, char **tab)
{
    if(arg == 3)
        pgcd(atoi(tab[1]), atoi(tab[2]));
    printf("\n");
}