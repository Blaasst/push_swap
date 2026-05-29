#VARIABLES
NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
SRC = main.c algo_simple.c  algo_medium.c algo_complex.c bench.c count.c disorder.c \
		medium_sub.c ops_push.c ops_rotate.c ops_rrotate.c ops_swap.c parsing_utils.c parsing.c print_double.c \
		stack_utils.c ft_lstadd_back_ops.c ft_lstadd_back.c ft_lstadd_front_ops.c ft_lstadd_front.c ft_lstclear_data.c \
		ft_lstclear_ops.c ft_lstclear.c ft_lstlast_ops.c ft_lstlast.c ft_lstnew_ops.c ft_printf.c ft_strncmp.c\
		ft_lstnew.c ft_lstsize_ops.c ft_lstsize.c ft_print_list.c ft_strlen.c print_char.c\
		print_hexa_low.c print_int.c print_nil.c print_pointer.c print_string.c print_unsigned_int.c print_hexa_up.c \
		main_utils.c main_parsing.c ft_split.c \


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
