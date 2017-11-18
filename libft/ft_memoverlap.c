/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memoverlap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:48:00 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/12 17:26:25 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memoverlap(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	tmp_src = (unsigned char*)src;
	while (i < n)
	{
		if (&tmp_src[i] == dst)
			return (1);
		i++;
	}
	return (0);
}
