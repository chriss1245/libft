# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 13:32:23 by cmanzano          #+#    #+#              #
#    Updated: 2021/12/13 16:05:38 by chris            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ECHO IS DIFFERENT IN LUNUX
ifeq ($(shell uname), Linux)
ECHO = echo -e
else
ECHO = echo
endif

# COLOR
GREEN = @$(ECHO) "\033[0;32m" #;4 underline
BLUE = @$(ECHO) "\033[0;34m" 
PURPLE = @$(ECHO) "\033[0;35m"
CYAN = @$(ECHO) "\033[0;36m"
RESET = "\033[1;0m"

# ENSAMBLER
AR = ar
AR_FLAGS = crs

# COMPILER
CC = gcc
CFLAGS = -Wall -Werror -Wextra

#FILENAME
NAME =	libft.a

# INCLUDE FILES
INC_DIR = inc

# SOURCE FILES
SRC_DIR = src
OBJ_DIR = obj
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
		ft_strnstr.c 								\
		ft_lstmap_bonus.c ft_lstnew_bonus.c			\
		ft_lstadd_back_bonus.c ft_lstsize_bonus.c	\
		ft_lstadd_front_bonus.c	ft_lstclear_bonus.c	\
		ft_lstdelone_bonus.c ft_lstiter_bonus.c		\
		ft_lstlast_bonus.c
OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

# MODULES
PRINTF = libftprintf.a
PRINTF_DIR = printf
PRINTF_H = ft_printf.h

all: $(OBJ_DIR) $(NAME)
	$(GREEN) Done!

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(PRINTF_DIR)/$(PRINTF) $(OBJS)
	$(BLUE) Ensambling Library $(RESET)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS)


$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c 
	$(CYAN) Compiling $< $(RESET)
	$(CC) $(CFLAGS) -c $< -o $@

$(PRINTF_DIR)/$(PRINTF):
	@make -sC $(PRINTF_DIR)
	@cp $(PRINTF_DIR)/$(PRINTF) $(NAME)
	@cp $(PRINTF_DIR)/$(INC_DIR)/$(PRINTF_H) $(INC_DIR)/$(PRINTF_H)

clean:
	$(PURPLE) Cleaned
	@rm -rf $(OBJ_DIR)
	@make clean -sC $(PRINTF_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(PRINTF_DIR)/$(PRINTF)

re: fclean all

.PHONY: all clean fclean re create_dirs $(OBJ_DIR)/%.o $(PRINTF_DIR)/$(PRINTF)
