/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaudon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 16:59:36 by pavaudon          #+#    #+#             */
/*   Updated: 2017/11/23 17:00:09 by pavaudon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int result;

	sqrt = 0;
	result = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (sqrt < nb && result != nb)
	{
		result = sqrt * sqrt;
		sqrt++;
	}
	if (result == nb)
		return (sqrt - 1);
	return (0);
}
