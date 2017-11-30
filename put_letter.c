#include "fillit.h"

void		put_letter(t_tetris *list)
{
	char	letter;
	int		x;
	int		y;

	letter = 'A';
	while (list)
	{
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				if (list->tab[y][x] == '#')
				{
					list->tab[y][y] = letter;
					letter+;
				}
				x++
			}
			y++;
		}
		change_char(list);
		list = list->next;
	}
}
