# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:10:33 by asans-go          #+#    #+#              #
#    Updated: 2023/11/29 11:41:31 by asans-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC = gcc

CFLAGS	= -Wall -Wextra -Werror -I $(HEADER)

RM	= rm -fr

HEADER = ft_printf.h

SRCS = ft_printf.c \
	   ft_print_char.c \
	   ft_print_str.c \
	   ft_print_digit.c \
	   ft_print_hex.c \
	   ft_print_ptr.c \
	   ft_print_unsig.c \
	   ft_print_format.c \

OBJS = $(SRCS:.c=.o)

#Actions
all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

#metode implicito
%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
