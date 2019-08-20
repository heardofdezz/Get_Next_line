/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 20:52:24 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 15:20:26 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		nega;
	long	resultats;

	i = 0;
	nega = 1;
	resultats = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nega = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (resultats * 10 < 0)
			return ((nega == -1) ? 0 : -1);
		resultats = resultats * 10 + (str[i] - '0');
		i++;
	}
	return (resultats * nega);
}
