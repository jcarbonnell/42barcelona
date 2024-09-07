/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:55:24 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/19 13:55:26 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// calculate the size of max-min, allocate memory of value min to max-1. 
// return the size of the array, and assign the array by reference. 
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}
/*
int main(void)
{
    int *range;
    int size;
    int i;
    int min = 5;
    int max = 10;

    size = ft_ultimate_range(
        &range, min, max);

    if (size == -1)
    {
        return (1);
    }
    i = 0;
    while (i < size)
    {
        printf("%d ", range[i]);
        i++;
    }
    free(range);
    return (0);
}
*/
