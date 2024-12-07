#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main( int argc, char *argv[] ) {
	if (argc != 4)
	{
		std::cout << "wrong argument count" << std::endl;
		return 1;
	}
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string new_file_name = file_name + ".replace";


	std::ifstream file(file_name);
	if (!file.is_open())
	{
		std::cout << "file open error" << std::endl;
		return 1;
	}

	std::ofstream outFile(new_file_name);
	if (!outFile.is_open())
	{
		std::cout << "file open error" << std::endl;
		file.close();
		return 1;
	}


	std::stringstream buffer;
	buffer << file.rdbuf();
	file.close();

	std::string input_str = buffer.str();
	std::string result;
	size_t pos = 0;
	size_t lastPos = 0;
	while ((pos = input_str.find(s1, lastPos)) != std::string::npos) {
		result.append(input_str.substr(lastPos, pos - lastPos));
		result.append(s2);
		lastPos = pos + s1.length();
	}
	result.append(input_str.substr(lastPos));

	outFile << result;
	outFile.close();

	return 0;
}
