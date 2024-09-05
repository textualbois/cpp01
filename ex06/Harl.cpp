#include "Harl.hpp"

int		Harl::get_level(const std::string filter) {
	if (filter == "WARNING") return WARNING;
	if (filter == "INFO") return INFO;
	if (filter == "DEBUG") return DEBUG;
	if (filter == "ERROR") return ERROR;
	return -1;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {
}

Harl::Harl(std::string filter) {
	_filter = get_level(filter);
	std::cout << "filter lvl is " << _filter << "\n";
}

Harl::~Harl() {
}

void	Harl::complain(std::string level) {
	switch (get_level(level))
	{
	case DEBUG:
		Harl::filter( &Harl::debug, DEBUG);
		break;
	case INFO:
		Harl::filter( &Harl::info, INFO);
		break;
	case WARNING:
		Harl::filter( &Harl::warning, WARNING);
		break;
	case ERROR:
		Harl::filter( &Harl::error, ERROR);
		break;
	default:
		std::cout << "No such debug level\n";
		return ;
	}


}

void	Harl::filter( void (Harl::*f_ptr)(), int level ) {
	if (level >= _filter)
		(this->*f_ptr)();
}