#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <fcntl.h>

typedef struct		s_tetris
{
	char			tab[4][4];
	struct s_tetris	*next;
}					t_tetris;

t_tetris			*reader(char *file);
int					check(t_tetris *list);
char				**create_soluce(t_tetris *list, int nb_tetris);

void				tetris_lstadd_back(t_tetris *list, t_tetris *new);
void				tetris_lstdel(t_tetris *list);
int					tetris_lstsize(t_tetris *list);

void				put_letter(t_tetris *list);
#endif
