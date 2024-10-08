# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcybak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 10:12:04 by tcybak            #+#    #+#              #
#    Updated: 2024/10/08 10:12:40 by tcybak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar rcs
CC = cc -c
CFLAGS = -Wall -Werror -Wextra
NAME= libft.a
SRC= ft_strlen.c ft_strjoin.c ft_isdigit.c ft_isalpha.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(CFLAGS)
	$(AR) $(NAME) -o *.o

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
