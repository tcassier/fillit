/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 05:32:00 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/11 00:37:23 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	if (s1 == s2 || n == 0)
		return (0);
	i = 0;
	s1_tmp = (unsigned char*)s1;
	s2_tmp = (unsigned char*)s2;
	while (i < n && s1_tmp[i] == s2_tmp[i])
		i++;
	if (i == n)
		i--;
	return (s1_tmp[i] - s2_tmp[i]);
}
