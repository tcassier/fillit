/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:19:59 by tcassier          #+#    #+#             */
/*   Updated: 2018/02/21 19:38:22 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int ac, char **av)
{
	t_tetris	*list;

	list = NULL;
	if (ac == 2)
	{
		if (!(list = reader(av[1])))
			failure();
		resolve(&list);
		tetris_lstdel(&list);
	}
	else
		display_usage();
	return (EXIT_SUCCESS);
}
