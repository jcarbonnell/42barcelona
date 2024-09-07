/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:56:20 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 10:56:23 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// function strncmp compares up to n characters of two strings.
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char *str1 = "Hello";
	char *str2 = "Hellz";
	unsigned int n = 4;

	printf("Comparing \"%s\" and \"%s\" up to %u chars: %d\n",
		str1, str2, n, ft_strncmp(str1, str2, n));

	return (0);
}
*/
