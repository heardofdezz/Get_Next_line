/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 18:24:38 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 16:42:34 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;
	size_t			i;

	i = 0;
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	if (!s)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
