# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 13:32:23 by cmanzano          #+#    #+#              #
#    Updated: 2021/12/06 13:41:15 by cmanzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_memchr.c ft_strchr.c ft_strrchr.c		\
		ft_atoi.c ft_memcmp.c ft_strdup.c			\
		ft_strtrim.c ft_bzero.c ft_memcpy.c			\
		ft_striteri.c ft_substr.c ft_calloc.c		\
		ft_memmove.c ft_strjoin.c ft_tolower.c		\
		ft_isalnum.c ft_memset.c ft_strlcat.c		\
		ft_toupper.c ft_isalpha.c ft_putchar_fd.c	\
		ft_strlcpy.c ft_isascii.c ft_putendl_fd.c	\
		ft_strlen.c ft_isdigit.c ft_putnbr_fd.c		\
		ft_strmapi.c ft_isprint.c ft_putstr_fd.c	\
		ft_strncmp.c ft_itoa.c ft_split.c			\
		ft_strnstr.c
OBJ = $(SRC:.c=.o)
SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c	\
	   ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	   ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJB = $(SRCB:.c=.o)
AR = ar
AR_FLAGS = crs
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)	
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ)

bonus:	$(OBJ) $(OBJB)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ) $(OBJB)

%.o:	%.c 	#for each .o: depends in .c do this
	$(CC) $(CFLAGS) -c $< # $< refers the rule, $@ referes the dependency

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
