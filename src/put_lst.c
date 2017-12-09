/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:20:20 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/09 09:09:20 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	put_width(t_tetris *list)
{
	int		x;
	int		y;
	int		count;
	int		passed;

	while (list)
	{
		count = 0;
		x = -1;
		while (++x < 4)
		{
			passed = 0;
			y = -1;
			while (++y < 4)
			{
				if (list->tab[y][x] == '#' && passed == 0)
				{
					passed = 1;
					count++;
				}
			}
		}
		list->width = count;
		list = list->next;
	}
}

static void	put_height(t_tetris *list)
{
	int		x;
	int		y;
	int		count;
	int		passed;

	while (list)
	{
		count = 0;
		y = -1;
		while (++y < 4)
		{
			passed = 0;
			x = -1;
			while (++x < 4)
			{
				if (list->tab[y][x] == '#' && passed == 0)
				{
					count++;
					passed = 1;
				}
			}
		}
		list->height = count;
		list = list->next;
	}
}

static void	put_letter(t_tetris *list)
{
	char	letter;
	int		x;
	int		y;

	letter = 'A';
	while (list)
	{
		list->letter = letter;
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				if (list->tab[y][x] == '#')
					list->tab[y][x] = letter;
				x++;
			}
			y++;
		}
		letter++;
		up_left(list->tab);
		list = list->next;
	}
}

void		put_lst(t_tetris *list)
{
	put_width(list);
	put_height(list);
	put_letter(list);
}
