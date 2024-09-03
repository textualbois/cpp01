NAME = program
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
