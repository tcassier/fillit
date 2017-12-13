/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 23:19:36 by tcassier          #+#    #+#             */
/*   Updated: 2017/12/13 18:19:25 by tcassier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <fcntl.h>

typedef struct		s_tetris
{
	char			tab[4][4];
	char			letter;
	int				width;
	int				height;
	struct s_tetris	*next;
}					t_tetris;

int					backtrack(t_tetris *list, char **map, int size_map);
int					check_link(char tab[4][4], int x, int y);
int					check_tetris(t_tetris *list);
int					check_place(t_tetris *list, char **map, int x, int y);
char				**create_map(int size);
void				display_usage(void);
void				failure(void);
void				put_lst(t_tetris *list);
void				put_map(char **map);
t_tetris			*reader(char *file);
void				remove_map(char **map);
void				remove_tetris(t_tetris *list, char **map, int x, int y);
void				resolve(t_tetris **list);

void				tetris_lstadd_back(t_tetris *list, t_tetris *new);
void				tetris_lstdel(t_tetris **list);
int					tetris_lstsize(t_tetris *list);

void				up_left(char tab[4][4]);
#endif
