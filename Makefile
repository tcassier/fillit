# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcassier <tcassier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/07 23:19:18 by tcassier          #+#    #+#              #
#    Updated: 2018/01/31 09:38:59 by tcassier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean all re fclean

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INC_PATH) -I$(LFT_INC_PATH)

SRC_PATH = ./src/
SRCS = $(addprefix $(SRC_PATH), $(SRC))
SRC = backtrack.c        \
	  check_link.c       \
	  check_tetris.c     \
	  failure.c          \
	  main.c             \
	  new_map.c          \
	  parser.c           \
	  put_map.c          \
	  put_lst.c          \
	  put_tetris.c       \
	  resolve.c          \
	  tetris_lst.c       \
	  up_left.c

OBJ_PATH = ./obj/
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))
OBJ = $(SRC:.c=.o)

INC_PATH = ./includes/
INCS = $(addprefix $(INC_PATH), $(INC))
INC = fillit.h

LFT_INC_PATH = $(LFT_PATH)includes
LFT_PATH = ./libft/
LFT_FLAGS = -L $(LFT_PATH) -lft

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJS)
	@make -C $(LFT_PATH) re
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(LFT_FLAGS)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean: clean_lft
	@rm -f $(OBJ)
	@rm -rf $(OBJ_PATH)

fclean: clean fclean_lft
	@rm -f $(NAME)

clean_lft:
	@make -C $(LFT_PATH) clean

fclean_lft:
	@make -C $(LFT_PATH) fclean

re: fclean all
