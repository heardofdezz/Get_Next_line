/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:43:17 by maloua-h          #+#    #+#             */
/*   Updated: 2018/12/27 19:28:48 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	unsigned int	i;

	a1 = (unsigned char *)src;
	a2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		a2[i] = a1[i];
		i++;
	}
	return (dest);
}
