/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_link.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:19:49 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 11:10:35 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_y_0(char tab[4][4], int x, int y)
{
	int		count;

	count = 0;
	if (x == 0 && tab[y][x + 1] == '#')
		count++;
	if (x == 0 && tab[y + 1][x] == '#')
		count++;
	if (x == 3 && tab[y][x - 1] == '#')
		count++;
	if (x == 3 && tab[y + 1][x] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y][x + 1] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y][x - 1] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y + 1][x] == '#')
		count++;
	return (count);
}

static int	check_y_3(char tab[4][4], int x, int y)
{
	int		count;

	count = 0;
	if (x == 0 && tab[y][x + 1] == '#')
		count++;
	if (x == 0 && tab[y - 1][x] == '#')
		count++;
	if (x == 3 && tab[y][x - 1] == '#')
		count++;
	if (x == 3 && tab[y - 1][x] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y][x + 1] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y][x - 1] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y - 1][x] == '#')
		count++;
	return (count);
}

static int	check_y_12(char tab[4][4], int x, int y)
{
	int		count;

	count = 0;
	if (x == 0 && tab[y][x + 1] == '#')
		count++;
	if (x == 0 && tab[y + 1][x] == '#')
		count++;
	if (x == 0 && tab[y - 1][x] == '#')
		count++;
	if (x == 3 && tab[y][x - 1] == '#')
		count++;
	if (x == 3 && tab[y + 1][x] == '#')
		count++;
	if (x == 3 && tab[y - 1][x] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y][x + 1] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y][x - 1] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y + 1][x] == '#')
		count++;
	if (x > 0 && x < 3 && tab[y - 1][x] == '#')
		count++;
	return (count);
}

int			check_link(char tab[4][4], int x, int y)
{
	int		ret;

	if (y == 0)
		ret = check_y_0(tab, x, y);
	else if (y == 3)
		ret = check_y_3(tab, x, y);
	else
		ret = check_y_12(tab, x, y);
	return (ret);
}
