# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 11:49:40 by hefurrer          #+#    #+#              #
#    Updated: 2024/01/10 11:49:57 by hefurrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_ORANGE=\033[0;34m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[0;33m
COLOUR_CYAN=\033[0;36m

NAME	= sed_is_for_losers

RM				= rm -rf

SRC				=	main.cpp

DIRS			= objs
OBJS			= ${SRC:.cpp=.o}
CFLAGS 			= -I -Werror -Wextra -Wall -std=c++98
_OBJS			= $(addprefix $(DIRS)/, $(OBJS))


all: ${NAME}

${NAME}: ${_OBJS}
			@echo "$(COLOUR_CYAN)Compile..."
			c++ ${CFLAGS} $(_OBJS) -o $@
${DIRS}/%.o: %.cpp
		@mkdir -p $(DIRS)
		c++ $(CFLAGS) -c $< -o $@ -g3
clean:
			$(RM) ${_OBJS}

fclean:		clean
			$(RM) $(NAME) *.a
			rm -rf $(DIRS)

re:			fclean all
