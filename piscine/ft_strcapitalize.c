/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:30:27 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/13 10:30:52 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start_of_word;

	i = 0;
	is_start_of_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (is_start_of_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!is_start_of_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			is_start_of_word = 0;
		}
		else
			is_start_of_word = 1;
		i++;
	}
	return (str);
}
