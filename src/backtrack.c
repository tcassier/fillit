/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 02:45:33 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 11:03:26 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(t_tetris *list, char **map, int size_map)
{
	int	x;
	int	y;

	if (!list)
		return (1);
	y = -1;
	while (++y <= size_map - list->height)
	{
		x = -1;
		printf("width est %10d height est %10d\n", list->width, list->height);
		while (++x <= size_map - list->width)
		{
			if (check_place(list, map, x, y))
			{
				if (backtrack(list->next, map, size_map))
				{
				put_map(map);
				printf("\n");
					return (1);
				}
					else
				{
					remove_tetris(list, map, x, y);
				}
			}
		}
	}
	return (0);
}
