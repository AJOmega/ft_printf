NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c ft_strlen.c ft_putchar_fd.c\
	ft_unsigned_putnbr.c ft_putstr_fd.c ft_putnbr_fd.c ft_printhex.c ft_printpoint.c\

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME) 

re:	fclean $(NAME)

.PHONY: all clean fclean re