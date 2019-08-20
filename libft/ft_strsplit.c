/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 17:49:56 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 17:13:38 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*word_builder(char const *str, char c, unsigned int *index)
{
	unsigned int	i;
	unsigned int	start;
	char			*word;

	while (str[*index] == c && str[*index] != '\0')
		(*index)++;
	start = *index;
	while (str[*index] != c && str[*index] != '\0')
		(*index)++;
	word = ft_strnew(*index - start);
	if (!word)
		return (NULL);
	i = 0;
	while (start < *index)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	words;
	char			**rtn;

	if (!s)
		return (NULL);
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	i = 0;
	j = 0;
	rtn = (char**)malloc(sizeof(char*) * (words + 1));
	if (!rtn)
		return (NULL);
	while (i < words)
		rtn[i++] = word_builder(s, c, &j);
	rtn[i] = 0;
	return (rtn);
}
