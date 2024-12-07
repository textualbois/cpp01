#include <iostream>
#include <string>

int main() {
	std::string the_brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &the_brain;
	std::string &stringREF = the_brain;

	// Display the content of the string directly
	std::cout << "Content directly: " << the_brain << std::endl;

	// Display the address of the string using the variable, pointer, and reference
	std::cout << "Address via variable: " << &the_brain << std::endl;
	std::cout << "Address via pointer: " << stringPTR << std::endl;
	std::cout << "Address via reference: " << &stringREF << std::endl;

	// Display the content of the string using the pointer and reference
	std::cout << "Content via pointer: " << *stringPTR << std::endl;
	std::cout << "Content via reference: " << stringREF << std::endl;

	return 0;
}
