/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:20:10 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 08:28:19 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		**map_point(char **tab, int size_map)
{
	int			x;
	int			y;

	y = 0;
	while (y < size_map)
	{
		x = 0;
		while (x < size_map)
		{
			tab[y][x] = '.';
			x++;
		}
		tab[y][x] = '\0';
		y++;
	}
	tab[y] = NULL;
	return (tab);
}

char			**create_map(int size_map)
{
	char		**map;
	int			index;

	if (!(map = (char**)ft_memalloc(sizeof(char*) * (size_map + 1))))
		return (NULL);
	index = -1;
	while (++index <= size_map)
	{
		if (!(map[index] = (char*)ft_memalloc(sizeof(char) * (size_map + 1))))
			return (NULL);
	}
	return (map_point(map, size_map));
}

void			remove_map(char **tab)
{
	int			index;

	index = 0;
	while (tab[index])
	{
		free(tab[index]);
		index++;
	}
	free(tab);
}
