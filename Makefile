# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 00:28:38 by aheddak           #+#    #+#              #
#    Updated: 2022/06/11 10:56:56 by aheddak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    push_swap

BONUS	= 	 checker

UTILS =  ft_atoi.c ft_error.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c push.c push_swap_utiles.c rotate.c rv_rotate.c sorting_100.c sorting_ten.c sorting_three.c swap.c conditions.c

GNL = gnl/get_next_line.c gnl/get_next_line_utils.c

SRCS    =   push_swap.c 

SRCS_BONUS =  checker.c 

FLAGS    =    -Wall -Wextra -Werror

RM        =    rm -f

CC        =    gcc

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) $(UTILS) -o $(NAME)

bonus : $(BONUS)

$(BONUS) :
	$(CC)  $(FLAGS) $(SRCS_BONUS) $(UTILS) $(GNL) -o $(BONUS)

clean :
	${RM} ${NAME}

fclean : clean
	${RM} ${NAME} ${BONUS}

re : fclean all

