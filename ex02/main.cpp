#include <iostream>
#include <string>

int main() {
	std::string the_brain = "HI THIS IS BRAIN";
	std::string the_brain2 = "HI THIS IS BRAIN2";
	std::string *stringPTR = &the_brain;
	std::string &stringREF = the_brain;

	std::cout << "String value1:" << the_brain << std::endl;
	stringREF = the_brain2; // the_brain = the_brain2

	std::cout << "String value1:" << the_brain << std::endl;

	std::cout << "memory address1:" << &the_brain << std::endl;
	std::cout << "memory address2:" << &the_brain2 << std::endl;
	std::cout << "String value1:" << the_brain << std::endl;
	std::cout << "String value2:" << the_brain2 << std::endl;
	std::cout << "String pointer:" << *stringPTR << std::endl;
	std::cout << "String reference:" << stringREF << std::endl;
	return 0;
}
