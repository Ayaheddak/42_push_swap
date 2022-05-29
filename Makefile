# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 00:28:38 by aheddak           #+#    #+#              #
#    Updated: 2022/05/29 11:30:45 by aheddak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    push_swap

SRCS    =    *.c

OBJCT    =    ${SRCS:.c=.o}

FLAGS    =    -Wall -Wextra -Werror

RM        =    rm -f

CC        =    gcc

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	${RM} ${OBJCT}

fclean : clean
	${RM} ${NAME}

re : fclean all

