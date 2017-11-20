/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaudon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:40:01 by pavaudon          #+#    #+#             */
/*   Updated: 2017/11/20 17:08:34 by pavaudon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	char	buffer[BUFF_SIZE + 1];
	char	*file;

	if (ac == 2)
	{
		if (!(fd = open(ac[1], O_RDONLY)))
		{
			ft_putstr_fd("open failed", 2);
			return (0);
		}
		while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			buffer[ret] = '\0';
			if (!(create_file(buffer, &file)))
			{
				ft_putstr_fd("malloc failed", 2);
				return (0);
			}
		}
		ft_parser(file);
		close(fd);
	}
	else
		ft_putstr_fd("fillit takes one argument", 2);
	return (0);
}

int		create_list(char *buffer, char **file)
{
	char	*tmp;

	tmp = *file;
	if (!(*file = ft_strjoin(*file, buffer)))
		return (0);
	free(tmp);
	return (1);
}
