/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:57:20 by tcassier          #+#    #+#             */
/*   Updated: 2017/11/12 15:10:16 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	res;
	int					sign;
	int					i;

	i = 0;
	res = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(str[i]))
		res = res * 10 + str[i++] - '0';
	if (i > 19 || res > 9223372036854775807)
		return ((sign == 1) ? -1 : 0);
	return ((int)res * sign);
}
