/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:57:42 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/25 14:57:44 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
