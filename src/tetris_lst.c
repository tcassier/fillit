/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:20:25 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/07 23:20:26 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tetris_lstadd_back(t_tetris *list, t_tetris *new)
{
	while (list->next)
		list = list->next;
	list->next = new;
}

void	tetris_lstdel(t_tetris **list)
{
	t_tetris	*tmp;

	tmp = NULL;
	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
	*list = NULL;
}

int		tetris_lstsize(t_tetris *list)
{
	int		index;

	index = 0;
	while (list)
	{
		list = list->next;
		index++;
	}
	return (index);
}
