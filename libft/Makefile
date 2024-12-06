NAME        = libft.a

CC          = cc

CFLAGS      = -Wall -Wextra -Werror -I.

RM          = rm -f

SRCS        = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
				ft_strlen.c
			  
OBJS        = $(SRCS:.c=.o)

all:        $(NAME)

$(NAME):    $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:     clean
			$(RM) $(NAME)

re:         fclean $(NAME)

.PHONY:     all clean fclean re
