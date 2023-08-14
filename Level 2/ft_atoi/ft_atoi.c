/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:05:25 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/14 13:05:29 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int nb = 0;
    int i = 0;
    int mu = 1;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
            i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            mu = mu * -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    nb = nb * mu;
    return(nb);
}

/*int main()
{
    char *str = " 1655fsdg5";
    printf("%d\n", ft_atoi(str));
    printf("%d", atoi(str));
}*/