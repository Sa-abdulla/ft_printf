# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulla <sabdulla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 14:40:54 by sabdulla          #+#    #+#              #
#    Updated: 2022/04/12 16:18:22 by sabdulla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_print_ptr.c ft_print_hex.c ft_extraft.c ft_print_nbr.c \
		  ft_print_uint.c ft_printf.c

OBJS	= $(SRCS:.c=.o)

RM		= rm -rf

CC		= gcc 

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)
				
re:			fclean all
