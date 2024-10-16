#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed(const Fixed &to_cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(to_cpy.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_n);
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
}

// Surcharge de l'opérateur d'affectation
// rhs = Right-Hand Side soit si a = b alors rhs = b
// Protéger contre l'auto-affectation
// Recopie de l'attribut
// Retourner l'objet courant pour permettre l'affectation en chaîne
Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_n = rhs.getRawBits();
	}
	return (*this);
}

