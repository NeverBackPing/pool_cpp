CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

PROG = iter

SRCS = $(shell ls srcs/main.cpp)

OBJS =  $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(PROG) $(OBJS)

run: $(PROG)
	./$(PROG)

val: $(PROG)
		valgrind --leak-check=full --show-leak-kinds=all ./$(PROG)

clean:
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(PROG);

re: fclean all

.PHONY: all run val clean fclean re
