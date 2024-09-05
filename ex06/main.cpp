#include "Harl.hpp"

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Usage: ./ex06 [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}
	Harl harl(argv[1]);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	return 0;
}
