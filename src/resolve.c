/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:29:34 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 11:27:14 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		resolve(t_tetris **list)
{
	char	**map;
	int		size_map;

	size_map = ft_sqrt(tetris_lstsize(*list) * 4);
	if (!(map = create_map(size_map)))
	{
		tetris_lstdel(list);
		failure();
	}
	while (!backtrack(*list, map, size_map))
	{
		remove_map(map);
		size_map++;
		if (!(map = create_map(size_map)))
		{
			tetris_lstdel(list);
			failure();
		}
	}
	put_map(map);
	remove_map(map);
}
