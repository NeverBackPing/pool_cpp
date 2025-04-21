# Compiler and Compiler flags
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 -MMD

# Clear
RM = rm -rf

# Program
NAME = animal

# Source
SRC = $(shell ls srcs/*.cpp)

OBJS = $(SRC:.cpp=.o)

#inlcudes
INCLUDES = -Iincludes

# Fichier objet
%.o: %.c
	@$(CXX) $(CPPFLAGS) $(INCLUDES) $< -o $@

# Compile
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CPPFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "Compiled ✅"
	@echo "The program $(NAME) is created ✅"

clean:
	@$(RM) $(OBJS) srcs/*.d
	@echo ".o files are destroyed ✅"

fclean: clean
	@$(RM) $(NAME)
	@echo "Everything is clean ✅"

re: fclean all

.PHONY: all clean fclean re
