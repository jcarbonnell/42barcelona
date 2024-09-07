/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:19:16 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 11:19:19 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// strlcat concatenates "size" characters from src to the end of dest
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "world!";
	unsigned int	size = sizeof(dest);

	printf("Before: \"%s\"\n", dest);
	printf("Total length after concatenation: %u\n",
		ft_strlcat(dest, src, size));
	printf("After: \"%s\"\n", dest);

	return (0);
}
*/
