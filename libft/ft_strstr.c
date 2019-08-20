/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:55:52 by maloua-h          #+#    #+#             */
/*   Updated: 2018/12/24 18:08:52 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			str = (char *)haystack + i;
			k = 0;
			while (haystack[i + k] == needle[k])
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
