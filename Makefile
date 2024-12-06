NAME = libftprintf.a
CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC_FILES = ft_printf.c outils.c

HEADER = includes

OBJS = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C libft
	@ar rcs $(NAME) $(OBJS) libft/*.o

%.o: %.c
	@$(CC) $(CFLAGS) -I$(HEADER) -c -o $@ $< -I. -Ilibft

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C libft clean

fclean: clean
	@$(MAKE) -C libft fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
