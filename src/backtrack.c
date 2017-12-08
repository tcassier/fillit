/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 02:45:33 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 04:38:13 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(t_tetris *list, char **map, int size_map)
{
	int	x;
	int	y;

	y = 0;
	while (y + list->height <= size_map)
	{
		x = 0;
		while (x + list->width <= size_map)
		{
			if (check_place(list, map, x, y))
			{
				if (!list->next || backtrack(list->next, map, size_map))
					return (1);
				else
					remove_tetris(list, map, x, y);
			}
			x++;
		}
		y++;
	}
	return (0);
}
