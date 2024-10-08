#include "Harl.hpp"

int main(void)
{
	Harl        harl;
	std::string input;

	while (input.compare("exit"))
	{
		std::cout << "Please enter a level between 0 and 3 :" << std::endl;
		std::cin >> input;
		harl.complain(input);
	}
}