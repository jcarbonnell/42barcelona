/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:24:47 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:24:49 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// calculate the factorial of a given number in a recursive way
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int num;
	int result;

	num = 5; // You can change this value to test different inputs
	result = ft_recursive_factorial(num);
	printf("Factorial of %d is %d\n", num, result);
	return (0);
}
*/
