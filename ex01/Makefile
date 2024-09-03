NAME = horde
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp zombieHorde.cpp main.cpp
INC = Zombie.hpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
