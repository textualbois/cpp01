#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::string names[6] = {
		"Alice", "Benjamin", "Charlotte", "David", "Eleanor", "Felix",
	};

	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			Zombie *zombie = newZombie(names[i]);
			std::cout << "HEAP:\t";
			zombie->announce();
			delete zombie;
		}
		else
		{
			std::cout << "STACK:\t";
			randomChump(names[i]);
		}
	}

	std::cout << "Done" << std::endl;

	return (0);
}

