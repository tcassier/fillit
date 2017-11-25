NAME = fillit

CC = gcc $(CFLAGS)
CFLAGS = -Wall -Werror -Wextra

SRC = main.c parser.c check.c create_soluce.c tetris_lst.c

OBJ =  $(SRC:.c=.o)

INC = fillit.h

LFT_PATH = ./libft
LFT_FLAGS = -L $(LFT_PATH) -lft

all: $(NAME)

$(NAME): $(INC) $(OBJ) $(SRC) lft
	$(CC) -o $@ $(OBJ) $(LFT_FLAGS) -I $(LFT_PATH)

%.o: %.c $(INC)
	$(CC) -c $< -o $@ -I $(LFT_PATH)

clean: clean_lft
	rm -f $(OBJ)

fclean: clean fclean_lft
	rm -f $(NAME)

lft:
	make -C $(LFT_PATH) all

clean_lft:
	make -C $(LFT_PATH) clean

fclean_lft:
	make -C $(LFT_PATH) fclean

re: fclean all

.PHONY: clean all re fclean
