/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:56:09 by maloua-h          #+#    #+#             */
/*   Updated: 2018/12/24 17:38:27 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (0 < n)
	{
		*str++ = 0;
		n--;
	}
}
