/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 05:37:50 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/08 14:09:25 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_tmp;
	unsigned char	c_tmp;

	i = 0;
	s_tmp = (unsigned char*)s;
	c_tmp = (unsigned char)c;
	while (i < n)
	{
		if (s_tmp[i] == c_tmp)
			return ((void*)(s_tmp + i));
		i++;
	}
	return (NULL);
}
