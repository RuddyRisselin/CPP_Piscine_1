#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src.getType();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;

	this->_type = rhs._type;
	return *this;
}

void   Dog::makeSound( void ) const
{
	std::cout << this->getType() << " says: Ouaf Ouaf" << std::endl;
}