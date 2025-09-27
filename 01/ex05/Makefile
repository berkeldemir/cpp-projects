CXX = @c++
CXXFLAGS = #-Wall -Wextra -Werror -std=c++98

NAME = harl
SRCS = main.cpp \
		Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)
	@echo "Usage: \"./harl\" OR \"./harl <DEBUG/INFO/WARNING/ERROR>\""

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all tests clean fclean re