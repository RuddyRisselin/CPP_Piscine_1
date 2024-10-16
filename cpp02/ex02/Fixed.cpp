#include "Fixed.hpp"


//consrtuctor
Fixed::Fixed(void)
{
	this->_n = 0;
}

Fixed::Fixed(const Fixed &to_cpy)
{
	this->setRawBits(to_cpy.getRawBits());
}

Fixed::Fixed(const int nbr)
{
	this->_n = nbr << _bits;
}

Fixed::Fixed(const float nbr)
{
	this->_n = roundf(nbr * (1 << _bits));
}

Fixed::~Fixed()
{}

//fonctions

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
// rhs = Right-Hand Side
Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return (*this);
}

// gerer le flux de sortit avec ostream pour afficher par ex : 
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed	Fixed::operator+(const Fixed &nb) const
{
	return Fixed( this->toFloat() + nb.toFloat() );
}

Fixed	Fixed::operator-(const Fixed &nb) const
{
	return Fixed( this->toFloat() - nb.toFloat() );
}

Fixed	Fixed::operator*(const Fixed &nb) const
{
	return Fixed( this->toFloat() * nb.toFloat() );
}

Fixed	Fixed::operator/(const Fixed &nb) const
{
	return Fixed( this->toFloat() / nb.toFloat() );
}

bool    Fixed::operator>(const Fixed &nb) const
{
	return this->getRawBits() > nb.getRawBits();
}

bool    Fixed::operator<(const Fixed &nb) const
{
	return this->getRawBits() < nb.getRawBits();

}

bool    Fixed::operator>=(const Fixed &nb) const
{
	return this->getRawBits() >= nb.getRawBits();
}

bool    Fixed::operator<=(const Fixed &nb) const
{
	return this->getRawBits() <= nb.getRawBits();
}

bool    Fixed::operator==(const Fixed &nb) const
{
	return this->getRawBits() == nb.getRawBits();
}

bool    Fixed::operator!=(const Fixed &nb) const
{
	return this->getRawBits() != nb.getRawBits();
}

Fixed&  Fixed::operator++(void)
{
	_n++;
	return (*this);
}

Fixed  Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed&  Fixed::operator--(void)
{
	_n--;
	return (*this);
}

Fixed  Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed& Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
        return nb1;
    return nb2;
}

Fixed&	Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
        return nb1;
    return nb2;
}

const Fixed& Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
        return nb1;
    return nb2;
}

const Fixed& Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
        return nb1;
    return nb2;
}