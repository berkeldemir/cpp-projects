NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = PhoneBook.cpp Contact.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "Nothing to clean. To remove executable, try 'make fclean'."

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
