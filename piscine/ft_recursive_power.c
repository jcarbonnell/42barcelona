/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:25:40 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:25:42 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// returns the value of a power applied to a number. < 0 == 0. 0^0 ==1.
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 5;
	power = 0;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 0;
	power = 0;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	nb = 2;
	power = -3;
	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}
*/
