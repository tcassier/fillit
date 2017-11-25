#include "fillit.h"

int				main(int ac, char **av)
{
	t_tetris	*list;

	list = NULL;
	if (ac == 2)
	{
		if (!(list = reader(av[1])))
		{
			ft_putstr_fd("error\n", 1);
			return (-1);
		}
		create_soluce(list, tetris_lstsize(list));
		tetris_lstdel(list);
	}
	else
		ft_putstr_fd("error\n", 1);
	return (0);
}
