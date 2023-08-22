/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:09:00 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/22 20:09:02 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *tab;

    tab = (char *)malloc(sizeof(char) * (i + 1));
    if(!tab)
        return(NULL);
    i = 0;
    while(src[i])
    {
        tab[i] = src[i];
        i++;
    }
    tab[i] = src[i];
    return(tab);
}