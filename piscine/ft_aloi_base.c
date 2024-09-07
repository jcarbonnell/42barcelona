/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aloi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:39:55 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 14:40:00 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_whitespace(base[i]))
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

int	get_base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	base_len;
	int	value;

	if (!is_valid_base(base))
		return (0);
	res = 0;
	sign = 1;
	base_len = get_base_len(base);
	while (is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	value = get_base_value(*str, base);
	while (value != -1)
	{
		res = res * base_len + value;
		str++;
		value = get_base_value(*str, base);
	}
	return (res * sign);
}
/*
int	main(void)
{
	char	*str = "   -1E";
	char	*base = "0123456789ABCDEF";

	printf("The number \"%s\" in base \"%s\" is %d\n",
		str, base, ft_atoi_base(str, base));
	return (0);
}
*/
