/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 14:29:47 by maloua-h          #+#    #+#             */
/*   Updated: 2019/03/18 20:26:51 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			get_stat(char **stat, char **line)
{
	char			*tmp;

	if ((tmp = ft_strchr(*stat, '\n')))
	{
		*tmp = '\0';
		*line = ft_strdup(*stat);
		*stat = ft_strcpy(*stat, tmp + 1);
		return (1);
	}
	return (0);
}

static int			get_line(char *buff, char **stat, char **line)
{
	char			*tmp;

	if ((tmp = ft_strchr(buff, '\n')))
	{
		*tmp = '\0';
		*line = ft_strjoin(*stat, buff);
		ft_strdel(stat);
		*stat = ft_strdup(tmp + 1);
		return (1);
	}
	return (0);
}

static int			get_last_line(char **stat, char **line)
{
	*line = *stat;
	*stat = NULL;
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static char		*stat = NULL;
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				reat;

	if (!line || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	if (!stat)
		stat = ft_strnew(0);
	else if (get_stat(&stat, line))
		return (1);
	while ((reat = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[reat] = '\0';
		if (get_line(buff, &stat, line))
			return (1);
		tmp = stat;
		stat = ft_strjoin(tmp, buff);
		ft_strdel(&tmp);
	}
	if (*stat)
		return (get_last_line(&stat, line));
	ft_strdel(&stat);
	return ((reat == -1) ? -1 : 0);
}
