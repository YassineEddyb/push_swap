SRC = push_swap.c push_swap_actions.c push_swap_helpers.c push_swap_helpers_2.c
BONUS_SRC = checker.c push_swap_actions.c push_swap_helpers.c push_swap_helpers_2.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
NAME = push_swap
BONUS_NAME = checker
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all:
	cd libft && make && make bonus && cd ..
	$(CC) $(CFLAGS) $(SRC) $(LIBFT) $(PRINTF) -o $(NAME)

bonus:
	cd libft && make && make bonus && cd ..
	$(CC) $(CFLAGS) $(BONUS_SRC) $(LIBFT) $(PRINTF) -o checker

clean :
	cd libft && make clean && cd ..

fclean : clean
	cd libft && make fclean && cd ..
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re
