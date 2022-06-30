# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 00:28:38 by aheddak           #+#    #+#              #
#    Updated: 2022/06/14 23:12:42 by aheddak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

BONUS	=	checker

UTILS	=	ft_atoi.c ft_error.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c push.c push_swap_utiles.c rotate.c rv_rotate.c sorting_100.c\
			sorting_ten.c sorting_three.c swap.c conditions.c push_swap.c

UTILS_BONUS	=	gnl/get_next_line.c gnl/get_next_line_utils.c ft_atoi.c ft_error.c ft_split.c ft_strdup.c ft_strlen.c checker.c \
				ft_substr.c push.c push_swap_utiles.c rotate.c rv_rotate.c sorting_100.c sorting_ten.c sorting_three.c swap.c conditions.c

FLAGS	=	-Wall -Wextra -Werror

OBJCT	=	${UTILS:.c=.o}

OBJCTB	=	${UTILS_BONUS:.c=.o}

RM		=	rm -f

CC		=	gcc

all		:	$(NAME)

$(NAME)	:	$(OBJCT)	
	$(CC) $(FLAGS) $(UTILS) -o $(NAME)

bonus : $(BONUS)

$(BONUS) : $(OBJCTB)
	$(CC) $(FLAGS) $(UTILS_BONUS) -o $(BONUS)

clean :
	${RM} $(OBJCT) $(OBJCTB)

fclean : clean
	${RM} ${NAME} ${BONUS}

re : fclean all
