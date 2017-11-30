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
<<<<<<< HEAD
	//resolve(list, tetris_lstsize(list));
	tetris_lstdel(list);
=======
		create_soluce(list, tetris_lstsize(list));
		tetris_lstdel(list);
>>>>>>> 0a96caeefe20f9c51e6383251be259407aa5c23a
	}
	//else
		//ft_putstr_fd("error\n", 1);
	return (0);
}
