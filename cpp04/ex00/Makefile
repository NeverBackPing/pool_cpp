# Compiler and Compiler flags
CPP = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 -MMD

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
	@$(CPP) $(CFLAGS) $(INCLUDES) $< -o $@

# Compile
all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "Compiled ✅"
	@echo "The program $(NAME) is created ✅"

clean:
	@$(RM) $(OBJS)
	@echo ".o files are destroyed ✅"

fclean: clean
	@$(RM) $(NAME)
	@echo "Everything is clean ✅"

re: fclean all

.PHONY: all clean fclean re
