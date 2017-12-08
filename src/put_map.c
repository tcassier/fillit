/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 00:54:07 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 03:40:24 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_map(char **map)
{
	int	index;

	index = -1;
	while (map[++index])
	{
		ft_putstr(map[index]);
		ft_putchar('\n');
	}
}
