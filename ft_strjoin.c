/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:55:45 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/19 13:55:47 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/* calculate the total size of the string, sum up the size of all str in strs
 add the size of all sep, allocate enought memory, copy each string + sep*/
int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	total_length(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		len += (size - 1) * ft_strlen(sep);
	return (len);
}

void	concat_strs(char *res, int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;

	ptr = res;
	i = 0;
	while (i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	*ptr = '\0';
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;

	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res)
			*res = '\0';
		return (res);
	}
	res = (char *)malloc(total_length(size, strs, sep) + 1);
	if (!res)
		return (NULL);
	concat_strs(res, size, strs, sep);
	return (res);
}
/*
int	main(void)
{
	char *strs[] = {"Hello", "World", "42", "School"};
	char *sep = ", ";
	char *result;

	result = ft_strjoin(4, strs, sep);
	if (result)
	{
		printf("%s\n", result); // Expected: "Hello, World, 42, School"
		free(result);
	}

	result = ft_strjoin(0, strs, sep);
	if (result)
	{
		printf("Empty string: '%s'\n", result); // Expected: "Empty string: ''"
		free(result);
	}
	return (0);
}*/
