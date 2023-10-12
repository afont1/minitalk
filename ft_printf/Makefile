SRCS = ./source/ft_printf.c \
	   ./source/ft_putchar.c \
	   ./source/ft_putstr.c \
	   ./source/ft_putnbr.c \
	   ./source/ft_putadress.c \
	   ./source/ft_putnbr_unsigned.c \
	   ./source/ft_put10to16.c \
	   ./source/ft_put10to16_maj.c \
	   ./source/ft_checkformat.c \



OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT = ./libft/libft.a

all : $(LIBFT) $(NAME) 

$(LIBFT) :
	make -C ./libft

.c.o:
	gcc -c -Wall -Wextra -Werror $< -o $(<:.c=.o) -I ./libft

$(NAME) : $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJS)

clean :
	make clean -C ./libft
	rm -f $(OBJS)

fclean : clean
	make fclean -C ./libft
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re libft
