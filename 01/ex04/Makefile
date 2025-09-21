CXX = @c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = replacer
SRCS = main.cpp \
		replacer.cpp
OBJS = $(SRCS:.cpp=.o)

TESTNAME = tests
TESTSRCS = test.cpp \
			replacer.cpp
TESTOBJS = $(TESTSRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)
	@echo "Usage: ./replacer <file_name> <str_to_replace> <str_to_replace_with>"

test: $(TESTNAME)
	
$(TESTNAME): $(TESTOBJS)
	@$(CXX) $(TESTOBJS) -o $(TESTNAME)
	@./$(TESTNAME)
	@rm -f $(TESTOBJS) $(TESTNAME)

rmfiles:
	rm -f *.replace

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all tests clean fclean re rmfiles