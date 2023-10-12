SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strlen.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_memmove.c \
	   ft_strmapi.c \
	   ft_memset.c \
	   ft_strdup.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_putchar_fd.c \
	   ft_striteri.c \
	   ft_strnstr.c \
	   ft_bzero.c \
	   ft_itoa.c \
	   ft_putendl_fd.c \
	   ft_strjoin.c \
	   ft_calloc.c \
	   ft_putnbr_fd.c \
	   ft_strtrim.c \
	   ft_memcmp.c \
	   ft_putstr_fd.c \
	   ft_substr.c \
	   ft_memcpy.c \
	   ft_split.c \
	   ft_strlen.c \
	   ft_memchr.c \
	   ft_itoa_base.c \
	   len_str.c \
	   ft_reset.c \

SRCS_B = ft_lstnew.c \
		 ft_lstadd_front.c \
		 ft_lstsize.c \
		 ft_lstlast.c \
		 ft_lstadd_back.c \
		 ft_lstdelone.c \
		 ft_lstclear.c \
		 ft_lstiter.c \
		 ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

NAME = libft.a

RM = rm -f

all : $(NAME)

.c.o:
	gcc -c -Wall -Wextra -Werror $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus : $(OBJS) $(OBJS_B)
	ar rc $(NAME) $(OBJS) $(OBJS_B)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean : clean
	$(RM) $(NAME)

re : fclean all

rebonus : fclean bonus

.PHONY: all clean fclean re bonus
