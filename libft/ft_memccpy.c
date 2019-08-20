/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:12:17 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 15:31:45 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			tmp;

	tmp = n;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n)
	{
		pdest[tmp - n] = (unsigned char)psrc[tmp - n];
		if (pdest[tmp - n] == (unsigned char)c)
			return ((void *)(pdest + (tmp - n) + 1));
		n--;
	}
	return (0);
}
