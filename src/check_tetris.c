/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_teris.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:19:49 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 11:11:14 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			check_tetris(t_tetris *list)
{
	int		count;
	int		link;
	int		x;
	int		y;

	count = 0;
	link = 0;
	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (list->tab[y][x] == '#')
			{
				link += check_link(list->tab, x, y);
				count++;
			}
			if (list->tab[y][x] != '.' && list->tab[y][x] != '#')
				return (0);
		}
	}
	if ((link == 6 || link == 8) && count == 4)
		return (1);
	return (0);
}
