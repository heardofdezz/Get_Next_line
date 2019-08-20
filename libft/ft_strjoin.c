/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 15:50:01 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/26 18:41:48 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		length;

	if ((!s1) && (!s2))
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	res = ft_strnew(length);
	if (res == NULL)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcpy(res + ft_strlen(s1), s2);
	return (res);
}
