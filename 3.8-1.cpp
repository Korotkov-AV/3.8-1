// 3.8-1.cpp
//

#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
	if (size(str) != forbidden_length)	return size(str);
	throw "bad_length";
}
int main(int argc, char** argv)
{
	int frn;//forbidden number
	std::string word;
	std::cout << "Input forbidden number: ";
	std::cin >> frn;
	while (1)
	{
		try {
			std::cout << "Input word: ";
			std::cin >> word;
			std::cout << "The length of the word \"" << word << "\" = " << function(word, frn) << std::endl;
		}
		catch (const char*) {
			std::cout << "You input word with forbidden length!\nGood Bye!";
			break;
		}
	}
}
