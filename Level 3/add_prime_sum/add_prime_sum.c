/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:43:45 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/22 14:43:46 by thlefebv         ###   ########.fr       */
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
    return(nb * mu);
}

void ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int is_prime(int n)
{
    int i = 2;
    if(n <= 1)
        return(0);
    while(i < n)
    {       
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(int arg, char **tab)
{
    if(arg == 2)
    {
        int sum = 0;
        int n = ft_atoi(tab[1]);
        while(n > 0)
        {
            if(is_prime(n))
                sum = sum + n;
            n--;
        }
        ft_putnbr(sum);
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);
}