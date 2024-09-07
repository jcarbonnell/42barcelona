/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:13:49 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 11:14:38 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// strstr search the first occurrence of to_find within str
char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;
	char	*start;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s1 = str;
		s2 = to_find;
		start = str;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (start);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char *haystack = "Hello, world!";
	char *needle = "world";
	char *result;

	result = ft_strstr(haystack, needle);
	if (result)
		printf("Found substring: \"%s\"\n", result);
	else
		printf("Substring not found.\n");

	return (0);
}
*/
