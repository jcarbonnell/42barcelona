/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:46:19 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 10:48:02 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// strcmp function compares two strings lexicographically.
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* 
int	main(void)
{
	char *str1 = "Apple";
	char *str2 = "Banana";

	printf("Comparing \"%s\" and \"%s\": %d\n", 
		str1, str2, ft_strcmp(str1, str2));
	printf("Comparing \"%s\" and \"%s\": %d\n", 
		str2, str1, ft_strcmp(str2, str1));
	printf("Comparing \"%s\" and \"%s\": %d\n", 
		str1, str1, ft_strcmp(str1, str1));

	return 0;
}
*/
