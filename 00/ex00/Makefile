NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ./megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f megaphone.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re