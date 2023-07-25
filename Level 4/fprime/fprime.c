/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:22:59 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/25 16:23:01 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}

void fprime(char *str)
{
	int n;
	int factor;
	int first;
	n = atoi(str);
	factor = 2;
	first = 1;
	if(n == 1)
		printf("1");
	while(factor <= n)
	{
		if(n % factor == 0 && is_prime(factor))
		{
			if(first == 1)
				printf("%d", factor);
			else
				printf("*%d", factor);
			first = 0;
			n = n / factor;
		}
		else
			factor++;
	}
}

int main(int arg, char **tab)
{
	if(arg == 2)
		fprime(tab[1]);
	printf("\n");
	return(0);
}
