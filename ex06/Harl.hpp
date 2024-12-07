#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		~Harl();
		void	complain( std::string level );

	private:
		void debug();
		void info();
		void warning();
		void error();

		std::string _level[4];
		void (Harl::*function[4])();
};

#endif //HARL_HPP
