/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:05:30 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/14 11:05:35 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// strcat function concatenates the src string to the end of the dest string
char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[50] = "Hello, ";
	char *src = "World!";

	printf("Before concatenation: %s\n", dest);
	ft_strcat(dest, src);
	printf("After concatenation: %s\n", dest);

	return (0);
}
*/
