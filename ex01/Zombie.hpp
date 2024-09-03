#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
		void setName(std::string name);
		void setType(std::string type);

	private:
		std::string _name;
};

#endif //ZOMBIE_HPP
