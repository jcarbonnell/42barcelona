/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:54:38 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/19 13:54:40 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* create a copy of a string by duplicating the original, after calculating the
 length of the input string, allocating memory to hold the copy, and copy it
 iteratively using a while loop.*/
char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main(void)
{
	char *str = "Hello, World!";
	char *copy;

	copy = ft_strdup(str);
	if (copy)
	{
		// Print the duplicated string
		while (*copy)
		{
			write(1, copy, 1);
			copy++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
*/
