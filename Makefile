# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 13:32:23 by cmanzano          #+#    #+#              #
#    Updated: 2021/12/08 15:37:23 by cmanzano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# COLORS #
GREEN = @echo "\033[0;32m" #;4 underline
BLUE = @echo "\033[0;34m" 
PURPLE = @echo "\033[0;35m"
CYAN = @echo "\033[0;36m"
RESET = "\033[1;0m"

NAME =	libft.a
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
SRCB = 	ft_lstmap_bonus.c ft_putchar_fd.c ft_strjoin.c		\
		ft_strtrim.c ft_atoi.c ft_itoa.c					\
		ft_lstnew_bonus.c ft_putendl_fd.c ft_strlcat.c		\
		ft_substr.c ft_bzero.c ft_lstadd_back_bonus.c		\
		ft_lstsize_bonus.c ft_putnbr_fd.c ft_strlcpy.c		\
		ft_tolower.c ft_calloc.c ft_lstadd_front_bonus.c	\
		ft_memchr.c	 ft_putstr_fd.c ft_strlen.c				\
		ft_toupper.c ft_isalnum.c ft_lstclear_bonus.c		\
		ft_memcmp.c ft_split.c ft_strmapi.c					\
		ft_isalpha.c ft_lstdelone_bonus.c ft_memcpy.c		\
		ft_strchr.c ft_strncmp.c ft_isascii.c				\
		ft_lstiter_bonus.c ft_memmove.c ft_strdup.c			\
		ft_strnstr.c ft_isdigit.c ft_lstlast_bonus.c 		\
		ft_memset.c ft_striteri.c ft_strrchr.c
OBJB = $(SRCB:.c=.o)
AR = ar
AR_FLAGS = crs
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
	$(GREEN) Done!

$(NAME): $(OBJ)	
	$(BLUE) Ensambling Library $(RESET)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ)
bonus:	$(OBJB)
	@make OBJ="$(OBJB)"

%.o:	%.c 
	$(CYAN) Compiling $< $(RESET)
	$(CC) $(CFLAGS) -c $<

clean:
	$(PURPLE) Cleaned
	@rm -f $(OBJ) $(OBJB)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
