#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "default " << _type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "constructor called " << _type << " has been created" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	*this = src;
	std::cout << "copy constructor called" << std::endl;

}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
        this->_type = rhs._type;
    return *this;
}

AAnimal::~AAnimal()
{
	std::cout << this->_type << " has been destroyed" << std::endl;
}
void	AAnimal::makeSound(void) const
{
	std::cout << "makeSound called" << std::endl;
}

std::string		AAnimal::getType(void) const
{
	return this->_type;
}