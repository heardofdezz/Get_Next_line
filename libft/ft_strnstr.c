/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 15:11:12 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 15:48:18 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	i;
	int		k;
	char	*str;

	i = 0;
	str = 0;
	if (needle[i] == '\0')
		return ((char *)stack);
	while (stack[i] != '\0' && i < len)
	{
		if (stack[i] == needle[0])
		{
			str = (char *)stack + i;
			k = 0;
			while (stack[i + k] == needle[k] && i + k < len)
			{
				if (needle[k + 1] == '\0')
					return (str);
				k++;
			}
			str = 0;
		}
		i++;
	}
	return (NULL);
}
