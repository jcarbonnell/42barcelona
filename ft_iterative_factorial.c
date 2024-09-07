/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:24:23 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:24:25 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// calculates the factorial of a given number nb using an iterative approach
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int main(void)
{
    int num;
    int result;

    num = 4; 
    result = ft_iterative_factorial(num);
    printf("Factorial of %d is %d\n", num, result);

    return (0);
}
*/
