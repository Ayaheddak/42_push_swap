# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 00:28:38 by aheddak           #+#    #+#              #
#    Updated: 2022/06/10 13:39:08 by aheddak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    push_swap

BONUS	= 	 checker
SRCS    =  ft_error.c ft_split.c ft_strlen.c push.c push_swap_utiles.c rv_rotate.c sorting_ten.c swap.c \
			ft_atoi.c ft_free.c ft_strdup.c ft_substr.c push_swap.c rotate.c sorting_100.c sorting_three.c
SRCS_BONUS = swap.c rotate.c rv_rotate.c ft_error.c push.c checker.c push_swap_utiles.c ft_split.c ft_strlen.c \
				ft_atoi.c ft_strdup.c ft_substr.c gnl/*.c

FLAGS    =    -Wall -Wextra -Werror

RM        =    rm -f

CC        =    gcc

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

bonus :
	$(CC) $(FLAGS) $(SRCS_BONUS) -o $(BONUS)

clean :
	${RM} ${OBJCT} ${OBJCT_BONUS}

fclean : clean
	${RM} ${NAME} ${BONUS}

re : fclean all

