/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 02:45:33 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 06:04:34 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(t_tetris *list, char **map, int size_map)
{
	int	ret;
	int	x;
	int	y;

	if (!list)
		return (1);
	y = -1;
	ret = 1;
	while (++y + list->height <= size_map)
	{
		x = -1;
		while (++x + list->width <= size_map)
		{
			if (check_place(list, map, x, y) &&
			(ret = backtrack(list->next, map, size_map) == 1))
					return (1);
			if (!ret)
				remove_tetris(list, map, x, y);
		}
	}
	return (0);
}
