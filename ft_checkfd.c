/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaudon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:01:01 by pavaudon          #+#    #+#             */
/*   Updated: 2017/11/20 16:25:57 by pavaudon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkpoint(int fd)
{
	int i;
	int index;

	index = 0;
	while (tab[index])
	{
		i = 0;
		while ((tab[index][i] == '.' || tab[index][i] == '#') && tab[index])
		{
			i++;
			if ((tab[index][i] != '.' && i < 3) || tab[index][4] != '\n')
			{
				write(2, "", );			ERROR
				return (0);
			}
		}
		index++;
	}
	return (1);
}

int		ft_checknbline(char **tab)
{
	int index;
	int check;

	index = 0;
	check = 0;
	while (tab[index])
	{
		while ((tab[index][0] == '.' || tab[index][0]== '#') && tab[index])
		{
			check++;
			index++;
			if (check > 3)
			{
				write(2, "", );			ERROR
				return (0);
			}
		}
		check = 0;
		if (tab[index][0] != '\n' || tab[index + 1][0] == '\n')
		{	
			write(2, "", );			ERROR
			return (0);
		}
		index++;
	}
	return (1);
}

int		ft_checkformok(char **tab)
{
	int i;
	int index;
	int check;

	index = 0;
	check = 0;
	while (tab[index])
	{
		i = 0;
		while (tab[index][i] != '\n')
		{
			if (tab[index][i] == '#')
				check++;
			i++;
		}
		index++;
	}
	return ((chek > 4) ? 0 : 1);
}
