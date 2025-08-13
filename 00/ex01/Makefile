NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = PhoneBook.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
