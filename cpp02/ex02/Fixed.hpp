#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int _n;
	static const int _bits = 8;
public:
	Fixed(void);
	Fixed(const int to_cpy);
	Fixed(const Fixed &nbr);
	Fixed(const float nbr);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed	operator+(const Fixed &obj) const;
	Fixed	operator-(const Fixed &obj) const;
	Fixed	operator*(const Fixed &obj) const;
	Fixed	operator/(const Fixed &obj) const;
	Fixed	&operator=(const Fixed &rhs);

	Fixed&  operator++(void);
	Fixed  operator++(int);
	Fixed&  operator--(void);
	Fixed  operator--(int);

	bool    operator>(const Fixed &obj) const;
	bool    operator<(const Fixed &obj) const;
	bool    operator>=(const Fixed &obj) const;
	bool    operator<=(const Fixed &obj) const;
	bool    operator==(const Fixed &obj) const;
	bool    operator!=(const Fixed &obj) const;

	static Fixed&		min(Fixed &nb1, Fixed &nb2);
	static Fixed&		max(Fixed &nb1, Fixed &nb2);
	static Fixed const&	min(const Fixed &nb1, const Fixed &nb2);
	static Fixed const&	max(const Fixed &nb1, const Fixed &nb2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif