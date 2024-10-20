#include "animal.hpp"

animal::animal() : _type("Animal")
{
	std::cout << "default " << _type << " constructor called" << sdt::endl;
}

animal::Animal(std::string type) : _type(type)
{
	std::cout << "constructor called " << _type << " has been created" << std::endl;
}

animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "copy constructor called" << sdt::endl;

}

Animal& animal::operator=(const Animal& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if ( this != &rhs )
        this->_type = rhs._type;
    return *this;
}

animal::~animal()
{
	std::cout << this->_type << "has been destroyed" << std::endl;
}
virtual void	animal::makeSound(void) const
{
	std::cout << "makeSound called" << std::endl;
}

std::string		animal::getType(void) const
{
	return this->_type;
}