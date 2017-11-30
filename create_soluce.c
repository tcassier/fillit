#include "fillit.h"

#include <stdio.h>
/*
int	ft_sqrt(int nb)
{
	int	tmp;
	int result;

	tmp = 0;
	result = 0;
	printf("nb : %d\n", nb);
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (tmp < nb && result <= nb)
	{
		result = tmp * tmp;
		tmp++;
	}
	if (result == nb)
		return (tmp - 1);
	else
		return (tmp - 2);
	return (0);
}


char	**create_map(int size)				//créer la map de la fin
{
	char	**map;
	int	index;
	int i;

	i = 0;
	if (size <= 4)
		index = 4;
	else
		index = sqrt(size * 4);
	if (!(map = (char**)malloc(sizeof(char*) * index)))
		return (NULL);
	while (i++ <= index)
	{
		if (!(map[i] = (char*)malloc(sizeof(char) * index)))
			return (NULL);
	}
	return (map);
}

char **fill_point(char **tab, int index)
{
	int i;
	int j;

	j = 0;
	while (j < index)
	{
		i = 0;
		while (i < index)
		{
				tab[j][i] = '.';
			i++;
		}
		j++;
	}
	return (tab);
}
*/
/*
int 	main()
{
	char **map;
	int test;
	int index;
	int i;

	test = 7;
	i = 0;
	if (test <= 5)
		index = 4;
	else
		index = ft_sqrt(test * 4);
	if (!(map = create_map(index)))
	{
		return (0);
	}
	while (i < index)
	{
		printf("%s\n", map[i]);
		i++;
	}
	return (0);
}
*/

int	number_d(char **tab)			//combien de # sur x
{
	int x;
	int y;
	int cpt;

	x = 0;
	cpt = 0;

	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (tab[y][x] == '#')
			{
				cpt++;
				printf("y : %d x : %d cpt : %d\n", y, x, cpt);
			}
			y++;
		}
		x++;
	}
	return (cpt);
}

int 	first_d(char **tab)    //premier x contenant #
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (tab[y][x] == '#')
				return (x);
			y++;
		}
	}
		return (x);
}
/*
char	**find_first_d(char **tab)	//trouve le début de la forme
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (tab[y][x] == '#')
				return (&tab[y][x]);
			x++;
		}
		y++;
	}
	return (NULL);
}
*/
int		main()
{
	char **tab;

	if (!(tab = (char**)malloc(sizeof(char*) * 4)))
		return (0);
	tab[0] = "##..";
	tab[1] = ".##.";
	tab[2] = "....";
	tab[3] = "....";
	printf("\nnumber_d : %d first_d : %d\n", number_d(tab), first_d(tab));
	return (0);
}

/*
char	**next_soluce_pos(char **tab)	//trouve la possibilité de poser
{
	int x;
	int y;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == ".")
				return (&tab[y][x]);
			x++;
		}
	}
	return (NULL);
}

char	**tab_cpy(char **src, char **dest)
{
	int x;
	int y;

	while (y < 4)
	{
		if (number_d(src[y]) == 0)
			y++;
		if (!(dest[y] = ft_strsub(find_first_d(src[y]), first_d(src) number_d(src))))
			return (NULL);
		y++;
	}
	return (dest);
}

char	**resolve(t_tetris *list, int size)
{
	char			**tab_soluce;
	t_tetris	*tmp;
	int				where;

	where = 0;
	while (where <= size)
	{
		*tmp = *list;
		tab_soluce = create_tab(size);
		while (*list)
		{
			if (!tab_cpy(tmp->tab, next_soluce_pos(&tab_soluce)))

		}
	}
}
*/
