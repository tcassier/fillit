/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 02:25:43 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 04:25:39 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	up_left(char tab[4][4])
{
	if (ft_strncmp("....", tab[0], 4) == 0)
	{
		ft_strncpy(tab[0], tab[1], 4);
		ft_strncpy(tab[1], tab[2], 4);
		ft_strncpy(tab[2], tab[3], 4);
		ft_strncpy(tab[3], "....", 4);
		up_left(tab);
	}
	else if (tab[0][0] == '.' && tab[1][0] == '.'
	&& tab[2][0] == '.' && tab[3][0] == '.')
	{
		ft_strncpy(tab[0], &(tab[0][1]), 3);
		ft_strncpy(tab[1], &(tab[1][1]), 3);
		ft_strncpy(tab[2], &(tab[2][1]), 3);
		ft_strncpy(tab[3], &(tab[3][1]), 3);
		tab[0][3] = '.';
		tab[1][3] = '.';
		tab[2][3] = '.';
		tab[3][3] = '.';
		up_left(tab);
	}
}
