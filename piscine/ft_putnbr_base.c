/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:51:55 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 13:51:57 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// write a single character to the terminal.
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Returns the length of the string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// checks if provided base string is valid 
int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// displays a number in a base system
void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	if (!is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
	{
		ft_putnbr_base(nb / base_len, base);
		ft_putnbr_base(nb % base_len, base);
	}
	else
		ft_putchar(base[nb]);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789"); // Decimal base
	ft_putchar('\n');
	ft_putnbr_base(42, "01"); // Binary base
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF"); // Hexadecimal base
	ft_putchar('\n');
	ft_putnbr_base(42, "poneyvif"); // Octal base
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789ABCDEF"); 
	// Hexadecimal base with negative number
	ft_putchar('\n');
	return (0);
}
*/
