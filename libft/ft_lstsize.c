/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 00:41:36 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/11 00:48:35 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list **begin_list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
