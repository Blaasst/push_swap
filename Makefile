#VARIABLES
NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
SRC = main.c algo_simple.c  algo_medium.c algo_complex.c bench.c count.c disorder.c
		medium_sub.c nbr_len.c ops_push.c ops_rotate.c ops_rrotate.c ops_swap.c parsing_utils.c parsing.c print_double.c print_hexa_low.c \
		stack_utils.c


OBJECTS = $(SRC:%.c=%.o)

#REGLES

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
