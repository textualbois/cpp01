#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		Harl( std::string filter );
		~Harl();
		void	complain( std::string level );

	private:
		enum {
			DEBUG,
			INFO,
			WARNING,
			ERROR
		};
		int	_filter;

		int		get_level( std::string filter );
		void	filter(void (Harl::*f_ptr)() , int level);
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif //HARL_HPP
