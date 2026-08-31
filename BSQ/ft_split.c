/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler bsandler@student.42vienna.c>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:44:02 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/31 16:01:42 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_separator(char current, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == current)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	word_length(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*copy_word(char *str, int length)
{
	char	*word;
	int		k;

	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	k = 0;
	while (k < length)
	{
		word[k] = str[k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		length;
	char	**stringset;

	stringset = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (stringset == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			length = word_length(str + i, charset);
			stringset[j] = copy_word(str + i, length);
			j++;
			i = i + length;
		}
	}
	stringset[j] = NULL;
	return (stringset);
}

/*
int	main(void)
{
	char	**stringset;
	char	*str = "This is.a sencence,that will be,split up.into,.smaller,strings.or might, not   lets.....see";
	char	*sep = " .,";
	int	i;

	stringset = ft_split(str, sep);
	i = 0;
	while (stringset[i] != NULL)
	{
		printf("%s\n", stringset[i]);
		i++;
	}
}
*/
