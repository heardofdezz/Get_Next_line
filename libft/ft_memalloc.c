/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 15:42:33 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 15:20:45 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	int			*str;
	size_t		i;

	i = 0;
	str = (int *)malloc(size * sizeof(int));
	if (str == NULL)
		return (NULL);
	while (i < size)
		str[i++] = 0;
	return (str);
}
