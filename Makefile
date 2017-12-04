NAME=build
FLAGS=-Wall -Wextra -Werror

OBJECTS = *.o
all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C libftprintf/
	gcc $(OBJECTS) -o $(NAME) $(FLAGS) libftprintf/libft.a

clean :
	-rm $(OBJECTS)
fclean : clean
	-rm $(NAME)
re: fclean all

