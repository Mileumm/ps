# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbahin <tbahin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 16:04:41 by tbahin            #+#    #+#              #
#    Updated: 2025/02/09 17:54:46 by tbahin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

INCLUDE = ./includes/

CC = cc
CFLAG = -Wall -Wextra -Werror -g

SRCS =./srcs/push_swap.c ./srcs/parsing.c \
./srcs/instructions/instructions_push.c ./srcs/instructions/instructions_reverse.c \
./srcs/instructions/instructions_swap.c ./srcs/instructions/instructions_rotate.c \
./srcs/handle_errors/handle_errors.c ./srcs/check_order.c ./srcs/handle_errors/handle_errors_lst.c \
./srcs/sorts/sort_three.c ./srcs/sorts/manage_sort.c ./srcs/sorts/smart_swap_to_a.c \
./srcs/sorts/smart_swap_to_b.c ./srcs/sorts/exec_swap_to_b.c \
./srcs/instructions/instructions_outils.c \

BONUS = ./bonus/checker.c ./bonus/checker_outils.c ./bonus/checker_exec.c\
./srcs/parsing.c \
./srcs/instructions/instructions_push.c ./srcs/instructions/instructions_reverse.c \
./srcs/instructions/instructions_swap.c ./srcs/instructions/instructions_rotate.c \
./srcs/handle_errors/handle_errors.c ./srcs/check_order.c ./srcs/handle_errors/handle_errors_lst.c \
./srcs/sorts/sort_three.c ./srcs/sorts/manage_sort.c ./srcs/sorts/smart_swap_to_a.c \
./srcs/sorts/smart_swap_to_b.c ./srcs/sorts/exec_swap_to_b.c \
./srcs/instructions/instructions_outils.c \

OBJS = ${SRCS:.c=.o}

OBJSB = ${BONUS:.c=.o}

all : ${NAME} 

${NAME} : $(OBJS)
	make bonus -C ./libft
	$(CC) $(CFLAG) -o $(NAME) $(OBJS) -L./libft -lft

bonus : ${NAME_BONUS}

${NAME_BONUS} : $(OBJSB)
	make bonus -C ./libft
	$(CC) $(CFLAG) -o $(NAME_BONUS) $(OBJSB) -L./libft -lft

%.o: %.c
	$(CC) $(CFLAG) -I $(INCLUDE) -c $< -o $@

clean :
	rm -f ${OBJS}
	rm -f ${OBJSB}
	make clean -C ./libft

fclean : clean
	rm -f ${NAME}
	rm -f ${NAME_BONUS}
	make fclean -C ./libft

re : fclean all

.phony : all clean fclean re bonus
