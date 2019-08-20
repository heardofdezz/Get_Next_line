/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 17:48:39 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 16:55:47 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f) (char))
{
	char	*res;
	size_t	length;
	int		i;

	if (s == 0 || f == 0)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	res = ft_strnew(length);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
