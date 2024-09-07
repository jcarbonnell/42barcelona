/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:26:22 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:26:24 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// give the square root of a number if it is a perfect number, otherwise 0.
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	number;

	number = 16; // You can change this value to test other cases
	printf("The square root of %d is: %d\n", number, ft_sqrt(number));

	number = 15;
	printf("The square root of %d is: %d\n", number, ft_sqrt(number));

	number = -4;
	printf("The square root of %d is: %d\n", number, ft_sqrt(number));

	return (0);
}
*/
