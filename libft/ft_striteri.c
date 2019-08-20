/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 15:32:09 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 16:21:49 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*str;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}
