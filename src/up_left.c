/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 02:25:43 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 09:13:12 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	height_dotted(char tab[4][4])
{
	int		index;

	index = 0;
	while (index < 4 && tab[index][0] == '.')
		index++;
	return (index);
}

void		up_left(char tab[4][4])
{
	int		index;

	if (height_dotted(tab) == 4)
	{
		index = -1;
		while (++index < 4)
			ft_strncpy(tab[index], &(tab[index][1]), 3);
		index = -1;
		while (++index < 4)
			tab[index][3] = '.';
		up_left(tab);
	}
	if (!ft_strncmp(tab[0], "....", 4))
	{
		index = -1;
		while (++index < 3)
			ft_strncpy(tab[index], tab[index + 1], 4);
		ft_strncpy(tab[3], "....", 4);
		up_left(tab);
	}
}
