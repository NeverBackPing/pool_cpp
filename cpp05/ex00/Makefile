CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g

PROG = Bureaucrat

SRCS = $(shell ls *.cpp)

OBJS =  $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(PROG) $(OBJS)

run: $(PROG)
	./$(PROG)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(PROG);

.PHONY: all run clean fclean
