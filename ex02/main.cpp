#include <string>
#include <iostream>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";

	std::string *p = &var;
	std::string &s = var;

	std::cout << &var << std::endl;
	std::cout << p << std::endl;
	std::cout << &s << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << var << std::endl;
	std::cout << *p << std::endl;
	std::cout << s << std::endl;
}
