all : client server

client: client.o
	@make -C ft_printf
	cc -Wall -Werror -Wextra client.o -I include ft_printf/libftprintf.a -o client

server: server.o
	cc -Wall -Werror -Wextra server.o -I include ft_printf/libftprintf.a -o server

clean:
	@make clean -C ft_printf
	rm -rf client.o
	rm -rf server.o

fclean : clean
	@make fclean -C ft_printf
	rm -rf client
	rm -rf server

re : fclean all

.PHONY: all clean fclean re