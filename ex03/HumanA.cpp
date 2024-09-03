#include "humanA.hpp"

humanA::humanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon) {
}

humanA::~humanA() {
}

void humanA::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

