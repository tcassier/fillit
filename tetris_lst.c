#include "fillit.h"

void	tetris_lstadd_back(t_tetris *list, t_tetris *new)
{
	while (list->next)
		list = list->next;
	list->next = new;
}

void	tetris_lstdel(t_tetris *list)
{
	t_tetris	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

int		tetris_lstsize(t_tetris *list)
{
	int		index;

	index = 0;
	while (list)
	{
		list = list->next;
		index++;
	}
	return (index);
}
