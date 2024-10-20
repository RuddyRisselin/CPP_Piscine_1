#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src.getType();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;

	this->_type = rhs._type;
	return *this;
}

void   Cat::makeSound( void ) const
{
	std::cout << this->getType() << " says: Meeeeeeooooowwwwww" << std::endl;
}