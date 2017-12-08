/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   failure.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:26:44 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/08 02:09:34 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	failure(void)
{
	ft_putstr("error\n");
	exit(EXIT_FAILURE);
}

void	display_usage(void)
{
	ft_putstr("usage : ./fillit file_to_read\n");
	exit(EXIT_FAILURE);
}
