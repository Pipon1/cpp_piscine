# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 14:19:37 by hefurrer          #+#    #+#              #
#    Updated: 2023/12/19 14:19:43 by hefurrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_ORANGE=\033[0;34m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[0;33m
COLOUR_CYAN=\033[0;36m

NAME = megaphone

RM			= rm -rf
SRC			=	megaphone.cpp

OBJS		= ${SRC:.cpp=.o}
CFLAGS 		= -Werror -Wextra -Wall -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
			@echo "$(COLOUR_CYAN)Compile..."
			g++ ${CFLAGS} $(OBJS) -o $@
%.o: %.cpp
		g++ $(CFLAGS) -c $< -o $@ -g3
clean:
			$(RM) ${OBJS}

fclean:		clean
			$(RM) $(NAME) *.a

re:			fclean all
