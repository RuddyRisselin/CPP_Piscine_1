#include "Harl.hpp"

int main(void)
{
	Harl        harl;
	std::string input;

	while (input.compare("exit"))
	{
		std::cout << "Please enter a level  :" << std::endl;
		std::cout << "\t-debug" << std::endl;
		std::cout << "\t-info" << std::endl;
		std::cout << "\t-warning" << std::endl;
		std::cout << "\t-error" << std::endl;

		std::cin >> input;
		harl.complain(input);
	}
}