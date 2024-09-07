/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:38:21 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/13 10:39:13 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	put_hex(int value)
{
	char	hex_digits[16];

	hex_digits[0] = '0';
	hex_digits[1] = '1';
	hex_digits[2] = '2';
	hex_digits[3] = '3';
	hex_digits[4] = '4';
	hex_digits[5] = '5';
	hex_digits[6] = '6';
	hex_digits[7] = '7';
	hex_digits[8] = '8';
	hex_digits[9] = '9';
	hex_digits[10] = 'a';
	hex_digits[11] = 'b';
	hex_digits[12] = 'c';
	hex_digits[13] = 'd';
	hex_digits[14] = 'e';
	hex_digits[15] = 'f';
	write(1, "\\", 1);
	write(1, &hex_digits[value / 16], 1);
	write(1, &hex_digits[value % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		c = (unsigned char)*str;
		if (c < 32 || c == 127)
			put_hex(c);
		else
			write(1, &c, 1);
		str++;
	}
}
