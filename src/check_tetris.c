/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_teris.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:19:49 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 04:02:26 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_y_0(char tab[4][4], int x, int y)
{
	if (x == 0 && tab[y + 1][x] == '.' && tab[y][x + 1] == '.')
		return (0);
	else if (x == 3 && tab[y][x - 1] == '.' && tab[y + 1][x] == '.')
		return (0);
	else
	{
		if (tab[y][x - 1] == '.' && tab[y + 1][x] == '.' &&
		tab[y][x + 1] == '.')
			return (0);
	}
	return (1);
}

static int	check_y_3(char tab[4][4], int x, int y)
{
	if (x == 0 && tab[y - 1][x] == '.' && tab[y][x + 1] == '.')
		return (0);
	else if (x == 3 && tab[y - 1][x] == '.' && tab[y][x - 1] == '.')
		return (0);
	else
	{
		if (tab[y - 1][x] == '.' && tab[y][x - 1] == '.' &&
		tab[y][x + 1] == '.')
			return (0);
	}
	return (1);
}

static int	check_y_12(char tab[4][4], int x, int y)
{
	if (x == 0 && tab[y - 1][x] == '.' &&
	tab[y + 1][x] == '.' && tab[y][x + 1] == '.')
		return (0);
	else if (x == 3 && tab[y - 1][x] == '.' &&
	tab[y + 1][x] == '.' && tab[y][x - 1] == '.')
		return (0);
	else
	{
		if (tab[y][x + 1] == '.' && tab[y + 1][x] == '.' &&
		tab[y - 1][x] == '.' && tab[y][x - 1] == '.')
			return (0);
	}
	return (1);
}

static int	check_shape(char tab[4][4])
{
	int		x;
	int		y;
	int		count;

	y = -1;
	count = 0;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (tab[y][x] == '#')
			{
				if (count == 4)
					return (1);
				count++;
				if ((y == 0 && !check_y_0(tab, x, y)) || (y == 3 &&
				!check_y_3(tab, x, y)) || (y > 0 && y < 3 &&
				!check_y_12(tab, x, y)))
					return (0);
			}
		}
	}
	return (1);
}

int			check_tetris(t_tetris *list)
{
	int		row;
	int		span;
	int		count;

	row = 0;
	count = 0;
	while (row < 4)
	{
		span = 0;
		while (span < 4)
		{
			if (list->tab[row][span] == '#')
				count++;
			if (list->tab[row][span] != '.' && list->tab[row][span] != '#')
				return (0);
			span++;
		}
		row++;
	}
	if (count != 4 || !check_shape(list->tab))
		return (0);
	return (1);
}
