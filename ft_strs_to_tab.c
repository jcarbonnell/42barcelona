/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:35:39 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/19 16:35:41 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

// Function to calculate the length of a string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// Function to create a copy of a string
char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// Function to create an array of structures from an array of strings
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
		{
			while (i > 0)
				free(arr[--i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
/*
int	main(int argc, char **argv)
{
	t_stock_str	*array;
	int			i;

	array = ft_strs_to_tab(argc, argv);
	if (!array)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (array[i].str)
	{
		printf("Original: %s\n", array[i].str);
		printf("Copy: %s\n", array[i].copy);
		printf("Size: %d\n\n", array[i].size);
		i++;
	}
	// Free the memory allocated for copies
	i = 0;
	while (i < argc)
	{
		free(array[i].copy);
		i++;
	}
	free(array);
	return (0);
}
*/
