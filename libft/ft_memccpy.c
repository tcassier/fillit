/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 05:43:02 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/09 14:37:10 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;
	unsigned char	c_tmp;

	i = 0;
	src_tmp = (unsigned char*)src;
	dst_tmp = (unsigned char*)dst;
	c_tmp = (unsigned char)c;
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		if (src_tmp[i] == c_tmp)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
