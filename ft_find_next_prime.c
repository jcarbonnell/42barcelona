/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:26:58 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 08:26:59 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// finds the next prime number greater than or equal to a given number
static int	is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!is_prime(nb))
		nb++;
	return (nb);
}
/*
int main(void)
{
    int test = 14;  // Change this number to test different inputs
    int next_prime;

    next_prime = ft_find_next_prime(test);
    write(1, "Next prime: ", 12);
    if (next_prime > 9)
        write(1, &next_prime, 1);  // Simplified digit output for demo
    return (0);
}
*/
