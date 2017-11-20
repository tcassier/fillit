/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaudon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:20:10 by pavaudon          #+#    #+#             */
/*   Updated: 2017/11/20 17:46:23 by pavaudon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_parser_yolo(char **tab)
{
	int x;
	int y;
	int cpt;

	y = 0;
	cpt = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (tab[x][y] == '#')
			{
				if (cpt == 4)
					return (1);
				cpt++;
				if (tab[y][x + 1] == '.' && tab[y + 1][x] == '.')
					return (0);
				else
					x++;
			}
		}
		y++;
	}
	return (1);
}

void	ft_parser_letter(char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab[y])
	{
		
	}
}
