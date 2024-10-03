#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " has been destroyed\n";
}


void Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void Zombie::setZombieName(std::string name)
{
	this->name = name;
}