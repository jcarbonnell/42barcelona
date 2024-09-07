/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:26:38 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:26:40 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// return 0 for not prime numbers, 1 for prime numbers. 
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int main(void)
{
    int num;

    num = 29; // Test with a prime number
    printf("Is %d a prime number? %d\n", num, ft_is_prime(num));
    num = 30; // Test with a non-prime number
    printf("Is %d a prime number? %d\n", num, ft_is_prime(num));
    return (0);
}
*/
