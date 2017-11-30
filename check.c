#include "fillit.h"

static int	check_y_0(char **tab, int x, int y)
{
	if (x == 0 && str[y + 1][x] == '.' && str[y][x + 1] == '.')
		return (0);
	else if (x == 3 && str[y][x - 1] == '.' && str[y + 1][x] == '.')
		return (0);
	else
	{
		if (str[y][x - 1] == '.' && str[y + 1][x] == '.' &&
		str[y][x + 1] == '.')
			return (0);
	}
	return (1);
}

static int	check_y_3(char **tab, int x, int y)
{
	if (x == 0 && tab[y - 1][x] == '.' && tab[y][x + 1] == '.')
		return (0);
	else if (x == 3 && tab[y - 1][x] == '.' && tab[y][x - 1] == '.')
		return (0);
	else
	{
		if (tab[y - 1][x] == '.' && tab[y][x - 1] == '.' &&
		tab[y][x + 1] == '.')
			return (0);
	}
	return (1);
}

static int	check_y_12(char **tab, int x, int y)
{
	if (x == 0 && tab[y - 1][x] == '.' &&
	tab[y + 1][x] == '.' && tab[y][x + 1] == '.')
		return (0);
	else if (x == 3 && tab[y - 1][x] == '.' &&
	tab[y + 1][x] == '.' && tab[y][x - 1] == '.')
		return (0);
	else
	{
		if (tab[y][x + 1] == '.' && tab[y + 1][x] == '.' &&
		tab[y - 1][x] == '.' && tab[y][x - 1] == '.')
			return (0);
	}
	return (1);
}

static int	check_shape(char **tab)
{
	int		x;
	int		y;
	int		count;

	y = 0;
	count = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			y++;
			if (tab[x][y] == '#')
			{
				if (count == 4)
					return (1);
				count++;
				if ((y == 0 && !check_y_0(tab, x, y)) || (y == 3 &&
				!check_y_3(tab, x, y)) || !check_y_12(tab, x, y))
					return (0);
			}
			x++;
		}
	}
	return (1);
}

int			check(t_tetris *list)
{
	int		row;
	int		span;
	int		count;

	row = 0;
	count = 0;
	while (row < 4)
	{
		span = 0;
		while (span < 4)
		{
			if (list->tab[row][span] == '#')
				count++;
			if (list->tab[row][span] != '.' && list->tab[row][span] != '#')
				return (0);
			span++;
		}
		row++;
	}
	if (count != 4 || !check_shape((char**)list->tab))
		return (0);
	return (1);
}
