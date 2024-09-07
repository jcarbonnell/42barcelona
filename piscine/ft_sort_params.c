/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:10:20 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/15 11:10:22 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// print the given arguments in ascii order
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_sort_args(char **args, int count);

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	ft_sort_args(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_sort_args(char **args, int count)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (args[i][0] > args[j][0])
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}
