#include "fillit.h"

static char		**create_map(size)
{
	int i;

	i = 0;
	if (!(soluce = (char**)malloc(sizeof(char*) * size)))
		return ;
	while (i <= size)
	{
		if (!(soluce[i] = (char*)malloc(sizeof(char) * size)))
			return ;
		i++;
	}
	return (soluce);
}

char			**create_soluce(t_tetris *list, int nb_tetris)
{
	char	**soluce;
	int		size;

	size = ft_sqrt(nb_tetris * 4);
	i = 0;
	
	soluce = create_map(size)

/*	if (!(backtrack(soluce, *list, nb_tetris)))     //mettre nb_tetris en static?
	{
		free(soluce);
		while (i <= )
		free(soluce[i]);
		create_soluce(*list, nb_tetris + 1);        //< realloc
	}
*/	return (soluce);
}

static int		backtrack(char **soluce, t_tetris *list, int nb_tetris)
{
	char	tmp[4][4];
	int		cpt;
	int		i;
	int		j;

	cpt = 0;
	i = 0;
	j = 0;
	while (cpt <= nb_tetris)
	{
		tmp = list->tab;

	}
}
