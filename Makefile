# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magerber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 15:09:42 by magerber          #+#    #+#              #
#    Updated: 2019/05/23 14:37:43 by magerber         ###   ########.fr        #
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

clean:
		/bin/rm -f $(OBJECT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
