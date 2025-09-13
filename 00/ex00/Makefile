NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = ./megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "Nothing to clean. To remove executable, try 'make fclean'."

fclean: 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re