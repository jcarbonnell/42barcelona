/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:55:01 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/19 13:55:03 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/* return an arr of int from min to max-1. first check validity, then allocate 
memory, then fill the array, and finally return the array.*/
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;

	min = 5;
	max = 10;
	range = ft_range(min, max);
	if (range == NULL)
	{
		return (1);
	}
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
*/
