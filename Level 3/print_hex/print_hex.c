/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:27:28 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/15 14:27:30 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int nb = 0;
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

void    print_hex(int n)
{
    char *base = "0123456789abcdef";
    if(n >= 16)
        print_hex(n / 16);
    write(1, &base[n % 16], 1);
}
    
int main(int arg, char **tab)
{
    if(arg == 2)
        print_hex(ft_atoi(tab[1]));
    write(1, "\n", 1);
}