# Compiler and Compiler flags
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Clear
RM = rm -rf

# Program
NAME = phonebook

# Source
SRC = $(shell ls *.cpp)

OBJS = $(SRC:.cpp=.o)

# Fichier objet
%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -cpp $< -o $@

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
