/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 02:52:14 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/07 20:09:28 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	index;

	index = -1;
	while (src[++index] && index < n)
		dst[index] = src[index];
	index--;
	while (++index < n)
		dst[index] = '\0';
	return (dst);
}
