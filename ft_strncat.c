/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:09:51 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 11:09:54 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// strncat appends n characters from the src string to the dest string.
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_end;
	unsigned int	i;

	dest_end = dest;
	while (*dest_end != '\0')
		dest_end++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest_end[i] = src[i];
		i++;
	}
	dest_end[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "World!";
	unsigned int nb = 5;

	printf("Before strncat: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("After strncat: %s\n", dest);

	return (0);
}
*/
