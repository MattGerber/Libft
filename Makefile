NAME = libft.a
FLAGS = -Wall -Werror -Wextra
OBJECT = *.o
SOURCE = *.c
OPTIONS = -c -I.

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(OPTIONS) $(SOURCE)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJECT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all