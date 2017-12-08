/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetris.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 02:52:23 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 04:44:28 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	put_tetris(t_tetris *list, char **map, int x, int y)
{
	int		x_tmp;
	int		y_tmp;

	y_tmp = -1;
	while (++y_tmp < 4)
	{
		x_tmp = -1;
		while (++x_tmp < 4)
		{
			if (list->tab[y_tmp][x_tmp] == list->letter)
				map[y_tmp + y][x_tmp + x] = list->letter;
		}
	}
}

int			check_place(t_tetris *list, char **map, int x, int y)
{
	int		x_tmp;
	int		y_tmp;

	y_tmp = -1;
	while (++y_tmp < list->height)
	{
		x_tmp = -1;
		while (++x_tmp < list->width)
		{
			if (map[y_tmp + y][x_tmp + x] != '.' &&
			list->tab[y_tmp][x_tmp] == list->letter)
				return (0);
		}
	}
	put_tetris(list, map, x, y);
	return (1);
}

void		remove_tetris(t_tetris *list, char **map, int x, int y)
{
	int		x_tmp;
	int		y_tmp;

	y_tmp = -1;
	while (++y_tmp < list->height)
	{
		x_tmp = -1;
		while (++x_tmp < list->width)
		{
			if (list->tab[y_tmp][x_tmp] == list->letter)
				map[y_tmp + y][x_tmp + x] = '.';
		}
	}
}
