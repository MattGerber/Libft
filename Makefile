# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magerber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 15:09:42 by magerber          #+#    #+#              #
#    Updated: 2019/05/23 16:26:23 by magerber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

so:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o

clean:
		/bin/rm -f $(OBJECT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
