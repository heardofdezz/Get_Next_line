/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:00:56 by maloua-h          #+#    #+#             */
/*   Updated: 2019/01/26 20:55:32 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	int				i;
	int				len;
	char			*str;
	char			t;

	t = (char)c;
	str = (char *)s;
	i = 0;
	len = ft_strlen(s);
	while (len)
	{
		len--;
		if (str[len] == t)
			return (str + len);
	}
	if (c == 0)
		return (str + ft_strlen(s));
	return (NULL);
}
