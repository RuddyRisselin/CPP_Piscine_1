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

Fixed::Fixed(const int nbr) // int to fixed
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = nbr << _bits;
}

Fixed::Fixed(const float nbr) // float to fixed
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(nbr * (1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return(this->_n);
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_n) / (1 << _bits));
}

int Fixed::toInt( void ) const
{
	return (this->_n >> _bits);
}


// Surcharge de l'opérateur d'affectation
// rhs = Right-Hand Side soit si a = b alors rhs = b
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

// gerer le flux de sortit avec ostream pour afficher par ex : 
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
