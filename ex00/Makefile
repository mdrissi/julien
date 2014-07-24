#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtouzeau <jtouzeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/15 16:54:22 by jtouzeau          #+#    #+#              #
#    Updated: 2014/07/24 04:39:39 by jtouzeau         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= bsq

SRCS		= sources/aff_tab.c \
				sources/other_sqr.c \
				sources/ft_putchar.c \
				sources/ft_putstr.c \
				sources/ft_strdup.c \
				sources/get_data.c \
				sources/main.c \
				sources/what_square.c \
				sources/ft_atoi.c \
				sources/ft_putnbr.c \
				sources/ft_strlen.c \
				sources/get_next_line.c \
				sources/size_up_carre.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -I include/ -W -ansi -pedantic -Wextra -Wall -Werror

RM			= rm -f

COLORS 		= echo "\033[35mSuccess"

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
		@$(COLORS)

all	:	$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all 
		$(RM) $(OBJS)

.phony	:	all clean fclean re