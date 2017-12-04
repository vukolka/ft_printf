NAME=build
FLAGS=-Wall -Wextra -Werror
OBJECTS = ft_printf/ft_printf.o main.o
all: $(NAME)

$(OBJECTS) : %.o: %.c
	$(CC) -c $(FLAGS) -I libftprintf/ -I ft_printf/ $< -o $@
	

$(NAME): $(OBJECTS)
	$(MAKE) -C libftprintf/
	gcc $(OBJECTS) -o $(NAME) $(FLAGS) libftprintf/libft.a

clean :
	-rm $(OBJECTS)
fclean : clean
	-rm $(NAME)
re: fclean all

