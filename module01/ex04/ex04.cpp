#include <iostream>
#include <string>

int main(void)
{
	std::string str("HI THIS IS BRAIN");
	
	std::string* p = &str;
	std::string& ref = str;

	std::cout << "Pointeur: " << *p << std::endl;
	std::cout << "Ref: " << ref << std::endl;
	return 0;
}