/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:54:23 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/29 15:54:25 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;
    while(++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return(s1[i]);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int wc = 0;
    int k = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if(str[i])
            wc++;
        while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    char **tab = malloc(sizeof(char *) * (wc + 1));
    if(!tab)
        return(NULL);
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if(i > j)
        {
            tab[k] = malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(tab[k++], &str[j], i - j);
        }
    }
    return(tab);
}

int main()
{
    int i = 0;
    char *str = "sff gh fd s";
    char **tab;
    tab = ft_split(str);
    while(tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
}
