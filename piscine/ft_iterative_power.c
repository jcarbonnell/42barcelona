/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:25:13 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:25:15 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// calculates the power of a number iteratively
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3)); // Should print 8
	printf("5^0 = %d\n", ft_iterative_power(5, 0)); // Should print 1
	printf("0^0 = %d\n", ft_iterative_power(0, 0)); // Should print 1
	printf("2^-2 = %d\n", ft_iterative_power(2, -2)); // Should print 0
	printf("3^4 = %d\n", ft_iterative_power(3, 4)); // Should print 81
	return (0);
}
*/
