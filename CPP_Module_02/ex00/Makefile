# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 12:43:14 by hrobin            #+#    #+#              #
#    Updated: 2024/02/13 10:54:07 by hrobin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----------colors-----------#
NC=\033[0m

Black=\033[0;30m
Red=\033[0;31m
Green=\033[0;32m
Yellow=\033[0;33m
Blue=\033[0;34m
Purple=\033[0;35m
Cyan=\033[0;36m
White=\033[0;37m
Blink=\033[5m
Bold=\033[1m
#---------------------------#

NAME = Fixed

CC = c++

SRC =	main.cpp \
		Fixed.cpp \

OBJ = ${SRC:.cpp=.o}
DEPS = ${SRC:.cpp=.d}

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	@${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJ}
	@${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}
	@echo "${Red}${Blink}- ${NAME} ready.${NC}"

clean:
	@rm -f ${OBJ}
	@echo "${Cyan}$- ${NAME} cleaned.${NC}"

fclean: clean
	@rm -f ${NAME} ${DEPS}
	@echo "${Green} ${NAME} fcleaned.${NC}"

aclean: all clean

re: fclean all

-include : ${DEPS}

.PHONY: all clean fclean re bonus aclean
