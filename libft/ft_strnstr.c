/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:31:04 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/16 15:31:11 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(needle[i]))
		return ((char*)haystack);
	while (haystack[j] && j < len)
	{
		while (haystack[j] && haystack[i + j] == needle[i] && (j + i) < len)
		{
			i++;
			if (!(needle[i]))
				return ((char*)haystack + j);
		}
		i = 0;
		j++;
	}
	return (NULL);
}
