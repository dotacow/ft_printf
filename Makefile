CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putadd_fd.c ft_putnbr_fd_lower.c
OFILES = $(SRC:.c=.o)
LIBDIR = libft
NAME = libftprintf.a
LIB = $(LIBDIR)/libft.a

all: $(NAME)

$(NAME): $(OFILES) $(LIB)
	ar rcs $(NAME) $(OFILES)

demo : all
	cc printdemo.c -L. -lftprintf -o printdemo

$(LIB):
	make -C $(LIBDIR)
	mv $(LIB) $(NAME)

clean:
	rm -f $(OFILES)
	make clean -C $(LIBDIR)

dclean:
	rm -rf printdemo printdemo.o

fclean: clean dclean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re demo dclean