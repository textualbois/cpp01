NAME = harl
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
SRC = Harl.cpp main.cpp
INC = Harl.hpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
