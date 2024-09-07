/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:56:39 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/19 13:56:43 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/* split a string into an array of strings based on characters used as 
separators. first check if a given character is in the string charset,
then counts how many words are in the input string using characters in charset
 as delimiter */
static int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (is_charset(*str, charset))
		{
			if (in_word)
				in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}

static char	*get_next_word(char **str, char *charset)
{
	char	*start;
	char	*end;
	char	*word;
	int		length;
	int		i;

	while (**str && is_charset(**str, charset))
		(*str)++;
	start = *str;
	while (**str && !is_charset(**str, charset))
		(*str)++;
	end = *str;
	length = end - start;
	word = (char *)malloc(length + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;
	int		i;

	word_count = count_words(str, charset);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		result[i] = get_next_word(&str, charset);
		if (!result[i])
		{
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
int	main(void)
{
	char	str[] = "hello,world,,this,is,a,test";
	char	charset[] = ",";
	char	**result;
	int		i;

	result = ft_split(str, charset);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
