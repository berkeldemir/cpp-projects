NAME = bureaucrat
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all

.PHONY: all clean fclean re