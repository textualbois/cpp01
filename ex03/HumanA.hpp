#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class humanA {
	public:
		humanA(std::string name, Weapon &weapon);
		~humanA();
		void attack( void );

	private:
		std::string _name;
		Weapon &_weapon;
};

#endif //ZOMBIEA_HPP
