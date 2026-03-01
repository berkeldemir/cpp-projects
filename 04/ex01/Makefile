CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = animal
SRCS = Animal.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

wr: $(WRNAME)

$(WRNAME): $(WROBJS)
	$(CXX) $(CXXFLAGS) $(WROBJS) -o $(WRNAME)

clean:
	rm -f $(OBJS) $(WROBJS)

fclean: clean
	rm -f $(NAME) $(WRNAME)

re: fclean all

.PHONY: all clean fclean re