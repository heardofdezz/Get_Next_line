/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:39:59 by maloua-h          #+#    #+#             */
/*   Updated: 2018/12/27 16:01:01 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	k;
	unsigned int	i;

	k = (unsigned char)c;
	str = (unsigned char *)b;
	i = 0;
	while (len > i)
	{
		str[i] = k;
		i++;
	}
	return (b);
}
