/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:20:14 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 02:09:56 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetris	*tetris_lstnew(int fd)
{
	t_tetris	*tmp;
	char		buffer[5];
	int			index;

	tmp = NULL;
	index = 0;
	if (!(tmp = (t_tetris*)malloc(sizeof(t_tetris))))
		return (NULL);
	tmp->next = NULL;
	while (index < 4)
	{
		if (!read(fd, buffer, 5) || buffer[4] != '\n')
		{
			free(tmp);
			return (NULL);
		}
		ft_strncpy(tmp->tab[index++], buffer, 4);
	}
	if (!check_tetris(tmp))
	{
		free(tmp);
		return (NULL);
	}
	return (tmp);
}

static int		parser(t_tetris **list, int fd)
{
	t_tetris	*tmp;
	char		buffer[5];
	int			index;

	index = 0;
	while (index < 26)
	{
		if (!(tmp = tetris_lstnew(fd)))
		{
			tetris_lstdel(list);
			return (0);
		}
		if (!index)
			*list = tmp;
		else
			tetris_lstadd_back(*list, tmp);
		if (!read(fd, buffer, 1))
			return (1);
		if (buffer[0] != '\n')
			return (0);
		index++;
	}
	return (0);
}

t_tetris		*reader(char *file)
{
	int			fd;
	t_tetris	*list;

	list = NULL;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	if (!parser(&list, fd))
	{
		close(fd);
		tetris_lstdel(&list);
		return (NULL);
	}
	close(fd);
	put_lst(list);
	return (list);
}
