#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "default " << _type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "constructor called " << _type << " has been created" << std::endl;
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "copy constructor called" << std::endl;

}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
        this->_type = rhs._type;
    return *this;
}

Animal::~Animal()
{
	std::cout << this->_type << " has been destroyed" << std::endl;
}
void	Animal::makeSound(void) const
{
	std::cout << "makeSound called" << std::endl;
}

std::string		Animal::getType(void) const
{
	return this->_type;
}