/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nextAlpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:05:09 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/26 10:05:11 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nextAlpha(char *str, int length)
{
	char	*new_str = (char *)malloc(length + 1);
	if (new_str == NULL)
	{
        return;
        }
	
	int	i = 0;
	while (i < length)
	{
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            new_str[i] = (str[i] == 'z') ? 'a' : str[i] + 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            new_str[i] = (str[i] == 'Z') ? 'A' : str[i] + 1;
        }
        else
        {
            new_str[i] = str[i];
        }
        i++;
    }
    new_str[i] = '\0';

    i = 0;
    while (new_str[i] != '\0') 
    {
        putchar(new_str[i]);
        i++;
    }
    free(new_str);
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        return (1);
    }

    int length = strlen(argv[1]);
    nextAlpha(argv[1], length);
    return (0);
}
