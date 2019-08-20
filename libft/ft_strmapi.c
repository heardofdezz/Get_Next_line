/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 19:05:22 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 16:58:22 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*res;
	unsigned int	length;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	res = ft_strnew(length);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
