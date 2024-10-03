#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " <<this->name << " has been created\n";
}
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " has been destroyed\n";
}


void Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n" << std::endl;
}