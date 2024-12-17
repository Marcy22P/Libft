COMPILER = cc
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(COMPILER) -I . $(FLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
