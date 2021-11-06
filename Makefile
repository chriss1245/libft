NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AR = ar
AR_FLAGS = crs
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ)

%.o:	%.c 	#for each .o: depends in .c do this
	$(CC) $(CFLAGS) -c -o $< $@	# $< refers the rule, $@ referes the dependency

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
