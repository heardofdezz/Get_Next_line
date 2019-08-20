/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 16:33:33 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 15:18:24 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			intlen(int n)
{
	int		i;

	i = 1;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*res;
	unsigned int	c;
	int				i;

	i = intlen(n);
	if (n < 0)
		++i;
	c = (n < 0) ? n * -1 : n;
	res = ft_strnew(i);
	if (res == NULL)
		return (NULL);
	while (i)
	{
		res[i - 1] = (c % 10) + 48;
		c /= 10;
		--i;
	}
	n < 0 ? res[0] = '-' : 0;
	return (res);
}
