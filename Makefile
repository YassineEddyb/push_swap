SRC = push_swap.c  push_swap_actions.c  push_swap_helpers.c push_swap_helpers_2.c
BONUS_SRC = checker.c push_swap_actions.c push_swap_helpers.c push_swap_helpers_2.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
NAME = push_swap
LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

all:
	cd libft && make && make bonus && cd ..
	cd ft_printf && make && cd ..
	$(CC) $(FLAGS) $(SRC) $(LIBFT) $(PRINTF) -g -o $(NAME)

bonus:
	cd libft && make && make bonus && cd ..
	cd ft_printf && make && cd ..
	$(CC) $(FLAGS) $(BONUS_SRC) $(LIBFT) $(PRINTF) -g -o checker

clean :
	cd libft && make clean && cd ..
	cd ft_printf && make clean && cd ..

fclean : clean
	cd libft && make fclean && cd ..
	cd ft_printf && make fclean && cd ..
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re