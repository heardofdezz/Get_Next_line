/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:46:22 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 15:34:25 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	char			*fresh;
	int				start;
	unsigned int	i;

	if (!s)
		return (NULL);
	fresh = NULL;
	i = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	start = i;
	if (s[start] == '\0')
	{
		fresh = (char *)malloc(1);
		*fresh = '\0';
		return (fresh);
	}
	while (s[i])
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i--;
	if (!(fresh = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (fresh);
}
