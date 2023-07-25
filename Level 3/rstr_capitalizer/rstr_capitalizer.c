/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:07:47 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/25 15:07:49 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void capitalizer(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] = str[i] - 32 ;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int arg, char **tab)
{
	int i = 1;
	if(arg == 1)
		write(1, "\n", 1);
	else
	while(i < arg)
	{
		capitalizer(tab[i]);
		i++;
	}
	return(0);
}
