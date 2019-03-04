OBJECTS = *.o
BINAIRE = run
SOURCES = *.c\

FLAGS = -Wall -Werror -Wextra -g
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCES) -I libft.h
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(BINAIRE)
	rm -f $(OBJECTS)


fclean: clean
	rm -f $(NAME)

re: fclean all
